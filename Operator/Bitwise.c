#include <stdio.h>

void main(){
    int a = 6;
    int b = 3;

    printf("\nOperator Bitwise\n");
    
    printf("a & b = %d\n", a & b);      //Bitwise AND
    printf("a | b = %d\n", a | b);      //Bitwise OR
    printf("a & b = %d\n", a ^ b);      //Bitwise XOR
    printf("~a = %d\n", ~a);            //Bitwise NOT
    printf("a << 1 = %d\n", a << 1);    //Bitwise Left_Shift
    printf("a >> 1 = %d\n", a >> 1);    //Bitwise Right_Shift
}