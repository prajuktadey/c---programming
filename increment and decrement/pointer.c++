
#include <cstdio>
#include <cstdint>

void printp(uint8_t *p) {
    printf("pointer is %p, value is %d\n", p, *p);//prints a pointer value and what it points at
}

int main()
{
    uint8_t arr[5] = { 1, 2, 3, 4, 5 };
    uint8_t *p = arr;
    printp(p++);//incrementing the pointer 3 times
    printp(p++);
    printp(p++);

    return 0;
}

//the addresses increase by 1
//pre increment is slightly more efficient than post increment
/* because post increment actually has to make a copy
of the value first before it does the increment */
