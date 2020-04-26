/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int daire_alan_hesabi(); //dairenin alanını bulur.
int daire_alan_hesabi(int alan_yari_cap)
{
    int pi = 3,alan;

    alan = pow(alan_yari_cap,2)*pi;
    return alan;

}
int daire_cevre_hesabi(); //dairenin cevresini bulur.
int daire_cevre_hesabi(int cevre_yari_cap)
{
    int pi = 3,cevre;

    cevre = 2*pi*cevre_yari_cap;
    return cevre;
}

int main()
{
    int yari_cap; //dairenin yarıçapını atadık.

    printf("Dairenin yari capini giriniz:"); //yarıçap aldık.
    scanf("%d",&yari_cap);

    printf("Dairenin Alani:%d\n",daire_alan_hesabi(yari_cap)); //alanı ekrana basar
    printf("Dairenin Cevresi:%d",daire_cevre_hesabi(yari_cap));//cevreyi ekrana basar.

    return 0;
}
