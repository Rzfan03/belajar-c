#include <stdio.h>


int main() {
  float nilai = 12.5;
  float nilai_kedua = 5.5;
  char huruf = 'a'; 
 // implicit type casting 
  // int hasil = nilai_kedua + nilai;


// explicit type casting
  int hasil = (int) nilai + nilai_kedua;
  int hasil_dua = huruf;
  printf("hasilnya adalah : %d\n", hasil);
  printf("hasil ascii dari %c adalah : %d", huruf, hasil_dua);
}
