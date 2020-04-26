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

int basamak_kontrolu(int);
int d1_bul(int);
long long print(long long,long long);

int main(int argc, char *argv[])
{
    int dokuzBasamakliSayi = atoi(argv[1]); //char,integera cevrilir
    int sayac = basamak_kontrolu(dokuzBasamakliSayi);
    if(sayac == 9)//sayi 9 basamakli ise islem yapar
    {
       int d1 = d1_bul(dokuzBasamakliSayi); //dokuz basamakli sayi d1'i bulmak icin d1_bul() adli fonksiyona parametre olarak verilir

        printf("d1 Degeri:%d\n",d1);//d1 degeri ekrana basilir
        printf("10 veya 11 Basamakli Sayi:%I64d",print(d1,dokuzBasamakliSayi));//Birlestirilmis 10 veya 11 basamakli sayiyi ekrana basar
    }
    else //sayi 9 basamakli degilse hata mesaji dondurur.
    {
        printf("UYARI! LUTFEN DOKUZ BASAMAKLI BIR SAYI GIRINIZ...");
    }
    return 0;
}

int basamak_kontrolu(int basamakKontrolu)//Bu fonksiyon girilen basamak sayisini bulur
{
    int sayac = 1;
    while("TRUE")
    {
        basamakKontrolu /= 10;
        if(basamakKontrolu == 0)
        {
            break;
        }
        sayac++;
    }
    return sayac;
}

int d1_bul(int dokuzBasamakliSayi)//Bu fonksiyon d1 degerini bulur ve dondurur
{
    int i,toplam=0,basamak;

    for(i=0; i<9; i++) //Dongu d10d9d8d7d6d5d4d3d2 sayisinin basamaklarini verilen formule gore toplar
    {
        basamak = dokuzBasamakliSayi%10; //123456789%10 = 9 ==> basamak=9 olur
        toplam = toplam + (i+2)*basamak; // 0+(2)*9 = 18
        dokuzBasamakliSayi = dokuzBasamakliSayi/10;// 123456789/10=12345678 modunu alacagimiz yeni sayi olustu
    }
    int d1;
    for(d1=0; d1<=10; d1++)//Bu dongu d1 sayisini bulur
    {
        if((d1+toplam)%11==0)
        {
            break;
        }
    }
    return d1;
}

long long print(long long d1,long long dokuzBasamakliSayi)//Bu fonksiyon bulunan d1 sayisi ile dokuz basamakli sayiyi birlestirip ekrana basar
{
    long long genel_sayi;
    if(d1==10)
    {
        genel_sayi = dokuzBasamakliSayi * 100 + d1; //123456789*100 = 12345678900 ==> 12345678900+10=12345678910
    }
    else
    {
        genel_sayi = dokuzBasamakliSayi * 10 + d1;//123456789*10 = 1234567890 ==> 1234567890+5=1234567895
    }
    return genel_sayi;
}
