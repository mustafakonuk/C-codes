/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2,sayi3;

    printf("Birinci sayi:");
    scanf("%d",&sayi1);

    printf("İkinci sayi:");
    scanf("%d",&sayi2);

    printf("Ucuncu sayi:");
    scanf("%d",&sayi3);

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

    printf("En buyuk sayi:%d",en_buyuk);

    return 0;
}
