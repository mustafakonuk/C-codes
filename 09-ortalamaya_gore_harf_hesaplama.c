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
    int vize_notu, final_notu;
    int ortalama=0;
    float genel_ortalama; //kosullu DD harfi icin 2 ortalamayi gecmesi lazim.

    printf("Vize notunuzu giriniz: ");
    scanf("%d",&vize_notu);

    printf("Final notunuzu giriniz: ");
    scanf("%d",&final_notu);

    ortalama= vize_notu*0.4 + final_notu*0.6;

    if(final_notu<45) //eger finalden 45 alamazsa notu direk FF olur.
    {
        printf("Ortalamaniz: %d\n",ortalama);
        printf("Harf: FF");
    }
    else //final notu 45 den yukari oldugu zaman buranin icine girer.
    {
        if(ortalama >= 85)
        {
            printf("Ortalamaniz: %d\n",ortalama);
            printf("Harf: AA");
        }
        else if(ortalama < 85 && ortalama >= 70)
        {
            printf("Ortalamaniz: %d\n",ortalama);
            printf("Harf: BB");
        }
        else if(ortalama < 70 && ortalama >= 55)
        {
            printf("Ortalamaniz: %d\n",ortalama);
            printf("Harf: CC");
        }
        else if(ortalama < 55 && ortalama >= 45)
        {
            printf("Ortalamaniz: %d\n",ortalama);
            printf("Harf: DD\n");

            printf("Genel ortalamaniz nedir:"); //genel ortalamasi 2 nin ustundeyse kosullu gecmis olur.
            scanf("%f",&genel_ortalama);
                if(genel_ortalama >= 2)
                {
                    printf("Kosullu gectiniz!");
                }
                else
                {
                    printf("Kaldiniz!");
                }
        }
        else if(ortalama < 45)
        {
            printf("Ortalamaniz: %d\n",ortalama);
            printf("Harf: FF");
        }
    }
    return 0;
}
