#include <stdio.h>

void main(){
    char nama[20];
    int nilaiAngka;

    printf("Masukkan Nama = ");
    scanf("%s", &nama);

    printf("Masukkan Angka = ");
    scanf("%i", &nilaiAngka);

    char nilaiHuruf = nilaiAngka >= 80 && nilaiAngka <= 100? 'A':
                        nilaiAngka >= 60 && nilaiAngka < 80? 'B':
                        nilaiAngka >= 40 && nilaiAngka < 60? 'C':
                        nilaiAngka >= 20 && nilaiAngka < 40? 'D':
                        nilaiAngka >= 0 && nilaiAngka < 20? 'F': 'X';

    printf("\nNama = %s", nama);
    printf("\nNilai Angka %d = %c\n", nilaiAngka,nilaiHuruf);
    

}