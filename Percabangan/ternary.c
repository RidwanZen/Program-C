#include <stdio.h>

void main(){

    int jawaban;
    //Dengan Operator ternary
    
    printf("Berapakah hasil 3+4?\n");
    printf("jawab> ");
    scanf("%d", &jawaban);

    printf("Jawaban anda: %s\n", (jawaban == 7) ? "Benar" : "Salah");

    /*Tanpa operator Ternary

    if( jawaban == 7 ){
        printf("Jawaban anda: Benar\n");
    } else {
        printf("Jawaban anda: Salah\n");
    }
    */
}