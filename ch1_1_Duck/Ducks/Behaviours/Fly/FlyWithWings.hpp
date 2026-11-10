#pragma once

#include <iostream>
#include "IFlyBehaviour.hpp"

class FlyWithWings : public IFlyBehaviour
{
	public:
		inline void fly() {
			std::cout << "I'm FLYING using my wings~!" << std::endl;
		}
};
