/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
   /*Kimya deneyi*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x_maddesi,y_maddesi,z_maddesi;

    x_maddesi = 1200; //reaksiyon sunucu oluşan x maddesi mikarı.
    y_maddesi = 2045; //reaksiyon sunucu oluşan y maddesi mikarı.
    z_maddesi = 754;  //reaksiyon sunucu oluşan z maddesi mikarı.

    printf("Reaksiyon sonucu oluşan x maddesi mikari:%d\n",x_maddesi);
    printf("Reaksiyon sonucu oluşan y maddesi mikari:%d\n",y_maddesi);
    printf("Reaksiyon sonucu oluşan z maddesi mikari:%d\n",z_maddesi);

    printf("-------------------\n");
    printf("--BİR HAFTA SONRA--\n");
    printf("-------------------\n");

    int yeni_x_maddesi,yeni_y_maddesi,yeni_z_maddesi;

    yeni_x_maddesi = x_maddesi - 200;
    yeni_y_maddesi = (y_maddesi + (x_maddesi-yeni_x_maddesi)) - 120;
    yeni_z_maddesi = z_maddesi + 120;

    printf("Bir hafta sonra oluşan x maddesi:%d\n",yeni_x_maddesi);
    printf("Bir hafta sonra oluşan y maddesi:%d\n",yeni_y_maddesi);
    printf("Bir hafta sonra oluşan z maddesi:%d\n",yeni_z_maddesi);

    return 0;
}
