/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>

int main() // Girilen bes tam sayinin en buyugunu ve en kucugunu bulan program.
{
    int sayi1,sayi2,sayi3,sayi4,sayi5,en_kucuk,en_buyuk;

    printf("birinci tam sayiyi giriniz:");
    scanf("%d",&sayi1);
    en_kucuk=sayi1; //en kucuk sayi ilk girilen sayiya atandi.
    en_buyuk=sayi1; //en buyuk sayi ilk girilen sayiya atandi.

    printf("ikinci tam sayiyi giriniz:");
    scanf("%d",&sayi2);
    if(sayi2<=en_kucuk)
    {
        en_kucuk=sayi2;
    }
    if(sayi2>=en_buyuk)
    {
        en_buyuk=sayi2;
    }

    printf("ucuncu tam sayiyi giriniz:");
    scanf("%d",&sayi3);
    if(sayi3<=en_kucuk)
    {
        en_kucuk=sayi3;
    }
    if(sayi3>=en_buyuk)
    {
        en_buyuk=sayi3;
    }

    printf("dorduncu tam sayiyi giriniz:");
    scanf("%d",&sayi4);
    if(sayi4<=en_kucuk)
    {
        en_kucuk=sayi4;
    }
    if(sayi4>=en_buyuk)
    {
        en_buyuk=sayi4;
    }

    printf("besinci tam sayiyi giriniz:");
    scanf("%d",&sayi5);
    if(sayi5<=en_kucuk)
    {
        en_kucuk=sayi5;
    }
    if(sayi5>=en_buyuk)
    {
        en_buyuk=sayi5;
    }
    printf("En kucuk sayi:%d\n",en_kucuk);
    printf("En buyuk sayi:%d",en_buyuk);

    return 0;
}
