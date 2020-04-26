/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>

int buyuk_sayi(); //en buyuk sayıyı bulan fonksiyon.
int buyuk_sayi(int sayi1,int sayi2,int sayi3)
{
    int en_buyuk;
    en_buyuk = sayi1;

    if(sayi2 > sayi1)
    {
        en_buyuk = sayi2;
        if(sayi3 > sayi2)
        {
            en_buyuk = sayi3;
        }
    }
    else if(sayi3 > sayi1)
    {
        en_buyuk = sayi3;
    }
    return en_buyuk;
}
int kucuk_sayi(); //en küçük sayıyı bulan fonksiyon.
int kucuk_sayi(int sayi1,int sayi2,int sayi3)
{
    int en_kucuk;
    en_kucuk = sayi1;

    if(sayi2 < sayi1)
    {
        en_kucuk = sayi2;
        if(sayi3 < sayi2)
        {
            en_kucuk = sayi3;
        }
    }
    else if(sayi3 < sayi1)
    {
        en_kucuk = sayi3;
    }
    return en_kucuk;
}

int main()
{
    int sayi1,sayi2,sayi3,en_buyuk,en_kucuk;

    printf("sayi gir:");
    scanf("%d",&sayi1);

    printf("sayi gir:");
    scanf("%d",&sayi2);

    printf("sayi gir:");
    scanf("%d",&sayi3);

    en_buyuk = buyuk_sayi(sayi1,sayi2,sayi3);
    printf("En Buyuk Sayi:%d\n",en_buyuk);

    en_kucuk = kucuk_sayi(sayi1,sayi2,sayi3);
    printf("En Kucuk Sayi:%d",en_kucuk);

    return 0;
}
