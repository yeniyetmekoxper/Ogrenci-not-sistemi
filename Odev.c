#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct  {

    char *isim;
    char *soyisim;
    int vize;
    int finalnot;
    int notortalamasi;
   



}ogrenci;

/*AA: 90 - 100 / Başarılı
BA : 80 - 89 / Başarılı
BB : 75 - 79 / Başarılı
CB : 70 - 74 / Başarılı
CC : 60 - 69 / Başarılı
DC : 50 - 59 / Koşullu Başarılı - Başarısız
DD : 40 - 49 / Başarısız
FD : 30 - 39 / Başarısız
FF : 0 - 29 / Başarısız*/

int main(int argc, char argv[]) {
    
    ogrenci ogrenciler[5] = {
        {"Oguz","Levent",80,90,(80*0.4+90*0.6)},
        {"Tekin","Levent",34,15,(34 * 0.4 + 15 * 0.6)},
    {"Kadir","Levent",77,54,(77 * 0.4 + 54 * 0.6)},
    {"Metin","Levent",55,65,(55 * 0.4 + 65 * 0.6)},
    {"Zeynep","Levent",15,10,(15 * 0.4 + 10 * 0.6)}
    
    };

    for (int i = 0; i < 5; i++) {
        int notortalamasi = ogrenciler[i].notortalamasi;
        
        if (notortalamasi >= 90 && notortalamasi <= 100) {
            printf("tebrikler %s %s notunuz AA\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 80 && notortalamasi <= 89) {
            printf("tebrikler %s %s notunuz BA\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 75 && notortalamasi <= 79) {
            printf("tebrikler %s %s notunuz BB\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 70 && notortalamasi <= 74) {
            printf("tebrikler %s %s notunuz CB\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 60 && notortalamasi <= 69) {
            printf("tebrikler %s %s notunuz CC\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 50 && notortalamasi <= 59) {
            printf("tebrikler %s %s notunuz DC\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 40 && notortalamasi <= 49) {
            printf("tebrikler %s %s notunuz DD\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else if (notortalamasi >= 30 && notortalamasi <= 39) {
            printf("tebrikler %s %s notunuz FD\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
        else {
            printf("%s %s dersi gecemedin FF\n", ogrenciler[i].isim, ogrenciler[i].soyisim);
        }
    }
    return 0;
}