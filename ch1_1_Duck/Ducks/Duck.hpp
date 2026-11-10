#pragma once

#include "Behaviours/Fly/IFlyBehaviour.hpp"
#include "Behaviours/Quack/IQuackBehaviour.hpp"
#include <iostream>
#include <memory>

class Duck {

  private:
    // Dynamic
    int id = -1;
    std::unique_ptr<IFlyBehaviour> _flyBehaviour;
    std::unique_ptr<IQuackBehaviour> _quackBehaviour;

  public:
    inline Duck(std::unique_ptr<IFlyBehaviour> flyBehaviour,
                std::unique_ptr<IQuackBehaviour> quackBehaviour)
        : _flyBehaviour(std::move(flyBehaviour)), _quackBehaviour(std::move(quackBehaviour)) {
        static int new_id = id;
        id = ++new_id;
    };
    virtual ~Duck() = default;

    inline void doFly() {
        if (_flyBehaviour)
            _flyBehaviour->fly();
        else
            std::cerr << "no flying set! DUCK_ID= " << id << std::endl;
    };
    void doQuack() {
        if (_quackBehaviour)
            _quackBehaviour->quack();
        else
            std::cerr << "no quacking set! DUCK_ID= " << id << std::endl;
    };

    void swim() {
        std::cout << "All duck float !" << std::endl;
    }
};
