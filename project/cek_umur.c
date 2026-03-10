#include <stdio.h>

int main() {
  int umur;

  
  printf("masukan tahun lahir mu! : ");
  scanf("%d", &umur);

  int hasil_mentah = umur - 2026;
  int hasil = -hasil_mentah;
  
  printf("Kamu lahir di tahun %d dan umur mu sekarang adalah %d",umur, hasil);
}
