#include <string>
#include "invoker.h"

int main() {
    Invoker invoker;
    invoker.executeCommandA();
    invoker.executeCommandB("-A args");

    return 0;
}