
#include <cstdio>
int main()
{
   struct X{
       int a;
       int b;
       char c;
       char d;
       long int e;
       long int f;
   };


    printf("sizeof X is %zd\n", sizeof(X));

    return 0;
}
