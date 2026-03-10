#include <stdio.h>

int main() {
  int age = 12;
  int umur = 50;
  char nama[50];

  printf("Masukan Nama : ");
  scanf("%s", nama);
  printf("hello %s\n", nama);
  printf("pointer from name is : %p", &nama);
}
