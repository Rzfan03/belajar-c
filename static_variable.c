#include <stdio.h>


void cetak_umur() {
  static int umur = 18;
  printf("Umur kamu adalah : %d", umur);
}

int main() {
  cetak_umur();
  return 0;
}
