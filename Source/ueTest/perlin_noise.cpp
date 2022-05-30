#include "perlin_noise.h"
#include <algorithm>
#include "uniform_random.h"
#include <array>

 constexpr perlin_noise::value_type fade(perlin_noise::value_type t) noexcept
{
	return t * t * t * (t * (t * 6 - 15) + 10);
}

 constexpr perlin_noise::value_type lerp(perlin_noise::value_type t, perlin_noise::value_type a, perlin_noise::value_type b) noexcept
{
	return a + t * (b - a);
}

 constexpr perlin_noise::value_type grad(std::uint8_t hash, perlin_noise::value_type x, perlin_noise::value_type y, perlin_noise::value_type z) noexcept
{
	const std::uint8_t h = hash & 15;
	const perlin_noise::value_type u = h < 8 ? x : y;
	const perlin_noise::value_type v = h < 4 ? y : h == 12 || h == 14 ? x : z;
	return ((h & 1) == 0 ? u : -u) + ((h & 2) == 0 ? v : -v);
}

 constexpr perlin_noise::value_type weight(std::int32_t octaves) noexcept
{
	 perlin_noise::value_type amp = 1;
	 perlin_noise::value_type value = 0;

	for (std::int32_t i = 0; i < octaves; ++i)
	{
		value += amp;
		amp *= 0.5;
	}

	return value;
}


perlin_noise::perlin_noise(_UniformRandom* urng)
	{
		for (size_t i = 0; i < 256; ++i)
		{
			p[i] = static_cast<std::uint8_t>(i);
		}

		std::shuffle(std::begin(p), std::begin(p) + 256, urng->engine);

		for (size_t i = 0; i < 256; ++i)
		{
			p[256 + i] = p[i];
		}
	}

  
perlin_noise::value_type perlin_noise::noise3D(perlin_noise::value_type x, perlin_noise::value_type y, perlin_noise::value_type z) const noexcept
	{
		const std::int32_t X = static_cast<std::int32_t>(std::floor(x)) & 255;
		const std::int32_t Y = static_cast<std::int32_t>(std::floor(y)) & 255;
		const std::int32_t Z = static_cast<std::int32_t>(std::floor(z)) & 255;

		x -= std::floor(x);
		y -= std::floor(y);
		z -= std::floor(z);

		const value_type u = fade(x);
		const value_type v = fade(y);
		const value_type w = fade(z);

		const std::int32_t A = p[X] + Y, AA = p[A] + Z, AB = p[A + 1] + Z;
		const std::int32_t B = p[X + 1] + Y, BA = p[B] + Z, BB = p[B + 1] + Z;

		return lerp(w, lerp(v, lerp(u, grad(p[AA], x, y, z),
			grad(p[BA], x - 1, y, z)),
			lerp(u, grad(p[AB], x, y - 1, z),
				grad(p[BB], x - 1, y - 1, z))),
			lerp(v, lerp(u, grad(p[AA + 1], x, y, z - 1),
				grad(p[BA + 1], x - 1, y, z - 1)),
				lerp(u, grad(p[AB + 1], x, y - 1, z - 1),
					grad(p[BB + 1], x - 1, y - 1, z - 1))));
	}

 
perlin_noise::value_type perlin_noise::_UnnormalizedNoise1D(perlin_noise::value_type x, std::int32_t octaves) const noexcept
	{
		value_type result = 0;
		value_type amp = 1;

		for (std::int32_t i = 0; i < octaves; ++i)
		{
			result += noise1D(x) * amp;
			x *= 2;
			amp *= 0.5;
		}

		return result; // unnormalized
	}
 
perlin_noise::value_type perlin_noise::_UnnormalizedNoise2D(perlin_noise::value_type x, perlin_noise::value_type y, std::int32_t octaves) const noexcept
	{
		value_type result = 0;
		value_type amp = 1;

		for (std::int32_t i = 0; i < octaves; ++i)
		{
			result += noise2D(x, y) * amp;
			x *= 2;
			y *= 2;
			amp *= 0.5;
		}

		return result; // unnormalized
	}
 
perlin_noise::value_type perlin_noise::_UnnormalizedNoise3D(perlin_noise::value_type x, perlin_noise::value_type y, perlin_noise::value_type z, std::int32_t octaves) const noexcept
{
	perlin_noise::value_type result = 0;
	perlin_noise::value_type amp = 1;

	for (std::int32_t i = 0; i < octaves; ++i)
	{
		result += noise3D(x, y, z) * amp;
		x *= 2;
		y *= 2;
		z *= 2;
		amp *= 0.5;
	}

	return result; // unnormalized
}

  
	perlin_noise::value_type perlin_noise::noise1D(perlin_noise::value_type x, std::int32_t octaves) const noexcept
	{
		return _UnnormalizedNoise1D(x, octaves)
			/ weight(octaves);
	}
	 
	perlin_noise::value_type perlin_noise::noise2D(perlin_noise::value_type x, perlin_noise::value_type y, std::int32_t octaves) const noexcept
	{
		return _UnnormalizedNoise2D(x, y, octaves)
			/ weight(octaves);
	}
	 
	perlin_noise::value_type perlin_noise::noise3D(perlin_noise::value_type x, perlin_noise::value_type y, perlin_noise::value_type z, std::int32_t octaves) const noexcept
	{
		return _UnnormalizedNoise3D(x, y, z, octaves)
			/ weight(octaves);
	}


 
	void perlin_noise::serialize(std::array<std::uint8_t, 256>& s) const noexcept
	{
		for (std::size_t i = 0; i < 256; ++i)
		{
			s[i] = p[i];
		}
	}

	void perlin_noise::deserialize(const std::array<std::uint8_t, 256>& s) noexcept
	{
		for (std::size_t i = 0; i < 256; ++i)
		{
			p[256 + i] = p[i] = s[i];
		}
	}



