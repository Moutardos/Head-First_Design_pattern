#pragma once

class IFlyBehaviour 
{
	public:
		virtual void fly()= 0;
		virtual ~IFlyBehaviour() = default;
};
