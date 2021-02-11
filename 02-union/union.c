#include <stdio.h>
#include <string.h>

// Union Tanımlama  - 1
union ogrenci {
    char isim[20];
    int no;
    float ort;
};

// Union Tanımlama - 2 
typedef union {
    char isim[20];
    int yas;
} ogretmen;

int main(){

    printf("Boyut: %ld Byte \n", sizeof(union ogrenci));

    union ogrenci o;

    strcpy(o.isim, "Yücel");
    printf("İsim: %s \n", o.isim);

    o.no = 148;
    printf("No: %d \n", o.no);

    o.ort = 85.5;
    printf("Ortalama: %f \n", o.ort);

    // Typedef ile Kullanım
    ogretmen ogrt;
    strcpy(ogrt.isim, "İsmail");

    printf("Öğretmen Adı: %s \n", ogrt.isim);

    ogrt.yas = 45;
    printf("Öğretmen Yaşı: %d", ogrt.yas);

    return 1;
}
