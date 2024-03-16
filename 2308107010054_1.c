#include <stdio.h>
int main(){
	int bilangan;
	int input, biner = 0, bit = 1;//menentukan tmpt nilai biner yg mau diisi
	int deci=0;
	printf("|----------SELECT------------|\n");
	printf("|1. Bilangan Desimal ke Biner|\n");
	printf("|----------------------------|\n");
	printf("|2. Bilangan Biner ke Desimal|\n");
	printf("|----------------------------|\n");
	printf("|3. Bilangan Desimal ke Oktal|\n");
	printf("|----------------------------|\n");
	printf("|4. Bilangan Oktal ke Desimal|\n");
	printf("|----------------------------|\n");
	printf("Masukkan opsi bilangan yang ingin dicari= ");
	scanf("%d",&bilangan);
	
	switch(bilangan){
		case 1:
		printf("Masukkan Angka Desimal= ");
		scanf("%d",&input);
		
		while (input > 0){ 													//jika input lebih besar dari 0
																			//maka perulangan akan terus berlanjut
		int sisa = input % 2;												//variabel baru
		int hasil = input /2;												//variabel baru
		printf("%.2d	: 2 = %.2d sisa %d\n", input, hasil, sisa);
																			//menampilkan input, hasil dan sisa
		biner += sisa * bit; 												//sisa * bit, hasilnya = penambahan biner, jika sisa 1 maka +, dan jika
		bit *= 10; 															//memperbesar basis biner, maka
																			//dari bit 1(awal) lalu bit 10(1*10) lalu bit 100(10*10)
		
		input = hasil; 														//hasil(input/2) agar terupdate
		
		}
		printf("Binernya Adalah= %d\n", biner);
		break;
		
		
		case 2:
		printf("Masukkan Angka Biner= ");
		scanf("%d",&input);
		
		while (input != 0){ 												//jika input lebih besar dari 0 maka perulangan akan terus berlanjut
		int sisa = input % 10;												
		deci = deci+sisa *bit;												//desimal di perbaharui
		input /= 10; 														//hapus digit terakhir
		bit *= 2;															//lipatganda biar biner bergeser jadi 2, 4, 8
		
		}
		printf("Desimalnya Adalah= %d\n", deci);
		break;


		case 3:
		printf("Masukkan Angka Desimal= ");
		scanf("%d",&input);
		while (input > 0){
		int sisa = input % 8;	//variabel baru
		int hasil = input /8;	//variabel baru
		biner += sisa * bit; //biner + sisa * bit
		bit *= 10;
		input = hasil; //memastikan jika nilai input di perbaharui
		
		}
		printf("Oktal Adalah= %d\n", biner);
		break;
		
		
		case 4:
		printf("Masukkan Angka Oktal= ");
		scanf("%d",&input);
		
		while (input != 0){ //jika input lebih besar dari 0
							//maka perulangan akan terus berlanjut
		int sisa = input % 10;	//variabel baru
		deci = sisa *bit + deci;
		input /= 10;
		bit *= 8;
		
		}
		printf("Desimalnya Adalah= %d\n", deci);
		break;
	}
	
return 0;
}