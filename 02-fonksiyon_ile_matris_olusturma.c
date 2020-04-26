/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
int deger_atama(int dizi[][4],int boyut) //ekrana basmak icin deger_atama isimli fonksiyon olusturduk.
{
    int i,a;

	for(i=0; i<boyut; i++)
	{
		for(a=0; a<4; a++)
		{
	    	printf("%d ",dizi[i][a]);
		}
		printf("\n");
	}
}
int main()
{
    int i,a;

	int dizi[4][4]; //dort e dortluk bir matris olusturduk.

	for(i=0; i<4; i++) //satir icin.
	{
		for(a=0; a<4; a++) //sutun icin.
		{
			printf("dizinin %d . satirinin %d sutunu: ",i+1,a+1);
	    	scanf("%d",&dizi[i][a]);
		}
	}
	deger_atama(dizi,4);
    return 0;
}
