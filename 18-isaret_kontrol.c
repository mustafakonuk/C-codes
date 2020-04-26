/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
   
#include <stdio.h>
#include <stdlib.h>

void isaret_kontrol(int girilen_sayi)
{
    if(girilen_sayi < 0)
    {
        printf("Bu sayi negatif!!");
    }
    else if(girilen_sayi == 0)
    {
        printf("Bu sayi nötr!!");
    }
    else if (girilen_sayi > 0)
    {
        printf("Bu sayi pozitif!!");
    }
}

int main()
{
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);

    isaret_kontrol(sayi);
    return 0;
}
