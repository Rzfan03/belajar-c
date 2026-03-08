#include <stdio.h>

int main() {
  int age = 12;
  int *pAge = &age;
  
  printf("pointer from age is : %p", pAge);
}
