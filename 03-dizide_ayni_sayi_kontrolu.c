/* **********************************
   *                                *
   * Mustafa Konuk                  *
   * Karadeniz Teknik Üniversitesi  *
   * mustafakonuk@outlook.com.tr    *
   *                                *
   ********************************** */
 #include <stdio.h>
 int main()
 {
 	int dizi[20];
 	int i,a;

 	for(i=0; i<20; i++)
 	{
 		printf("Dizinin %d inci elemanini giriniz: ",i+1);
		scanf("%d",&dizi[i]);

		if(i>=1)
		{
			for(a=0; a<i; a++)
			{
				if(dizi[a]==dizi[i])
				{
					printf("Ayni sayi!\n");
				    return 0;
				}
			}
		}
	}
 }
