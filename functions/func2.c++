#include <iostream>

void func(int i)
{
    printf("this is func(%d)\n", i);
}

int main()
{
   puts("this is main()");
   func(67);
   return 0;
}


//output

//this is main()
//this is func()