#pragma once
 
 
class _UniformRandom;

class perlin_noise  
{
public:
	using value_type = double;
public:
	explicit perlin_noise(_UniformRandom* urng);
 
public:

	///////////////////////////////////////
	//
	//	Noise [-1, 1]
	//

	value_type noise1D(value_type x) const noexcept
	{
		return noise3D(x, 0, 0);
	}

	value_type noise2D(value_type x, value_type y) const noexcept
	{
		return noise3D(x, y, 0);
	}

	value_type noise3D(value_type x, value_type y, value_type z) const noexcept;


	value_type _UnnormalizedNoise1D(value_type x, std::int32_t octaves) const noexcept;

	value_type _UnnormalizedNoise2D(value_type x, value_type y, std::int32_t octaves) const noexcept;

	value_type _UnnormalizedNoise3D(value_type x, value_type y, value_type z, std::int32_t octaves) const noexcept;

	///////////////////////////////////////
	//
	//	Normalized octave noise [-1, 1]
	//
	value_type noise1D(value_type x, std::int32_t octaves) const noexcept;

	value_type noise2D(value_type x, value_type y, std::int32_t octaves) const noexcept;

	value_type noise3D(value_type x, value_type y, value_type z, std::int32_t octaves) const noexcept;


	///////////////////////////////////////
	//
	//	Serialization
	//
	void serialize(std::array<std::uint8_t, 256>& s) const noexcept;

	void deserialize(const std::array<std::uint8_t, 256>& s) noexcept;
protected:

	std::uint8_t p[512];
};

