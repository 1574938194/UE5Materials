#pragma once
 
#include <random>

class _UniformRandom  
{
public:
	_UniformRandom(std::uint32_t seed=0) : engine(seed), dist(0.0, 1.0) {} 

	~_UniformRandom() {}
public:
	double operator()()
	{
		return this->dist(this->engine);
	}
 
 
	void reseed(std::uint32_t seed )
	{
		engine.seed(seed);
	}
public:
	std::mt19937 engine;
	std::uniform_real_distribution<double> dist;
};