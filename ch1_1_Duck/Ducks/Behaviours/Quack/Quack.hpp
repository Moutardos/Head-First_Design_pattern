#pragma once

#include <iostream>
#include "IQuackBehaviour.hpp"

class Quack : public IQuackBehaviour
{
	public:
		inline void quack()
		{
			std::cout << "quack" << std::endl;
		}
};
