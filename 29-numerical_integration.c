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
#include <string.h>

void print(int,char [],int [],float ,int,float ,int,int);
int polinomUzunluguBulma(char []); //polinom uzunlugu bulur
float rectangleRule(int [],int [],float , int ,float, int); //yontemler
float midpointRule(int [],int [],float , int ,float, int);
float trapezoidRule(int [],int [],float , int ,float, int);
float simpsonsRule(int [],int [],float , int ,float, int,int);

int main(int argc, char *argv[])
{
    int polinomUzunlugu;
    polinomUzunlugu = polinomUzunluguBulma(argv[1]);

    char polinom[polinomUzunlugu];
    for(int sayici = 0; sayici <= polinomUzunlugu; sayici++) //polinomu yeni bir polinoma kopyalar
    {
        polinom[sayici] = argv[1][sayici];
    }
    char tempSabit[1]; //sabiti bir degiskende depolar
    tempSabit[0] = polinom[15];
    int sabit;
    sabit = atoi(tempSabit);

    char katsayi[4],derece[4];
    int i=0,j=0;

    while(i < (polinomUzunlugu-1)) //parse islemi yapar
    {
        if(polinom[i] == 'x' && polinom[i+1] == '^')
        {
            katsayi[j] = polinom[i-1];
            derece[j] = polinom[i+2];
            j++;
        }
        i++;
    }
    int tempKatsayi,tempDerece;
    tempKatsayi = atoi(katsayi);
    tempDerece  = atoi(derece);

    int katsayiDegeri[4],dereceDegeri[4]; //katsayi ve derece degerlerinin degiskenlerde depolar
    for(int k=0; k<4; k++)
    {
        katsayiDegeri[k] = tempKatsayi%10;
        dereceDegeri[k]  = tempDerece%10;
        tempKatsayi     /= 10;
        tempDerece      /= 10;
    }
    int ustDeger,yontemSecimi,nDegeri;
    float altDeger,hDegeri;

    altDeger     = atoi(argv[2]);
    ustDeger     = atoi(argv[3]);
    nDegeri      = atoi(argv[4]);
    yontemSecimi = atoi(argv[5]);
    hDegeri      = (ustDeger-altDeger);
    hDegeri     /= nDegeri;

    print(polinomUzunlugu,polinom,katsayiDegeri,altDeger,ustDeger,hDegeri,sabit,nDegeri);

    float sonuc;

    switch(yontemSecimi)
    {
    case 1:
        {
            printf("---Rectangle Rule Yontemi Ile Hesaplama Yapiliyor---\n\n");
            sonuc = rectangleRule(katsayiDegeri,dereceDegeri,altDeger,ustDeger,hDegeri,sabit);
            printf("Sonuc: %.2f\n",sonuc);
        }
        break;
    case 2:
        {
            printf("---Midpoint Rule Yontemi Ile Hesaplama Yapiliyor---\n\n");
            sonuc = midpointRule(katsayiDegeri,dereceDegeri,altDeger,ustDeger,hDegeri,sabit);
            printf("Sonuc: %.2f\n",sonuc);
        }
        break;
    case 3:
        {
            printf("---Trapezoid Rule Yontemi Ile Hesaplama Yapiliyor---\n\n");
            sonuc = trapezoidRule(katsayiDegeri,dereceDegeri,altDeger,ustDeger,hDegeri,sabit);
            printf("Sonuc: %.2f",sonuc);
        }
        break;
    case 4:
        {
            printf("---Simpsons Rule Yontemi Ile Hesaplama Yapiliyor---\n\n");
            sonuc = simpsonsRule(katsayiDegeri,dereceDegeri,altDeger,ustDeger,hDegeri,sabit,nDegeri);
            printf("Sonuc: %.2f",sonuc);
        }
        break;
    default:
        printf("Boyle Bir Secim Yok!");
    }
    return 0;
}
int polinomUzunluguBulma(char polinom[])
{
    int polinomUzunlugu = 0;
    while(polinom[polinomUzunlugu] != '\0')
    {
        polinomUzunlugu++;
    }
    return polinomUzunlugu;
}
float rectangleRule(int katsayi[],int derece[],float altDeger , int ustDeger ,float hDegeri,int sabit)
{
    float sonuc = 0;
    altDeger += hDegeri;
    while(altDeger <= ustDeger)
    {
        for (int i=0; i<3; i++)
        {
            sonuc += katsayi[i]*(pow(altDeger,derece[i]));
        }
        altDeger += hDegeri;
        sonuc += sabit;
    }
    sonuc *= hDegeri;
    return sonuc;
}
float midpointRule(int katsayi[],int derece[],float altDeger , int ustDeger ,float hDegeri,int sabit)
{
    float sonuc = 0;
    float hYeni;
    hYeni = hDegeri/2;
    altDeger += hYeni;
    while(altDeger <= ustDeger)
    {
        for (int i=0; i<3; i++)
        {
            sonuc += katsayi[i]*(pow(altDeger,derece[i]));
        }
        altDeger += hDegeri;
        sonuc += sabit;
    }
    sonuc *= hDegeri;
    return sonuc;
}
float trapezoidRule(int katsayi[],int derece[],float altDeger , int ustDeger ,float hDegeri,int sabit)
{
    float sonuc = 0;
    float yIlk = 0;
    float ySon = 0;
    float toplam = 0;

    for (int i=0; i<3; i++)
    {
        yIlk += katsayi[i]*(pow(altDeger,derece[i]));
    }
    yIlk += sabit;

    altDeger += hDegeri;
    while(altDeger < ustDeger)
    {
        for (int i=0; i<3; i++)
        {
            sonuc += katsayi[i]*(pow(altDeger,derece[i]));
        }
        altDeger += hDegeri;
        sonuc += sabit;
    }

    for (int i=0; i<3; i++)
    {
        ySon += katsayi[i]*(pow(ustDeger,derece[i]));
    }
    ySon += sabit;
    toplam = sonuc + yIlk + ySon;
    toplam *= hDegeri;
    return toplam;
}
float simpsonsRule(int katsayi[],int derece[],float altDeger , int ustDeger ,float hDegeri,int sabit,int nDegeri)
{
    float sonuc = 0;
    int j=0;
    float A[50],B[50];
    for(int a=0; a<50; a++)
    {
        A[a] = 0;
        B[a] = 0;
    }
    if(nDegeri % 2 != 0)
    {
        return -1; //n cift olmak zorunda
    }
    else
    {
        while(altDeger <= ustDeger)
        {
            if(j%2 == 0)
            {
                for (int i=0; i<3; i++)
                {
                    A[j] += katsayi[i]*(pow(altDeger,derece[i]));
                }
                A[j] += sabit;
            }
            else
            {
                for (int i=0; i<3; i++)
                {
                    A[j] += katsayi[i]*(pow(altDeger,derece[i]));
                }
                A[j] += sabit;
                A[j] *= 4;
            }
            altDeger += hDegeri;
            j+=1;
        }

        for(int m=0; m<50; m+=2)
        {
            for(int c=m; c<m+3; c++)
            {
                B[m] += A[c];
            }
        }
        for(int n=0; n<50; n+=2)
        {
            B[n]/=3;
            sonuc += B[n];
        }
        sonuc *= hDegeri;
        return sonuc;
    }
}
void print(int polinomUzunlugu,char polinom[],int katsayi[],float alt,int ust,float h,int sabit,int n)
{
    printf("Polinom Uzunlugu: %d\n",polinomUzunlugu);
    printf("Polinom         : %s\n",polinom);
    printf("Sabit Deger     : %d\n",sabit);
    printf("Alt Deger       : %.2f\n",alt);
    printf("Ust Deger       : %d\n",ust);
    printf("n Degeri        : %d\n",n);
    printf("h Degeri        : %.2f\n",h);
    for(int i=0; i<3; i++)
    {
        printf("x^%d Katsayisi   : %d\n",(i+1),katsayi[i]);
    }
    printf("\n");
}
