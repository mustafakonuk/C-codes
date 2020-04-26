/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include<stdio.h>
int mukemmel_sayi(int dizi[10])
{
	int toplam,i,a,bolum;

	for(i=0; i<10; i++)
	{
		toplam=0;
        for(a=1; a<dizi[i]; a++)
        {
		bolum=dizi[i]%a;
            if(bolum==0)
            {
                toplam=toplam+a;
            }
            if(toplam==dizi[i])
            {
                printf("%d\n",toplam);
                break;

            }
        }

	}
}
int main()
{
	int dizi[10];
	int i;

	for(i=0;  i<10; i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d",&dizi[i]);
	}
	mukemmel_sayi(dizi);

}
