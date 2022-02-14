#include <iostream>

int main()
{
    int array[]= {1, 2, 3, 4, 5};

    for(int i: array)
    {
        printf("i is %d\n", i);//display the elements of the array
    }

    return 0;
}

//for(int i) = declares a  variable
//array = container
//for each element of the container, the variable is set to the value of that element