#include <iostream>

template <typename T>//template argument list
T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

int main() {
    std::cout << maxof<int>( 7, 9 ) << std::endl;
    return 0;
}

/*you cannot define a template inside your block 
of code, it must be outside of any blocks in your code*/
