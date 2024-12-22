#include <stdio.h>

int main() {
    char str1[20];
    char str2[20];
    char str3[40];

    int i = 0, j = 0;

    printf("Enter str1: ");
    scanf("%s", str1);  // Use %s to read strings

    printf("Enter str2: ");
    scanf("%s", str2);  // Use %s to read strings

    // Copy str1 to str3
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }

    // Concatenate str2 to str3
    while (str2[j] != '\0') {
        str3[i + j] = str2[j];
        j++;
    }

    str3[i + j] = '\0';  // Null-terminate str3

    printf("str3: %s\n", str3);
    return 0;
}
