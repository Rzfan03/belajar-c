#include <stdio.h>


int umur = 19; // global scope

int main() {
  int umur = 18; // local scope
  printf("umur kamu adalah : %d", umur);
  return 0;
}
