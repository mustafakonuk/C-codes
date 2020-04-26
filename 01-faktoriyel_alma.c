/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    int fak=1,i;

    for(i=1; i<=sayi; i++)
    {
        fak=fak*i;
    }
    printf("%d'nin faktoriyeli: %d",sayi,fak);
}
int main()
{
    int sayi;

    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    faktoriyel(sayi);
    return 0;
  
}
