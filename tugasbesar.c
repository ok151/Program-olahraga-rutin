#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

char login(char user[15], char pass[15]){
	if(strcmp(user,"dede")==0&&strcmp(pass,"123")==0 || strcmp(user,"dimas")==0&&strcmp(pass,"123")==0 || strcmp(user,"tri")==0&&strcmp(pass,"123")==0){
		puts("=========================================");
		printf("\t     Akses Diterima\n");
		puts("=========================================");
		printf("\nSelamat datang %s\n\n", user);
		system("pause > 0 | echo Klik Enter Untuk Melanjutkan Ke Menu");
		system("cls");
	}
	else{
		printf("\nUsername atau Password yang anda masukan salah!\n");
		system("pause > 0 | echo Klik enter untuk keluar");
		exit(0);
	}
}

 void waktu_default(){
	int tanggal, bulan, tahun, jam, menit;
	struct tm *sys_t; //time, system time

    time_t wdef; //waktu default
    wdef = time(0);
    sys_t = localtime(&wdef);

    tanggal = sys_t->tm_mday;
    bulan = sys_t->tm_mon+1; /* Ditambah 1 karena Januari dimulai dari 0 */
	tahun = 1900+sys_t->tm_year; /* Ditambah 1900, karena tahun dimulai dari 1900 */
	jam = sys_t->tm_hour;
	menit = sys_t->tm_min;
	printf("Tanggal			: %d-%d-%d\n", tanggal, bulan, tahun);
	printf("Pukul			: %d:%.2d\n", jam, menit);
}

int main(){
	waktu_default();
	char user[15], pass[15];
	puts("+-----------------------------------------------------------+");
	printf("|\t    Perhitungan Olahraga Rutin Sederhana		|\n");
	puts("+-----------------------------------------------------------+");
	printf("Masukan Username	: ");
	scanf("%s", &user);
	printf("Masukan Password	: ");
	scanf("%s", &pass);

	login(user, pass);

	char nama[30];
	float umur, berat_badan, tinggi_badan;
	int gender, p;
	puts("+--------------------------------------------+");
	printf("|\t    Identitas Pengguna       |\n");
	puts("+--------------------------------------------+");
	printf("Masukan Nama		: ");
	scanf("%s", &nama);
	printf("Masukan Umur		: ");
	scanf("%f", &umur);
	printf("Masukan Berat Badan     : ");
	scanf("%f", &berat_badan);
	printf("Masukan Tinggi Badan    : ");
	scanf("%f", &tinggi_badan);
	puts("+--------------------------------------------+");
	printf("|\t    Pilih Gender             |\n");
	puts("+--------------------------------------------+");
	printf("1. Laki-Laki \n");
	printf("2. Perempuan \n");
	printf("Masukan Pilihan 1 Atau 2 Untuk Memilih Gender  : ");
	scanf("%d", &gender);
	if(gender!=1 && gender!=2)
        printf("Input Yang Anda Masukan Salah");
    while(gender!=1 && gender!=2);

    switch(gender)
case 1 :
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &p);

	system("cls");
}
