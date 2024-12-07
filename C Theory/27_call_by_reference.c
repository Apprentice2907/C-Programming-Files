#include <stdio.h>


int sum(int *, int *);


// Sum should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return (*a + *b);
}

int main(){
    int x = 1, y=6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}







// Swapping
// #include <stdio.h>

// void swap(int* a, int* b);

// void swap(int* a, int* b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 4, b = 6;
//     swap(&a, &b);
//     printf("The value of a is %d and the value of b is %d", a, b);
//     return 0;
// }