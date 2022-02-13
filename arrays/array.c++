#include <iostream>

int main()
{
    int array[]= {1,2,3,4,5}; //initializer list

    for(int i: array)//for loop
    {
        printf("%d ", i);//used to print each element
    }

    puts(" ");
    return 0;
}