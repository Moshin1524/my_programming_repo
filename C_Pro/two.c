
#include<stdio.h>
// int calculate(int a, int b) {
//     int sum = a + b;
//     printf("The sum of %d and %d is: %d",a,b,sum);
//     return 0;
// }
int main() {
    
    int a,b;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("\nEnter the second value: ");
    scanf("%d",&b);
    int sum = a + b;
    printf("\nThe sum of %d and %d is: %d\n\n\n",a,b,sum);
}