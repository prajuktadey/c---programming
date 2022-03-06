
#include <cstdio>

void func()
{
    static int i=5;
    printf("i is %d\n", i++);
}

int main()
{
    puts("this is main()");
    func();
    func();
    func();
    func();
    func();

    return 0;
}

