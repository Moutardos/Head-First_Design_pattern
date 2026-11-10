#pragma once

class IQuackBehaviour
{
	public:
		virtual void quack()= 0;
		virtual ~IQuackBehaviour() = default;
};
