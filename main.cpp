#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char** argv) {
	srand(time(0)); //Her defasinda farkli bir sayi uretir.
	char ch = 'H'; //ch degiskenine baslangic degeri atandi.
	//Kazanma/kaybetme degerinin tutuldugu degiskenler.
	int kzn=0; //Kazanma sayisi.
	int brb=0; //Beraberlik sayisi.
	int kyp=0; //Kaybetme sayisi.
	int secimim;
	printf("-----------------------------------------------------\n");
	printf("-- TAS - KAGIT - MAKAS OYUNU --\n");
	printf("-----------------------------------------------------\n");
	//Oyundan cikmak istemedigin(ch=="E") sürece devan et!!.
	do
	{
		printf("Tas-1;\nKagit-2;\nMakas-3\nSeciminiz : ");
		cin>>secimim; //Benim secimim.
		int pcScm= (int)(rand() %3)+1; //Bilgisayarin secimi.
		printf("Bilgisayarin secimi : %d\n", pcScm);
		//Oyuncunun beraberlik haricinde 3 kazanma veya 3 kaybetme ihtimali var.
		if(secimim==pcScm)
		{
			printf("Ýkinizde ayni sectiniz. Berabere !");
			brb+=1;
		}
		else if(secimim==3 && pcScm==2)
		{
			printf("Makas, kagidi keser. Sen Kazandin !");
			kzn+=1;
		}
		else if(secimim==1 && pcScm==3)
		{
			printf("Tas, makasi kirar. Sen Kazandin !");
			kzn+=1;
		}
		else if(secimim==2 && pcScm==1)
		{
			printf("Kagit, tasi sarar. Sen Kazandin !");
			kzn+=1;
		}
		else if(secimim==2 && pcScm==3)
		{
			printf("Makas, kagidi keser. Bilgisayar Kazandi !");
			kyp+=1;
		}
		else if(secimim==3 && pcScm==1)
		{
			printf("Tas, makasi kirar. Bilgisayar Kazandi !");
			kyp+=1;
		}
		else if(secimim==1 && pcScm==2)
		{
			printf("Kagit,tasi sarar. Bilgisayar Kazandi !");
			kyp+=1;
		}
		// Eger farkli bir rakam girilirse.
		else
		{
			printf("Lutfen 1,2 veya 3 giriniz !!");
		}
		printf("\nOyuna devam etmek ister misiniz (E/H) ?");
		cin>>ch;
	}
	while(ch=='E' || ch =='e'); //dongu sonu.
	//Ekrana toplam skorlari yazdiralim.
	printf("\nKazanma Sayisi : %d", kzn);
	printf("\nBeraberlik Sayisi : %d", brb);
	printf("\nKaybetme Sayisi : %d", kyp);
	return 0;
}
