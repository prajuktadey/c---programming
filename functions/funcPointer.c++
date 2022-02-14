#include <iostream>

void func(int i, const char * s)
{
    printf("this is func(%i, %s)\n", i,s);
}

int main()
{
   puts("this is main()");
   func(47, "string");
   return 0;
}


