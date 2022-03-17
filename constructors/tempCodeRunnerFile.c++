#include <cstdio>

// a very simple class
class C1 {
    int i = 0;//data member which is not visible to the public interface
public://actual interface
    void setvalue( int value ) { i = value; }
    int getvalue() { return i; }
};

/*inside the curly braces, we have the class definition
sometimes called the class interface and that is terminated 
with a semi colon.*/

int main() {
    int i = 47;
    C1 o1;//instantiate an object
    
    o1.setvalue(i);//access the public members here using dot notation
    printf("value is %d\n", o1.getvalue());
    return 0;
}
