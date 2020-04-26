/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
#include <stdio.h>
#include <stdlib.h>

int kare_alan(int kenar_uzunluguA) //Karenin alanini hesaplar.
{
    return kenar_uzunluguA*kenar_uzunluguA;
}

int kare_cevre(int kenar_uzunluguC) //Karenin cevresini hesaplar.
{
    return kenar_uzunluguC*4;
}

int main()
{
    int kenar_uzunlugu;

    printf("Karenin kenar uzunluğunu giriniz:");
    scanf("%d",&kenar_uzunlugu);

    printf("Karenin Alani: %d\n",kare_alan(kenar_uzunlugu));
    printf("Karenin Cevresi: %d",kare_cevre(kenar_uzunlugu));

    return 0;
}
