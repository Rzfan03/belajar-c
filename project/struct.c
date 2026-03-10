#include <stdio.h>
#include <string.h>

struct Siswa {
  char namaSiswa[100];
  char kelasSiswa[25];
  int nilaiSiswa;
};

int main() {
  FILE *fptr;
  struct Siswa siswa;

  // strcpy(siswa.namaSiswa, "rizqy fajrul syabani");
  // strcpy(siswa.kelasSiswa, "XI RPL 1");
  // siswa.nilaiSiswa = 90;


  // printf("Nama siswa : %s\n", siswa.namaSiswa);
  // printf("Kelas siswa : %s\n", siswa.kelasSiswa);
  // printf("Nilai siswa : %d\n", siswa.nilaiSiswa);

  printf("Crud Simple\n");
  printf("Masukan Nama Siswa: ");
  scanf(" %[^\n]", siswa.namaSiswa);
  printf("Masukan Kelas Siswa: ");
  scanf(" %[^\n]", siswa.kelasSiswa);
  printf("Masukan Nilai Siswa: ");
  scanf("%d", &siswa.nilaiSiswa);
  printf("================================\n");

  printf("Nama Siswa Adalah: %s\n", siswa.namaSiswa);
  printf("Kelas Siswa Adalah: %s\n", siswa.kelasSiswa);
  printf("Nilai Siswa Adalah: %d\n", siswa.nilaiSiswa);

  fptr = fopen("siswa.txt", "w");
  if (fptr == NULL) {
    printf("Gagal Menyimpan data ke file!");
  } else {
    fprintf(fptr, "Nama Siswa : %s\n", siswa.namaSiswa);
    fprintf(fptr, "Kelas Siswa : %s\n", siswa.kelasSiswa);
    fprintf(fptr, "Nilai Siswa : %d\n", siswa.nilaiSiswa);
    fclose(fptr);
    printf("Berhasil Menyimpan Data!"); 
  }
  
  
  return 0;
}
