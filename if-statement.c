#include <stdio.h>


int main() {
    int umur;
    
    printf("Masukan Umur Kamu : ");
    scanf("%d", &umur);
    
    if (umur < 12) {
        printf("yahahaa bocill");
    }
    else if (umur > 15) {
        printf("Waahh kamu sudah dewasa");
    }
}