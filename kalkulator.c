#include <stdio.h>


int main() {
    char operator; // 1 byte
    int x, y, hasil; // 2 - 4 byte
    char nama[100]; // 100 byte 
    
    
    printf("Kalkulator Sederhana\n");
    printf("Masukan angka pertama : ");
    scanf("%d", &x);
    printf("Masukan angka kedua : ");
    scanf("%d", &y);
    printf("Hasil adalah : %d", x + y);
    
    
    return 0;
}