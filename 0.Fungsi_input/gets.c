#include <stdio.h>

int main () {
    // membuat variabel
    char name[20], umur[10];

    printf("Nama: ");
    //scanf("%s", &name);
    gets(name);

    printf("Umur: ");
    gets(umur);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Umur yang diinputkan: %s\n", umur);
   
    return 0;
}