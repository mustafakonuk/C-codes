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
    int kullanilan_saat_miktari;

    printf("Musteri kac saat internet kullandı:");
    scanf("%d",&kullanilan_saat_miktari);

    int kategori;

    printf("Musteri hangi kategoriye kayitli(1,2,veya3):");
    scanf("%d",&kategori);

    int birinci_A=1000,birinci_B=1100,birinci_C=1200,birinci_D=1300,birinci_E=1400; //birinci kategori
    int ikinci_A=1200 ,ikinci_B=1300 ,ikinci_C=1400 ,ikinci_D=1500 ,ikinci_E=1600; //ikinci kategori
    int ucuncu_A=1400 ,ucuncu_B=1500 ,ucuncu_C=1600 ,ucuncu_D=1700 ,ucuncu_E=1800; //üçüncü kategori
    int borc_mikari;

    if(kategori == 1)
    {
        if(kullanilan_saat_miktari >= 300)
        {
            borc_mikari = birinci_A + (kullanilan_saat_miktari*10);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(150<=kullanilan_saat_miktari<300)
        {
            borc_mikari = birinci_B + (kullanilan_saat_miktari*12);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(90<=kullanilan_saat_miktari<150)
        {
            borc_mikari = birinci_C + (kullanilan_saat_miktari*15);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(30<=kullanilan_saat_miktari<90)
        {
            borc_mikari = birinci_D + (kullanilan_saat_miktari*17);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(0<kullanilan_saat_miktari<30)
        {
            borc_mikari = birinci_E + (kullanilan_saat_miktari*19);
            printf("Borcunuz:%d tl",borc_mikari);
        }
    }
    else if(kategori == 2)
    {
        if(kullanilan_saat_miktari >= 300)
        {
            borc_mikari = ikinci_A + (kullanilan_saat_miktari*10);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(150<=kullanilan_saat_miktari<300)
        {
            borc_mikari = ikinci_B + (kullanilan_saat_miktari*12);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(90<=kullanilan_saat_miktari<150)
        {
            borc_mikari = ikinci_C + (kullanilan_saat_miktari*15);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(30<=kullanilan_saat_miktari<90)
        {
            borc_mikari = ikinci_D + (kullanilan_saat_miktari*17);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(0<kullanilan_saat_miktari<30)
        {
            borc_mikari = ikinci_E + (kullanilan_saat_miktari*19);
            printf("Borcunuz:%d tl",borc_mikari);
        }
    }
    else if(kategori == 3)
    {
        if(kullanilan_saat_miktari >= 300)
        {
            borc_mikari = ucuncu_A + (kullanilan_saat_miktari*10);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(150<=kullanilan_saat_miktari<300)
        {
            borc_mikari = ucuncu_B + (kullanilan_saat_miktari*12);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(90<=kullanilan_saat_miktari<150)
        {
            borc_mikari = ucuncu_C + (kullanilan_saat_miktari*15);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(30<=kullanilan_saat_miktari<90)
        {
            borc_mikari = ucuncu_D + (kullanilan_saat_miktari*17);
            printf("Borcunuz:%d tl",borc_mikari);
        }
        else if(0<kullanilan_saat_miktari<30)
        {
            borc_mikari = ucuncu_E + (kullanilan_saat_miktari*19);
            printf("Borcunuz:%d tl",borc_mikari);
        }
    }
    else
    {
        printf("Lütfen 1,2,3 sayilarindan birini giriniz!!");
    }

    return 0;
}
