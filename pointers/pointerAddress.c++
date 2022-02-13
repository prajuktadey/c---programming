#include <iostream>

int main()
{
    int x=7;
    int y= 23;
    int * ip = &x; //initialised with the address of integer variable x

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", ip);//the address is being printed

    return 0;
}


//output

/*The value of x is 7
The value of y is 23
The value of *ip is 469760092*/