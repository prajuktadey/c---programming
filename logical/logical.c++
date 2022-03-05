#include <iostream>

int main()
{
    bool a = true;
    bool b= false;

    a=7; //any non zero value is true

    printf("a is %d\n", a);
    printf("b is %d\n", b);

    if(a && b)
    {
        puts("true");
    }
    else
    {
        puts("false");
    }

    return 0;
}