/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>

int main()//iki basamakli sayilarin okunusunu ekrana yazdirdik.
{
    int sayi;

    printf("Iki basamakli bir sayi giriniz: "); //iki basamakli sayi istedik.
    scanf("%d",&sayi);

    int sayi1;
    sayi1=sayi/10; //onlar basamagini bulduk.
    if(sayi1==1)
    {
        printf("on");
    }
    else if(sayi1==2)
    {
        printf("yirmi");
    }
    else if(sayi1==3)
    {
        printf("otuz");
    }
    else if(sayi1==4)
    {
        printf("kirk");
    }
    else if(sayi1==5)
    {
        printf("elli");
    }
    else if(sayi1==6)
    {
        printf("altmis");
    }
    else if(sayi1==7)
    {
        printf("yetmis");
    }
    else if(sayi1==8)
    {
        printf("seksen");
    }
    else if(sayi1==9)
    {
        printf("doksan");
    }
    int rakam;
    rakam=sayi%10;//birler basamagini bulduk.

    if(rakam==1)
    {
        printf("bir");
    }
    else if(rakam==2)
    {
        printf("iki");
    }
    else if(rakam==3)
    {
        printf("uc");
    }
    else if(rakam==4)
    {
        printf("dort");
    }
    else if(rakam==5)
    {
        printf("bes");
    }
    else if(rakam==6)
    {
        printf("alti");
    }
    else if(rakam==7)
    {
        printf("yedi");
    }
    else if(rakam==8)
    {
        printf("sekiz");
    }
    else if(rakam==9)
    {
        printf("dokuz");
    }

    return 0;
}
