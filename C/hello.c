#include <stdio.h>

void changeValue(int *x) {
    *x = 10;  // Modifying the original variable using dereferencing
}

int main() {
    int a = 5;
    changeValue(&a);  // Passing the address of 'a'
    printf("%d\n", a);  // Output will be 10
    return 0;
}
