#include <stdio.h>

int main(){
    float nilai1, nilai2, result;

    printf("Masukkan nilai pertama: ");
    scanf("%f", &nilai1);
    printf("Masukan nilai kedua: ");
    scanf("%f", &nilai2);
    result = nilai1 + nilai2;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"",nilai1, nilai2, result);

    return 0;
}