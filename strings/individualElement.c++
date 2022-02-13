#include <iostream>

int main()
{
    char s[]= "String"; //null terminated array of characters
    for (int i=0; s[i]!=0; i++)
    {
        printf("char is %c\n", s[i]);
    }
    return 0;
}

