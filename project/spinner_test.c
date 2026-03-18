#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main() {
  int i = 0;
  char spinner[4] = {'|', '/', '-', '\\'};
  bool isSpinner = true;

  
  while (isSpinner) {
    printf("Loading : %c\r", spinner[i]);
    fflush(stdout);
    i = (i + 1) % 4;
  usleep(100000);
  }
  return 0;
}
