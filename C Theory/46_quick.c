#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr; 
    ptr = (float*) malloc(n * sizeof(float)); 

    ptr[0] = 3.345;
    ptr [1]= 16.345; 
    ptr [2]= 6.345; 
    ptr [3]= 56.345; 
    ptr [4]= 66.345; 

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]); 
    return 0;
}








// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int n;
//     int* ptr;
//     scanf("%d", &n);
//     ptr = (int*) calloc(n, sizeof(int));
//     // int arr[n]; // Not allowed in c
//     ptr[0] = 3; 
//     printf("%d", ptr[0]);
//     return 0;
// }