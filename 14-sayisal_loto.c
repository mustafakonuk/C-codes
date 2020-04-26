/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main()
{

    printf("......................\n");
    printf(". SAYISAL LOTO OYUNU .\n");
    printf("......................\n");

    int kazanan_sayilar[6] = {13,22,11,17,1,1};

    printf("Sansli Numaralar: %d,%d,%d,%d,%d,%d\n",kazanan_sayilar[0],kazanan_sayilar[1],kazanan_sayilar[2],kazanan_sayilar[3],kazanan_sayilar[4],kazanan_sayilar[5]);
    printf("\n");

     srand(time(NULL));//ayni rastgele sayilarin devam etmemesi icin yazıldı.

    int girilen_sayi;
    int depo_dizi[5],sayac=0;

    for(int i=0; i<=5; i++)
    {
        girilen_sayi = rand()%26; // 0 ile 25 arasındaki sayilsrdan rastgele sayi üretiyor.
        printf("%d'inci sayi: %d\n\n",i+1,girilen_sayi); //üretilen sayilari sirasi ile ekrana basiyor.

        depo_dizi[sayac] = girilen_sayi;
        sayac = sayac +1;
    }

    if(kazanan_sayilar[0]==depo_dizi[0] && kazanan_sayilar[1]==depo_dizi[1] && kazanan_sayilar[2]==depo_dizi[2] && kazanan_sayilar[3]==depo_dizi[3] && kazanan_sayilar[4]==depo_dizi[4] && kazanan_sayilar[5]==depo_dizi[5])
    {
        printf("İkramiyeyi Kazandınız!!!");
    }
    else
    {
        printf("Kaybettiniz!!!");
    }

    return 0;
}
