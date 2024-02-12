#include <stdio.h>
#include "./myHeaderFile.h" 

int main() {
    printf("Hello, World!\n");
    printf("The sum of 3 and 4 is %d\n", add(3, 4));
    printf("The difference of 10 and 4 is %d\n", sub(3, 4));
    printf("The product of 3 and 4 is %d\n", mul(3, 4));
    printf("The quotient of 30 and 4 is %d\n", div(3, 4));
    printf("The remainder of 50 and 4 is %d\n", mod(3, 4));
    return 0;
}

