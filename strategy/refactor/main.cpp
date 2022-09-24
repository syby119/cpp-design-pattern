#include <memory>

#include "context.h"
#include "strategy.h"

int main() {
    std::unique_ptr<Strategy> strategies[3] = {
        std::make_unique<StrategyA>(),
        std::make_unique<StrategyB>(),
        std::make_unique<StrategyC>()
    };

    Context context;
    for (int i = 0; i < 3; ++i) {
        context.setStrategy(strategies[i].get());
        context.executeStrategy();
    }

    return 0;
}