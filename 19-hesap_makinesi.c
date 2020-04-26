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
    printf("--------------\n");
    printf("HESAP MAKİNASİ\n");
    printf("--------------\n");

    printf("Toplama icin : +\n");
    printf("Cikarma icin : -\n");
    printf("Carpma icin  : *\n");
    printf("Bolme icin   : /\n");

    int sayi1,sayi2;
    char girilen_isaret;

    printf("Bir isaret giriniz:");
    scanf("%c",&girilen_isaret);

    printf("Birinci sayiyi giriniz:");
    scanf("%d",&sayi1);

    printf("İkinci sayiyi giriniz:");
    scanf("%d",&sayi2);

    double sonuc;

    if(girilen_isaret == '+')
    {
        sonuc = sayi1 + sayi2;
        printf("Sonuc:%.2f",sonuc);
    }
    else if(girilen_isaret == '-')
    {
        sonuc = sayi1 - sayi2;
        printf("Sonuc:%.2f",sonuc);
    }
    else if(girilen_isaret == '*')
    {
        sonuc = sayi1 * sayi2;
        printf("Sonuc:%.2f",sonuc);
    }
    else if(girilen_isaret == '/')
    {
        sonuc = sayi1 / sayi2;
        printf("Sonuc:%.2f",sonuc);
    }

  return 0;
}
