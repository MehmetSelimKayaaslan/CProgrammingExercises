//
// Created by Mehmet Selim Kayaaslan on 25.04.2021.
//
#include <stdio.h>
typedef struct ogrenci{
    int no;
    char adsoyad[25];
    int fizik[3], kimya[3], mat[3], turkce[3];
}ogrenci;

typedef struct ortalama {
    int index;
    float ortalama;
    int used;
}ortalama;

int main(){
    ogrenci ogrenciler[10];
    ortalama ogrenciort[10];
    int i, dizi[10], min = 100, j;

    for(i = 0;i < 10;i++){
        ogrenciort[i].used = 0;
    }

    for(i = 0;i < 10;i++){
        scanf("%s", ogrenciler[i].adsoyad);
        scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d", &ogrenciler[i].no, &ogrenciler[i].fizik[0], &ogrenciler[i].fizik[1], &ogrenciler[i].fizik[2], &ogrenciler[i].kimya[0], &ogrenciler[i].kimya[1], &ogrenciler[i].kimya[2], &ogrenciler[i].mat[0], &ogrenciler[i].mat[1], &ogrenciler[i].mat[2], &ogrenciler[i].turkce[0], &ogrenciler[i].turkce[1], &ogrenciler[i].turkce[2]);
        ogrenciort[i].ortalama = (ogrenciler[i].fizik[0] + ogrenciler[i].fizik[1] + ogrenciler[i].fizik[2] + ogrenciler[i].kimya[0] + ogrenciler[i].kimya[1] + ogrenciler[i].kimya[2] + ogrenciler[i].mat[0] + ogrenciler[i].mat[1] + ogrenciler[i].mat[2] + ogrenciler[i].turkce[0] + ogrenciler[i].turkce[1] + ogrenciler[i].turkce[2]) / 12;
        ogrenciort[i].index = i;

    }
    for(i = 0; i < 10; i++){
        int index;
        for(j = 0; j < 10; j++) {
            if (min >= ogrenciort[j].ortalama && ogrenciort[j].used == 0) {
                min = ogrenciort[j].ortalama;
                index = j;
            }
        }
        ogrenciort[index].used = 1;
        printf("%s\n", ogrenciler[index].adsoyad);
    }
}