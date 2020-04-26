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
    int cift_depo=0; //çift sayıların toplandığı yer.
    int tek_depo=0;  //tek sayıların toplandığı yer.

    for(int sayi=1; sayi<=50; sayi++)
    {
        if(sayi%2==0)
        {
            cift_depo+=sayi; //çiftse buraya ekler.
        }
        else
        {
            tek_depo+=sayi; //tekse buraya ekler.
        }
    }

    printf("Cift sayilarin toplami: %d\n",cift_depo);
    printf("Tek sayilarin toplami: %d",tek_depo);

    return 0;
}
