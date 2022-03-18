#include <cstdio>
#include <cerrno>

int main() {
    printf("Erasing file foo.bar\n");
    remove("foo.bar");
    printf("errno is: %d\n", errno);
    perror("Cannot erase file");
    return 0;
}
