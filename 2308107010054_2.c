#include <stdio.h>


int check(int input){																//memastikan 4 angka yang di input
	int jumlah = 0;
	while(input != 0) {
		input /= 10;																//mengurangi 1 digit dari angka 2024 menjadi 202
		jumlah++;																	//tambah 1
	}
	return jumlah;		
																					//mengembalikan jumlah digit, yakni 4 dari 2024
}

int main(){
	int input;
	char huruf;																		//utk membersihkan variabel input
	do{																				//memakai do while
		printf("Masukkan Tahun: ");
		if(scanf("%d", &input)!=1){													//jika input tidak dapat dibuah menjadi int maka akan mencetak
			printf("Tahun Tidak Valid Silahkan Input Ulang\n");
			
		while((huruf = getchar()) != '\n');											//getchar() membaca karakter lalu mengembalikan sebagai int
																					//menangani input yang tidak valid, membersihkan buffer input hingga(\n)
		}
		
		else if(check(input)!= 4){													//jika tidak sama dengan 4 maka print ini 
		printf("Tahun Tidak Valid Silahkan Input Ulang\n");
		}
	}
	while(check(input) != 4); 														//karena sistem while (tidak sama dengan 4 maka dia akan meminta
																					//terus menerus agar 4 angka terpenuhi
		if((input%4==0)&&(input%100!=0)||(input%400==0)){ 							//masuk ke badan if yakni badan yang ingin cari tahun kabisat, 
																					//tahun kabisat adalah tahun yang habis di bagi 4, tidak habis di bagi 100 atau habis dibagi 400, jika kondisi terpenuhi maka akan print ini
	printf("%d Adalah Tahun Kabiset Bang\n", input);
		}
	else{
	printf("Kalau %d Mah Bukan Tahun Kabiset\n", input); 							//maka jika tidak akan ngeprint ini
		}

	return 0;
}