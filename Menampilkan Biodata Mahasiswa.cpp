#include <stdio.h>
#include <string.h>

int main() {
    char nama[50], nim[20], kelas[10], prodi[50], jurusan[50];

    printf("Masukkan Nama: ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';  // Hapus semua karakter newline

    printf("Masukkan NIM: ");
    fgets(nim, sizeof(nim), stdin);
    nim[strcspn(nim, "\n")] = '\0';  // Hapus semua karakter newline

    printf("Masukkan Kelas: ");
    fgets(kelas, sizeof(kelas), stdin);
    kelas[strcspn(kelas, "\n")] = '\0';  // Hapus semua karakter newline

    printf("Masukkan Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);
    prodi[strcspn(prodi, "\n")] = '\0';  // Hapus semua karakter newline

    printf("Masukkan Jurusan: ");
    fgets(jurusan, sizeof(jurusan), stdin);
    jurusan[strcspn(jurusan, "\n")] = '\0';  // Hapus semua karakter newline

    printf("\n--- Biodata Mahasiswa ---\n");
    printf("Nama            : %s\n", nama);
    printf("NIM             : %s\n", nim);
    printf("Kelas           : %s\n", kelas);
    printf("Program Studi   : %s\n", prodi);
    printf("Jurusan         : %s\n", jurusan);

    return 0;
}
