#include <iostream>

struct s
{
    int i;
    double d;
    const char * s;

};//conatins a few differnt types of variables

int main()
{
    s s1= {3, 45.2, "string one"}; //s is the name of the structure
    //declared a variable s1 and initialised it with the initializer list

    s1.i= 56; //s1. "the name of the structure variable"
    printf("s1: %d, %f, %s\n", s1.i, s1.d, s1.s);
    //when we have to access the variables, we use the same dot notation

    return 0;
}