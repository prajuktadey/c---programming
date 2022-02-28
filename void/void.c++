#include <cstdio>

void func ( void ) {//doesn't return anything
    puts("this is void func ( void )");
}

int main() {
    puts("calling func()");
    func();
    return 0;
}

