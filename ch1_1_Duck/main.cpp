#include "DuckCall.hpp"
#include "Ducks/Behaviours/Quack/Quack.hpp"
#include "Ducks/MandarinDuck.hpp"

int main(void) {
    std::unique_ptr<Duck> duck = std::make_unique<MandarinDuck>();
    Duck duck1(nullptr, nullptr);
    DuckCall dCall(std::make_unique<Quack>());
    duck->doFly();
    duck->doQuack();
    duck1.doQuack();
    dCall.call();
    return 0;
}
