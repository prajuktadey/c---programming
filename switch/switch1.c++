#include <iostream>

int main()
{
    const int iOne = 1;
    const int iTwo = 2;
    const int iThree = 3;
    const int iFour = 4;

    int x=3;

    switch(x)
    {
        case iOne:
            puts("One.");
            break;

        case iTwo:
            puts("Two.");
            break;
        
         case iThree:
            puts("Three.");
            break;
        
         case iFour:
            puts("Four.");
            break;

        default:
            puts("Default");
            break;
        
    }
    
}