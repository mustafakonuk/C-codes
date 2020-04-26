/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include<stdio.h>

int tersten_tazdirma(int sayi)
{
	int i;
    while(sayi!=0)
	{
		i=sayi%10;
		sayi=sayi/10;

		printf("%d",i);
	}
}
int main()
{
	int sayi;

	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	tersten_tazdirma(sayi);
}
