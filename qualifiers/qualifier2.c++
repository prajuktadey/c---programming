#include <cstdio>

class s {
public:
    int static_value() {
        static int x = 7;//this is stored globallly
        return ++x;
    }
};

int func() 
{
    int x = 7;
    return ++x;
}

int main()
{
    s s1;//instance of class s
    s s2;//instance of class s
    s s3;//instance of class s
    
    printf("The integer is %d\n", s1.static_value());//these are instances of this class
    printf("The integer is %d\n", s2.static_value());
    printf("The integer is %d\n", s3.static_value());
    //these are 3 different objects
    return 0;

}

/* if you are going to declare something static inside
a memeber function,keep in mind that each instance
of that class, each separate object that is instantiated from 
that class all share the same variable*/