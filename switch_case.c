#include <stdio.h>

int main() {

  int pilihan_user;

  printf("Menu Makanan Warung Makan Owo\n");
  printf("1. Sawit Kuah Repsol\n");
  printf("2. Minyak Sawit X Diddy Oil\n");
  printf("3. Tembok Ratapan Solo dan Es Etanol\n");
  printf("Pilih Opsi (1-3) : ");
  scanf("%d", &pilihan_user);


  switch (pilihan_user) {
    case 1:
      printf("Kamu Memilih Sawit Kuah Repsol");
    break;

    case 2:
      printf("Kamu Memilih minyak sawit X Diddy Oil");
    break;

    case 3:
      printf("Kamu memilih tembok ratapan solo");
    break;

    default:
    printf("Lu pilih yg di menu lah kocak ini malah milih %d", pilihan_user);
  }

}
