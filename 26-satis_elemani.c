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
    int satis_elemani_maas = 1250;

    int urun_mikari,toplam_satis=0;

    for(int i=1; i<=3; i++)
    {
        printf("%d. urunden satilan adet:",i);
        scanf("%d",&urun_mikari);
        toplam_satis +=urun_mikari;
    }
    satis_elemani_maas = satis_elemani_maas + (toplam_satis*25);
    printf("Satis elemaninin maasi:%d",satis_elemani_maas);


    return 0;
}
