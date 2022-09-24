#include "context.h"
#include "strategy.h"

int main() {
    Context context;

    context.setStrategy(Strategy::A);
    context.executeStrategy();
    
    context.setStrategy(Strategy::B);
    context.executeStrategy();

    context.setStrategy(Strategy::C);
    context.executeStrategy();
    
    return 0;
}