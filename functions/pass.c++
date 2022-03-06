#include <iostream>

void func(int i)
{
    i=73;
    printf("the value is %d\n", i);
}

int main()
{
    puts("this is main()");
    func(42);

    return 0;
}