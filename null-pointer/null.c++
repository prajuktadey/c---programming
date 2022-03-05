
#include <cstdio>

/*0LL long long can often be promoted to an integer
but in this case it is just too ambiguious for this compiler*/

//doesn't know what to do with null so we get an error instead
#ifndef NULL
#define NULL ((void*)0)/* common C++ definition */
#endif

void f( int i ) {//takes an  integer
    printf("the int is %d\n", i);
}

void f( const char * s ) {//takes a constant
    //still ambiguous because it takes a pointer to a character but it doesn't take the pointer to void.
    printf("the pointer is %p\n", s);
}

int main() 
{
    f(nullptr);//c ++ doesn't specify the exact value of the null macro, so it's different for different systems
    return 0; //
}

/*the constant pointer 0 has served double duty
as a null pointer constant, the ambiguity was resolved by finding a pre-processor marker called NULL.
which was typically defined as a zero value pointer to void

 C++ introduces a new keyword known as null pointer written as nullptr*/