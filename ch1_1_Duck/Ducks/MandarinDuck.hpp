#pragma once

#include <memory>

#include "Behaviours/Fly/FlyWithWings.hpp"
#include "Behaviours/Quack/Quack.hpp"
#include "Duck.hpp"

class MandarinDuck : public Duck {
  public:
    MandarinDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {};
};
