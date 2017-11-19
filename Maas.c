#include<stdio.h>
main()
//Maaş Hesaplıyorum
{
int saat, gun;
float saatlik_ucret, maas;
printf("Calisma Saati Giriniz");
scanf("%d",&saat);
printf("Saatlik Ucreti Giriniz");
scanf("%f",&saatlik_ucret);
printf("Kac Gun Calistigini Giriniz");
scanf("%d",&gun);
maas = gun * saatlik_ucret * saat;
printf("Maas = %f 'dir\n",maas);
return 0;
}




