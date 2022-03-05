#include <cstdio>
#include <new>

const long int count = 1024;

int main() {
    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    try {
        ip = new long int [count];
    } catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
    
    // initialize array
    for( long int i = 0; i < count; i++ ) {
        ip[i] = i;
    }
    
    // deallocate array
    delete [] ip;
    puts("space at *ip deleted");
    //deallocate the array and free it up in memory

    return 0;

    /* if we don't deallocate the array, we will end 
    up with memory leaks and vulnerabilities in our code*/
}

/* every time you allocate memory with new, you must 
free that memory with delete*/