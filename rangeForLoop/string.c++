#include <iostream>

int main()
{
    char string[]= "string";

    for(char c: string)
    {
        if(c==0) break;
        printf("c is %c\n", c);//display the elements of the array
    }

    return 0;
}

//for(int i) = declares a  variable
//array = container
//for each element of the container, the variable is set to the value of that element