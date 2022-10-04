#include <string>
#include "invoker.h"

int main() {
    Invoker1 invoker1;
    Invoker2 invoker2;
    
    invoker1.executeCommandA();
    invoker1.executeCommandB("-A args");

    invoker2.executeCommandA();
    invoker2.executeCommandB("-A args");

    return 0;
}