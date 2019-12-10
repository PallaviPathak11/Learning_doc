#include <stdio.h>

static void inline test_inline_func1(int a, int b) {
    printf ("a=%d and b=%d\n", a, b);
}

static int inline test_inline_func2(int x) {
    return x*x;
}

int main() {

    int tmp;

    test_inline_func1(2,4);
    tmp = test_inline_func2(5);

    printf("square val=%d\n", tmp);

    return 0;
}
