#include <stdio.h>

int main() {

  int umur;

  printf("Masukan Umur Kamu : ");
  scanf("%d", &umur);

  if (umur < 17) {
    goto blum_legal;
  } else {
    goto legal;
  }

legal:
   printf("Kamu sudah %d, dan sudah legal!\n", umur);
   goto End;

   
 blum_legal:
   printf("Waduh kamu masi %d, dan blum legal!\n", umur);


End:
printf("Program End!");
  return 0;
}
