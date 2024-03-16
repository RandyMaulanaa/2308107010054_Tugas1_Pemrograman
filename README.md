Ini adalah sebuah program sederhana yang dimana bisa konversikan bilangan dari Desimal ke Biner,
Biner ke Desimal, Desimal ke Oktal dan Oktal ke Biner


#include <stdio.h>
int main(){
	int bilangan;
	int input, biner = 0, bit = 1;
	int deci=0;
	int oktal=0;
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
		
		while (input > 0){ 
		int sisa = input % 2;											
		int hasil = input /2;					
		printf("%.2d	: 2 = %.2d sisa %d\n", input, hasil, sisa);
							
		biner += sisa * bit; 										
		bit *= 10; 															
		input = hasil; 														
		
		}
		printf("Binernya Adalah= %d\n", biner);
		break;
		
		
		case 2:
		printf("Masukkan Angka Biner= ");
		scanf("%d",&input);
		
		while (input != 0){ 												
		int sisa = input % 10;												
		deci = deci+sisa *bit;												
		input /= 10; 														
		bit *= 2;															
		
		}
		printf("Desimalnya Adalah= %d\n", deci);
		break;


		case 3:
		printf("Masukkan Angka Desimal= ");
		scanf("%d",&input);
		while (input > 0){
		int sisa = input % 8;	
		int hasil = input /8;	/
		biner += sisa * bit; 
		bit *= 10;
		input = hasil; 
		
		}
		printf("Oktal Adalah= %d\n", biner);
		break;
		
		
		case 4:
		printf("Masukkan Angka Oktal= ");
		scanf("%d",&input);
		
		while (input != 0){ 
							
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


kode diatas adalah kode yang ingin konversikan bilangan tertentu
disini kita bisa pilih case, ada 1,2,3,4

|----------SELECT------------|
|1. Bilangan Desimal ke Biner|
|----------------------------|
|2. Bilangan Biner ke Desimal|
|----------------------------|
|3. Bilangan Desimal ke Oktal|
|----------------------------|
|4. Bilangan Oktal ke Desimal|
|----------------------------|

pada bagain ini diminta untuk memilih case menurut keperluan kita sendiri,dan inputan user akan di simpan di variabel bilangan
printf("Masukkan opsi bilangan yang ingin dicari= ");
	scanf("%d",&bilangan);

ketika user memilih case 1 maka kode program ini yang di eksekusi
case 1:
		printf("Masukkan Angka Desimal= ");	
		scanf("%d",&input);
		
		while (input > 0){ 			
							
		int sisa = input % 2;			
		int hasil = input /2;			
		printf("%.2d	: 2 = %.2d sisa %d\n", input, hasil, sisa); 
							
		biner += sisa * bit; 			
		bit *= 10; 				
							
		
		input = hasil; 				
		
		}
		printf("Binernya Adalah= %d\n", biner);
		break;

meminta inputan user dan di simpan ke variabel input, jika input lebih besar dari 0 maka perulangan akan terus berlanjut
variabel baru yang dimana sisa adalah hasil modulo input dengan 2, variabel baru lagi yang dimana hasil adalah input dibagi 2
lalu pada printf("%.2d	: 2 = %.2d sisa %d\n", input, hasil, sisa); menampilkan input, hasil dan sisa
sisa * bit, hasilnya = penambahan biner
jika sisa 1 maka +, dan jika sisa 0 biner tidak di tambah melainkan masih menampung biner awal
memperbesar basis biner dari bit 1(awal) lalu bit 10(1*10) lalu bit 100(10*10) dan seterusnya
hasil(input/2) agar terupdate, jadi jika input 10 kan di bagi 2 = 5, maka 5 akan kembali ke while dan melakukan proses yang sama
sampai akhirnya hasil = 0
lalu print printf("Binernya Adalah= %d\n", biner); berguna untuk menampilkan data yang di tampung di variabel biner


  	case 2:
		printf("Masukkan Angka Biner= ");
		scanf("%d",&input);
		
		while (input != 0){ 		
		int sisa = input % 10;									
		deci = deci+sisa *bit;
		input /= 10;
		bit *= 2;
		}
		printf("Desimalnya Adalah= %d\n", deci);
		break;

di case 2, Program juga meminta user untuk memasukkan bilangan biner yang ingin di konversikan ke desimal
disini memakai loop yang dimana perulangan akan terus berjalan ketika nilai input tidak sama dengan 0
disini variabel sisa mengandung modulo inputan user dengan 10, dan deci sebagai penampung (desi + sisa * bit)
lalu program ini membagi input dengan 10 (/10) artinya menghilangkan 1 digit biner terakhir disetiap loopnya
pada awalnya bit = 1(iterasi pertama pakai 1), di bit *= 2
adalah untuk update bit saat iterasi ke 2 yakni 2, lalu 2*2 = 4, 
dan seterusnya, intinya ini digunakan untuk menghitung pangkat dari 2 yang sesuai dengan posisi digit biner
(karena setiap posisi digit dalam biner mewakili pangkat dari 2)
setelah semua digit sudah habis, sudah jadi 0 maka perulangan akan terhenti, karena tidak memenuhi kiriteria !=0


		case 3:
		printf("Masukkan Angka Desimal= ");
		scanf("%d",&input);
		while (input > 0){
		int sisa = input % 8;	
		int hasil = input /8;
		biner += sisa * bit;
		bit *= 10;
		input = hasil;
		
		}
		printf("Oktal Adalah= %d\n", biner);
		break;


sebenarnya case 3 ini sama dengan case 1, sama persis bedanya ketika case 1 memakai basis 2(biner) jadi %2 dan /2, 
maka jika oktal adalah basis 8 jadi ganti saja 2 dengan 8, kita masuk ke kodenya pada awalnya user diminta input
angka desimal yang ingin di konversikan ke oktal dan di simpan di variabel input
ketika input > 0 maka program terus berulang, jika input sudah menjadi 0 maka program akan break
disini membuat variabel int sisa, yang berisi sisa bagi antar input dengan 8(input %8), ini digunakan untuk mendapatkan digit oktal
lalu program mengurangi digit desimal dengan kode /8 yang di tampung oleh variabel hasil
lalu variabel biner digunakan untuk menampung dari sisa * bit
biner pada awal memiliki nilai 0 dan hasil sisa * bit
akan masuk dalam biner jadi nanti nilai biner adalah penjumlahan semua loop dari program, misal loop pertama adalah
sisa 2 * 1(bit awal), lalu loop 2, sisa 1 bit 10(sudah update) maka hasil biner adalah 10 + 2= 12
lalu update bilangan bit dengan mengalikan 10 intinya untuk menggeser bit dan input = hasil untuk memperbaharui input
artinya perulangan akan terjadi lagi tapi dengan nilai dari variabel hasil
dan printf untuk menampilkan data dari variabel biner ke layar

		
		case 4:
		printf("Masukkan Angka Oktal= ");
		scanf("%d",&input);
		
		while (input != 0){ 
		int sisa = input % 10;	
		deci = sisa *bit + deci;
		printf("sisa %d %d\n", sisa, deci);
		bit *= 8;
		input /= 10;
		}
		printf("Desimalnya Adalah= %d\n", deci);
		break;
	}

bisa dikatakan case 4 ini juga sama dengan case 2, while akan dimulai ketika input bukan nilai 0
int sisa digunakan untuk menampung input % 10
contoh jika input 20 maka sisa (0)  dan desi digunakan untuk menampung sisa * bit + desi jadi sisa(0)*1(awal bit) maka hasil 0, 
desi awal jadi 0, begitulah seterusnya sampai semua loop dilakukan sampai akhirnya desi menampung nilai akhir (desi + sisa * bit)
lalu program akan update nilai bit yang dimana nilai awal 1 maka dikali dengan 8 untuk update bit setiap loop artinya
menghitung pangkat dari 8 sesuai posisi oktal
dan input akan /10 untuk menghilangkan digit terakhir, program akan terus mengulang ketika input belum mencapai 0





Tugas 2, Tahun kabisat
- harus 4 angka, tidak boleh kurang dari 4 angka dan lebih dari 4 angka, jika kurang atau lebih program meminta input terus
menerus hingga 4 angka terpenuhi
-tidak boleh memakai huruf, jika input huruf maka akan meminta input ulang agar 4 angka terpenuhu

#include <stdio.h>
int check(int input){				
	int jumlah = 0;
	while(input != 0) {
		input /= 10;			
		jumlah++;				
	}
	return jumlah;	
}

int main(){
	int input;
	int huruf;
	do{
		printf("Masukkan Tahun: ");
		if(scanf("%d", &input)!=1){
			printf("Tahun Tidak Valid Silahkan Input Ulang\n");
			
		while((huruf = getchar()) != '\n');
		}
		
		else if(check(input)!= 4){	
		printf("Tahun Tidak Valid Silahkan Input Ulang\n");
		}
	}
	while(check(input) != 4); 
		if((input%4==0)&&(input%100!=0)||(input%400==0)){ 
	printf("%d Adalah Tahun Kabiset Bang\n", input);
		}
	else{
	printf("Kalau %d Mah Bukan Tahun Kabiset\n", input); 
		}

	return 0;
}


disini memakai function untuk ngecek apakah inputan 4 angka atau tidak

int check(int input){				
	int jumlah = 0;
	while(input != 0) {
		input /= 10;
		jumlah++;	
	}
	return jumlah;	
}

di kode ini kita ingin return jumlah yang dimana perulangan terjadi ketika input != 0
lalu input di bagi 10 untuk menghilangkan angka terakhir, contoh: 2024 / 10 = 202 artinya 4 hilang,
jadi loop akan terus berjalan hingga input habis = 0, selagi loop berulang maka jumlah++ menambah,
intinya di jumlah mengumpulkan jumlah semua data ada berapa menurut loop, bukan penjumlahan

int main(){
	int input;
	int huruf;
	do{
		printf("Masukkan Tahun: ");
		if(scanf("%d", &input)!=1){
			printf("Tahun Tidak Valid Silahkan Input Ulang\n");
			
		while((huruf = getchar()) != '\n');
		}

disini menggunakan do while, yang dimana program ngeprint dan meminta inputan user dulu lalu
ngecek kondisi, dan ketika kondisi salah, while bertugas untuk meminta inputan terus menerus agar
kondisi tersebut benar
memakai 2 variabel yakni, input untuk menerima inputan dan juga huruf, yakni untuk membersihkan
scanf atau buffer ketika inputan tidak sesuai yang diminta, artinya variabel adalah varial pembantu
untuk bisa menghapus buffer
disini dikatakan ketika "if(scanf("%d", &input)!=1){", jika input tidak sama dengan integer maka akan
jalankan kode printf("Tahun Tidak Valid Silahkan Input Ulang\n");
while((huruf = getchar()) != '\n'); disini artinya loop untuk membersihkan buffer masukkan,
yang berarti program akan membaca karakter dari masukkan menggunakan fungsi getchar()
sampai pada akhirnya karakter yang dibaca adalah newline( \n ), intinya ini merupakan kode untuk
membersihkan karakter yang tidak valid atau bukan inputan yang kita inginkan yang input oleh user

else if(check(input)!= 4){	
		printf("Tahun Tidak Valid Silahkan Input Ulang\n");
		}
	}
	while(check(input) != 4)

dikode ini inputan di cek yang dimana inputan ini adalah hasil return dari function,
kan function dipanggil (check(input), jika tidak sama dengan 4 maka dia eksekusi
printf("Tahun Tidak Valid Silahkan Input Ulang\n");
dan while di akhir kode diatas untuk terus meminta kembali inputan jika tidak sama dengan 4 angka,
agar syarat inputan tersebut terpenuhi


if((input%4==0)&&(input%100!=0)||(input%400==0)){ 
	printf("%d Adalah Tahun Kabiset Bang\n", input);
		}
	else{
	printf("Kalau %d Mah Bukan Tahun Kabiset\n", input); 
		}

ketika 4 angka terpenuhi maka program akan menjalankan kode inti dari program ini
yakni formula dari tahun kabisat, ketika input merupakan bilangan yang habis di bagi 4 dan tidak habis
di bagi 100 atau habis dibagi 400 jika kondisi terpenuhi maka akan print ini
	(%d Adalah Tahun Kabiset Bang), %d membawa data variabel input(tahun yang diinput oleh user)
jika formula tersebut tidak terpenuhi, maka akan menampilkan
(Kalau %d Mah Bukan Tahun Kabiset) %d membawa data variabel input(tahun yang diinput oleh user)