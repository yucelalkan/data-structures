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

    takim tk;
    strcpy(tk.takimAdi, "Samsunspor");
    tk.kurulus = 1965;

    futbolcu ft;
    strcpy(ft.adSoyad, "Burak Çalık");
    ft.yas = 30;
    ft.takim = tk;

    printf("Bilgiler: %s %d", ft.takim.takimAdi, ft.takim.kurulus);

    return 1;
}