#include <stdio.h>


int main() {
    short temperatur;
    
    printf("Cek Temperatur : ");
    scanf("%hd", &temperatur);
    
    if (temperatur < -10) {
        printf("dingin bgtt jierr");
    }
    else if (temperatur > -10) {
        printf("nahh ini oke nih suhu nya %hd C", temperatur);
    }
}