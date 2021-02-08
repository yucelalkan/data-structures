#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char takimAdi[30];
    int kurulus;
} takim;

typedef struct {
    char adSoyad[30];
    int yas;
    takim takim;
} futbolcu;

int main(){

    futbolcu ft;
    strcpy(ft.adSoyad, "Nurullah Aslan");
    ft.yas = 20;
    strcpy(ft.takim.takimAdi, "Samsunspor");
    ft.takim.kurulus = 1965;

    printf("Bilgiler: %s %d", ft.takim.takimAdi, ft.takim.kurulus);

    return 1;
}