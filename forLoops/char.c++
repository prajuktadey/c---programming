#include <iostream>

int main()
{
    char s[]= "string";

    for(char * p=s; *p; ++p )
    {
        printf("char is %c\n", *p);
    }

    return 0;
}