#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// all char
char all_char[50] = {
  'a', 'b', 'c', 'd','e','f','g','h','i','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
  1, 2 ,3 ,4 ,5, 6, 7, 8, 9, 0,
  '@','$', '#', '*',
};

char *pChar = &all_char;

// generate_pass func
void generate_pass() {
  srand(time(NULL));

 int random_number = rand();
 printf("%d", random_number);

}

// main func
int main() {
generate_pass();
  
}
