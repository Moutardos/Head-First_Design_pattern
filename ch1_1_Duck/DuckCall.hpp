#pragma once

#include "Ducks/Behaviours/Quack/IQuackBehaviour.hpp"
#include <iostream>
#include <memory>

//  A duck call is a device that can mimick the calls of duck

class DuckCall {

  private:
    std::unique_ptr<IQuackBehaviour> _call;

  public:
    DuckCall(std::unique_ptr<IQuackBehaviour> call) : _call(std::move(call)) {};

    void setCall(std::unique_ptr<IQuackBehaviour> call) {
        _call = std::move(call);
    }

    void call() {
        std::cout << "[Mimicking quack] \"" << std::endl;
        _call->quack();
        std::cout << "\"" << std::endl;
    }
};
