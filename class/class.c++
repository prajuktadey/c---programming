#include <iostream>
//the main function of this class is to encapsulate the integer
class C
{
    int i=0;//one integer member

public:
    void setvalue(int value) {i=value;}
    int getvalue() {return i;} //two function members

};

int main()
{
    int i=47;
    C o1;//object based on the class
    //c is the class and o1 is the object
    
    o1.setvalue(i);
    printf("Value is %d\n", o1.getvalue());

    return 0;

}

//the main difference between a class and a struct is:
//members default to private in a class while they default to public in a struct.

