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
    printf("------------------\n");
    printf("Acı Bulma Programi\n");
    printf("------------------\n");

    int aci,iki_aci_toplami=0;

    for(int i=1; i<=2; i++)
    {
        printf("%d. Aci:",i);
        scanf("%d",&aci);
        iki_aci_toplami += aci;
    }

    int ic_aci_toplami=180,diger_aci;

    diger_aci = ic_aci_toplami - iki_aci_toplami;
    printf("Ucuncu aci:%d",diger_aci);

    return 0;
}
