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
    int benim_yasim;

    printf("Yasinizi Giriniz:");
    scanf("%d",&benim_yasim);

    double ay,hafta,gun,saat;

    ay = benim_yasim * 12;
    hafta = (benim_yasim * 365.6)/7;
    gun = hafta*7;
    saat = gun * 24;

    printf("Ay Olarak:%.2f\n\n",ay);
    printf("Hafta Olarak:%.2f\n\n",hafta);
    printf("Gun Olarak:%.2f\n\n",gun);
    printf("Saat Olarak:%.2f\n\n",saat);

    return 0;
}
