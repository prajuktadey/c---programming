#include <iostream>

int main()
{
    int x=5;
    size_t y= sizeof x;
    printf("sizeof x is %zd\n", y);// in bits

    return 0;
}

//multiply it by 8 and you get it in bytes