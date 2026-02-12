#include <stdio.h>


int main() {
    long populasi = 120000;
    long long populasi_hewan = 1123120;
    
    printf("Populasi manusia : %ld\n", populasi);
    printf("Populasi hewan : %lld\n", populasi_hewan);
    
    printf("Ukuran byte populasi : %zu byte\t", sizeof(populasi));
    printf("Ukuran byte populasi hewan : %zu byte", sizeof(populasi_hewan));
}