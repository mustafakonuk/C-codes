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
    int tc_kimlik[10];

    for(int dongu1=0; dongu1<=8; dongu1++) //ilk 9 haneyi istedik.
    {
        printf("TC Kimlik No %d'inci Hane:",dongu1+1);
        scanf("%d",&tc_kimlik[dongu1]);

        if(tc_kimlik[0] == 0)
        {
            printf("İlk hane '0' olmaz!!");
            break;

        }
    }

    int tekler=0,ciftler=0;

    for(int dongu2=0; dongu2<=8; dongu2+=2) //1,3,5,7,9 hanelerinin toplamı.
    {
        tekler += tc_kimlik[dongu2];
    }
    tekler *= 7;

    for(int dongu3=1; dongu3<=7; dongu3+=2) //2,4,6,8 hanelerinin toplamı.
    {
        ciftler +=tc_kimlik[dongu3];
    }

    int tc_10,tc_11; //10'uncu ve 11'inci haneleri tanımladık.

    tc_10 = (tekler - ciftler)%10;
    printf("10'uncu hane:%d\n",tc_10);

    for(int dongu4=0; dongu4<=8; dongu4++) //11'inci haneyi bulduk.
    {
        tc_11 += tc_kimlik[dongu4];
    }
    
    tc_11 += tc_10;
    tc_11 = tc_11 % 10;
    printf("11'inci hane:%d",tc_11);

    return 0;
}
