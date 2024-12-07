#include <stdio.h>

int main(){
    int marks[90]; // Reserve space to store 90 integers

    marks[0] = 45;
    marks[1] = 95;
    // We can go all the way till marks[89] 
    printf("Marks 0 and Marks 1 is %d %d", marks[0], marks[1]);
    return 0;
}






// Input array
// #include <stdio.h>

// int main(){
//     int marks[5];  

//     printf("Enter marks of 5 students\n");

//     // scanf("%d", &marks[0]);
//     // scanf("%d", &marks[1]);
//     // scanf("%d", &marks[2]);
//     // scanf("%d", &marks[3]);
//     // scanf("%d", &marks[4]);
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &marks[i]);
//     }

//       for (int i = 0; i < 5; i++)
//     {
//         printf("The value of marks at index %d is %d\n", i, marks[i]);
//     }
    
 
//     return 0;
// }