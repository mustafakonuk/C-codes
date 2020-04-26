/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>

int main() //Dort basamakli Palindromik sayı bulur.
{
    int sayi,sayi1,sayi2,sayi3,sayi4,rakam,rakam1,rakam2,rakam3;

    printf("Dort basamakli sayi giriniz:");
    scanf("%d",&sayi);

    sayi1=sayi%1000;
    rakam=sayi/1000;

    sayi2=sayi1%100;
    rakam1=sayi1/100;

    sayi3=sayi2%10;
    rakam2=sayi2/10;

    sayi4=sayi3%1;
    rakam3=sayi3/1;

    if(rakam3==rakam && rakam2==rakam1)
    {
        printf("Palindromik sayi\n");
    }
    else
    {
        printf("Palindromik sayi degil!");
    }
    return 0;
}
