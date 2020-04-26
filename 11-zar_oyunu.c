/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void sonuc_yazdir(int,int,int,int); //kazanan oyuncu ekrana yazdirilir.
void sonuc_yazdir(int ilk_gelen_oyuncu_numarasi, int ikinci_gelen_oyuncu_numarasi, int birinci_gelenin_zari, int ikinci_gelenin_zari)
{
    if(birinci_gelenin_zari < ikinci_gelenin_zari)
        {
            printf("Kazanan %d numarali oyuncu!\nTebrikler..\n",ilk_gelen_oyuncu_numarasi);
        }
        else if(birinci_gelenin_zari > ikinci_gelenin_zari)
        {
            printf("Kazanan %d numarali oyuncu!\nTebrikler..\n",ikinci_gelen_oyuncu_numarasi);

        }
        else
        {
            printf("Oyun berabere!!\n");

        }
}
void zar_karsilastirma(int,int,int,int);
void zar_karsilastirma(int birinci_gelenin_zari,int ikinci_gelenin_zari,int ilk_gelen_oyuncu_numarasi, int ikinci_gelen_oyuncu_numarasi)
{
    int hedef_sayi;
    hedef_sayi = 2 + rand() % 11; //Hedef sayi belirlenir.

    printf("%d. oyuncu zar atsin\n",ilk_gelen_oyuncu_numarasi);
    printf("Attigi zar: %d\n",birinci_gelenin_zari);

    printf("%d. oyuncu zar atsin\n",ikinci_gelen_oyuncu_numarasi);
    printf("Attigi zar: %d\n",ikinci_gelenin_zari);

    birinci_gelenin_zari = hedef_sayi - birinci_gelenin_zari;
    ikinci_gelenin_zari = hedef_sayi - ikinci_gelenin_zari;

    birinci_gelenin_zari = fabs(birinci_gelenin_zari); //fabs ile mutlak deðer aliyoruz.
    ikinci_gelenin_zari = fabs(ikinci_gelenin_zari);

    printf("Hedef sayi: %d\n",hedef_sayi);

    sonuc_yazdir(ilk_gelen_oyuncu_numarasi,ikinci_gelen_oyuncu_numarasi,birinci_gelenin_zari,ikinci_gelenin_zari);
}
int main()
{
    char oyuna_devam_durumu = 'e';
    while(oyuna_devam_durumu != 'h')
    {
        srand(time(NULL)); //bir sonrakin de farkli bir sayi atamayi sagliyo
        int oyuncu_secimi;
        oyuncu_secimi = 1 + (rand() % 2);

        int ilk_zar; //iki kere zar atilip toplaniyor.
        ilk_zar = 1 + (rand() % 6);
        ilk_zar = ilk_zar + 1 +(rand() % 6);

        int ikinci_zar; //iki kere zar atip toplaniyor.
        ikinci_zar = 1 + (rand() % 6);
        ikinci_zar = ikinci_zar + 1 +(rand() % 6);

        int ilk_gelen_oyuncu,ikinci_gelen_oyuncu;
        if(oyuncu_secimi == 2)
        {
            ilk_gelen_oyuncu = oyuncu_secimi;
            ikinci_gelen_oyuncu = 1;
            zar_karsilastirma(ilk_zar,ikinci_zar,ilk_gelen_oyuncu,ikinci_gelen_oyuncu);
        }
        else
        {
            ilk_gelen_oyuncu = oyuncu_secimi;
            ikinci_gelen_oyuncu = 2;
            zar_karsilastirma(ilk_zar,ikinci_zar,ilk_gelen_oyuncu,ikinci_gelen_oyuncu);
        }

        printf("Oyuna devam etmek istiyormusunuz??(e veya h): "); //Oyuna devam sorulur.
        scanf(" %c",&oyuna_devam_durumu);

    }
    return 0;
}
