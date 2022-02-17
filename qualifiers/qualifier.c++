#include <iostream>

class S{
public:
     int static_value()
     {
         static int x=7;
         return ++x;
     }
};

int func()
{
    static int x=7; //if we don't use static the increment will be done only 1 time
    //static= it is now stored in static memory space and each time you come into the functiom it retains its value from the last time
    return ++x;
}

int main()
{
    int i =func();
    i =func();
    i =func();
    printf("The integer is %d\n", i);
    return 0;

}