/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>

int main() //uc boyutlu matris olusturup ekrana basar.
{
	int dizi[3][3];
	int i,a;

	for(i=0; i<3; i++) //satir icin.
	{
        for(a=0; a<3; a++) //sutun icin.
        {
            printf("dizinin %d . satirinin %d sutunu: ",i+1,a+1);
            scanf("%d",&dizi[i][a]);
        }
	}

	for(i=0; i<3; i++)
	{
        for(a=0; a<3; a++)
        {
            printf("%d ",dizi[i][a]);
        }
        printf("\n");
	}

    return 0;
}
