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
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    int toplam=0;

    for(int i=1; i<=sayi; i++)
    {
        toplam +=i;
    }
    printf("1'den %d'e kada olan sayilarin toplami: %d",sayi,toplam);

    return 0;
}
