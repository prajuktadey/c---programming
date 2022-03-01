
#include <cstdio>
#include <vector>

int main() 
{
    std::vector<int> vi = { 1, 2, 3, 4, 5 };
    for(auto it = vi.begin(); it != vi.end(); ++it) {
        printf("int is %d\n", *it);
    }
    return 0;
}

//this is done using auto

/* auto type is relatiovely recent feature in c++ beginning with 
c++ 11. Auto can be used to declare an object based on the type of what it is being initialized with
and this is very convenient.*/