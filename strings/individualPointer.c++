#include <iostream>

int main()
{
    char s[]= "String"; //null terminated array of characters
    for (char * cp= s; *cp!=0; ++cp)//address is used in the for loop 
    {
        printf("char is %c\n", *cp);//dereferncing the pointer for desired output
    }
    return 0;
}

