#include <iostream>

int main()
{
    int i=5;
    int & ir = i;//ir is the reference, integer reference
    //never take the address of i, simply assign it like that
    ir=10;//set the value of the reference
    //changes the value of the referred variable

    printf("i is %d\n", i);

    return 0;
}

/*reference is like a pointer but with significant differences.

The syntax of assigning a refernce does not involve
using the address of operator.

The reference operator is used to say that this is a reference. (ir) */

/* A reference cannot be null, it cannot he uninitialized
and it cannot be changed to refer to another variable*/