#pragma once

#include <iostream>
#include "IFlyBehaviour.hpp"

class NoFly : IFlyBehaviour
{
	public:
		inline void fly()
		{
			std::cout << "aaa!" << std::endl;
		}
};
