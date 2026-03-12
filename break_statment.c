#include <stdio.h>

int main() {
  int angka = 1;

  while (angka <= 10) {
    printf("Ini adalah perulangan ke %d\n", angka);

    if (angka == 10) {
      printf("Oke sudah sampe angka ke %d. Program End!", angka);
      break;
    }
    angka++;
  }
  
}

// jadi pengen seblak gini euyy...
