#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int umur, bb, tb, jk, l, p, gender;
float bmi_l, bmi_p;
char nama[15];
void waktu();
void menu1();//Menu Pengisian Identitas
void menu2();//Menu Pemilihan Gender
void menu3();//Menu Pemilihan Program Pria
void menu4();//Menu Pemilihan Program Wanita
void menu5();//Program Berat Badan Ideal Pria
void menu6();//Program Berat Badan Ideal Wanita

char login(char user[15], char pass[15]){
	if(strcmp(user,"dede")==0&&strcmp(pass,"123")==0 || strcmp(user,"dimas")==0&&strcmp(pass,"123")==0 || strcmp(user,"tri")==0&&strcmp(pass,"123")==0){
		puts("=========================================");
		printf("\t     Akses Diterima\n");
		puts("=========================================");
		printf("\nSelamat datang %s\n\n", user);
		system("pause > 0 | echo Klik Enter Untuk Melanjutkan Ke Menu Pengisian Identitas");
		system("cls");
	}
	else{
		printf("\nUsername atau Password Yang Anda Masukan Salah!\n");
		system("pause > 0 | echo Klik enter untuk Mengulangi");
		system("cls");
		main();
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
void waktu();
	char user[15], pass[15];
	puts("+-----------------------------------------------------------+");
	printf("|\t    Perhitungan Olahraga Rutin Sederhana	    |\n");
	puts("+-----------------------------------------------------------+");
	printf("Masukan Username	: ");
	scanf("%s", &user);
	printf("Masukan Password	: ");
	scanf("%s", &pass);

    login(user, pass);
    menu1();
}
void menu1(){
Identitas:
    puts("+--------------------------------------------+");
	printf("\t|    Identitas Pengguna       |\n");
	puts("+--------------------------------------------+");
	printf("Masukan Nama		\t: ");
	scanf("%s", &nama);
	printf("Masukan Umur		\t: ");
	scanf("%d", &umur);
	printf("Masukan Berat Badan Dalam Kg    : ");
	scanf("%d", &bb);
	printf("Masukan Tinggi Badan Dalam Cm   : ");
	scanf("%d", &tb);
	system("cls");
	menu2();
}
void menu2(){
Gender:
    puts("+--------------------------------------------+");
	printf("\t|        Pilih Gender          |\n");
	puts("+--------------------------------------------+");
	printf("\t   === 1. Laki-Laki === \n");
	printf("\t   === 2. Perempuan === \n\n");
	printf("Masukan Pilihan 1 Atau 2 Untuk Memilih Gender  : ");
	scanf("%d", &gender);
	if(gender==1){
        system("cls");
        menu3();
	}
	else if(gender==2){
	    system("cls");
        menu4();
	}
	else{
        puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        main();
	}
}
void menu3(){
 puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("3. Program Menaikan Tinggi Badan \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &l);
	if(l==1){
        system("cls");
        menu5();
	}
	else{
	    puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        main();
	}
}
void menu4(){
 puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("3. Program Menaikan Tinggi Badan \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &p);
	if(p==1){
        system("cls");
        menu6();
	}
	else{
	    puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        main();
	}
}
void menu5(){
    bmi_l = (tb-100)-((tb-100)*0.1);
    printf("Berat Badan Ideal Anda Adalah %f KG\n", bmi_l);
    if(bb<bmi_l){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
    }
    else if(bb=bmi_l){
        printf("Berat Badan Anda Tergolong Ideal");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb>bmi_l){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
    }
    else{
        puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        main();
    }
}
void menu6(){
    bmi_l = (tb-100)-((tb-100)*0.15);
    printf("Berat Badan Ideal Anda Adalah %f KG", bmi_p);
    if(bb<bmi_p){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
    }
    else if(bb=bmi_p){
        printf("Berat Badan Anda Tergolong Ideal");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb>bmi_p){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
    }
    else{
        puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        main();
}
}

