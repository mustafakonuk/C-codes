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
    int sinir_sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sinir_sayi);

    printf("Cift Sayilar:\t");
    for(int i=0; i<=sinir_sayi; i+=2)
    {

        printf("%d\t",i);
    }

    printf("\nTek Sayilar:\t");
    for(int a=1; a<=sinir_sayi; a+=2)
    {
        printf("%d\t",a);
    }

    return 0;
}
