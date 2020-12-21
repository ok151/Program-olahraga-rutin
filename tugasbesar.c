#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int umur, bb, tb, jk, l, p, ol, op, pp, pw, sp, sw, prp, prw gender;
float bmi_l, bmi_p, bmr_p, bmr_l;
char nama[15];
void waktu();
void menu1();//Menu Pengisian Identitas
void menu2();//Menu Pemilihan Gender
void menu3();//Menu Pemilihan Program Pria
void menu4();//Menu Pemilihan Program Wanita
void menu5();//Program Berat Badan Ideal Pria
void menu6();//Program Berat Badan Ideal Wanita
void menu7();//Program Menaikan Berat Badan Ideal Pria
void menu8();//Program Menurunkan Berat Badan Ideal Pria
void menu9();//Program Menaikan Berat Badan Ideal Wanita
void menu10();//Program Menurunkan Berat Badan Ideal Wanita
void menu11();//Program Membentuk Otot Pria
void menu12();//Program Membentuk Otot Wanita
void menu13();//Program Latihan Pemula Pria
void menu14();//Program Latian Sedang Pria
void menu15();//Program Latian Profesional Pria
void menu16();//Program Latian Pemula Lengan
void menu17();//Program Latian Pemula Dada
void menu18();//Program Latian Pemula Perut
void menu19();//Program Latian Pemula Kaki
void menu20();//Program Latian Sedang Lengan
void menu21();//Program Latian Sedang Dada
void menu22();//Program Latian Sedang Perut
void menu23();//Program Latian Sedang Kaki
void menu24();//Program Latian Profesional Lengan
void menu25();//Program Latian Profesional Dada
void menu26();//Program Latian Profesional Perut
void menu27();//Program Latian Profesional Kaki


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
        menu2();
	}
}
void menu3(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &l);
	if(l==1){
        system("cls");
        menu5();
	}
	else if (l==2){
        system("cls");
        menu11();
	}
	else{
	    puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        menu3();
	}
}
void menu4(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
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
        menu4();
	}
}
void menu5(){
    bmi_l = (tb-100)-((tb-100)*0.1);
    printf("Berat Badan Ideal Anda Adalah %f KG\n", bmi_l);
    if(bb < bmi_l){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu7();
    }
    else if(bb = bmi_l){
        printf("Berat Badan Anda Tergolong Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb > bmi_l){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu8();
    }
}
void menu6(){
    bmi_l = (tb-100)-((tb-100)*0.15);
    printf("Berat Badan Ideal Anda Adalah %f KG", bmi_p);
    if(bb < bmi_p){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu9();
    }
    else if(bb = bmi_p){
        printf("Berat Badan Anda Tergolong Ideal");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb > bmi_p){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu10();
    }
}
void menu7(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf("1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu8(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
void menu9(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf(" 1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu10(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
void menu11(){
    puts("===============================================");
    printf("|\t Program Membentuk Massa Otot Pria |\n");
    puts("===============================================");
    printf("Memilih Tingkat Kesulitan \n");
    printf("1. Tingkat Pemula\n");
    printf("2. Tingkat Sedang\n");
    printf("3. Tingkat Profesional\n");
    printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
    scanf("%d", &ol);
    if(ol==1){
        system("cls");
        menu13();
    }
    else if(ol==2){
        system("cls");
        menu20();
    }
    else if(ol==3){
        system("cls");
        menu25();
    }
}
void menu13(){
    puts("==================================================");
    printf("|\t Latihan Pemula Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
    scanf("%d", &pp);
    if(pp==1){
        system("cls");
        menu16();
    }
    else if(pp==2){
        system("cls");
        menu17();
    }
    else if(pp==3){
        system("cls");
        menu18();
    }
    else if(pp==4){
        system("cls");
        menu19();
    }
}
void menu14(){
    puts("+==================================================+");
    printf("|\t Latihan sedang Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &sp);
    if(sp==1){
        system("cls");
        menu20();
    }
    else if(sp==2){
        system("cls");
        menu21();
    }
    else if(sp==3){
        system("cls");
        menu22();
    }
    else if(sp==4){
        system("cls");
        menu23();
    }
}
void menu15(){
    puts("+==================================================+");
    printf("|\t Latihan profesional Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &prp);
	if(prp==1){
        system("cls");
        menu24();
    }
    else if(prp==2){
        system("cls");
        menu25();
    }
    else if(prp==3){
        system("cls");
        menu26();
    }
    else if(prp==4){
        system("cls");
        menu27();
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int umur, bb, tb, jk, l, p, ol, op, pp, pw, sp, sw, prp, prw gender;
float bmi_l, bmi_p, bmr_p, bmr_l;
char nama[15];
void waktu();
void menu1();//Menu Pengisian Identitas
void menu2();//Menu Pemilihan Gender
void menu3();//Menu Pemilihan Program Pria
void menu4();//Menu Pemilihan Program Wanita
void menu5();//Program Berat Badan Ideal Pria
void menu6();//Program Berat Badan Ideal Wanita
void menu7();//Program Menaikan Berat Badan Ideal Pria
void menu8();//Program Menurunkan Berat Badan Ideal Pria
void menu9();//Program Menaikan Berat Badan Ideal Wanita
void menu10();//Program Menurunkan Berat Badan Ideal Wanita
void menu11();//Program Membentuk Otot Pria
void menu12();//Program Membentuk Otot Wanita
void menu13();//Program Latihan Pemula Pria
void menu14();//Program Latian Sedang Pria
void menu15();//Program Latian Profesional Pria
void menu16();//Program Latian Pemula Lengan
void menu17();//Program Latian Pemula Dada
void menu18();//Program Latian Pemula Perut
void menu19();//Program Latian Pemula Kaki
void menu20();//Program Latian Sedang Lengan
void menu21();//Program Latian Sedang Dada
void menu22();//Program Latian Sedang Perut
void menu23();//Program Latian Sedang Kaki
void menu24();//Program Latian Profesional Lengan
void menu25();//Program Latian Profesional Dada
void menu26();//Program Latian Profesional Perut
void menu27();//Program Latian Profesional Kaki


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
        menu2();
	}
}
void menu3(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &l);
	if(l==1){
        system("cls");
        menu5();
	}
	else if (l==2){
        system("cls");
        menu11();
	}
	else{
	    puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        menu3();
	}
}
void menu4(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
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
        menu4();
	}
}
void menu5(){
    bmi_l = (tb-100)-((tb-100)*0.1);
    printf("Berat Badan Ideal Anda Adalah %f KG\n", bmi_l);
    if(bb < bmi_l){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu7();
    }
    else if(bb = bmi_l){
        printf("Berat Badan Anda Tergolong Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb > bmi_l){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu8();
    }
}
void menu6(){
    bmi_l = (tb-100)-((tb-100)*0.15);
    printf("Berat Badan Ideal Anda Adalah %f KG", bmi_p);
    if(bb < bmi_p){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu9();
    }
    else if(bb = bmi_p){
        printf("Berat Badan Anda Tergolong Ideal");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu4();
    }
    else if(bb > bmi_p){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu10();
    }
}
void menu7(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf("1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu8(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
void menu9(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf(" 1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu10(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
void menu11(){
    puts("===============================================");
    printf("|\t Program Membentuk Massa Otot Pria |\n");
    puts("===============================================");
    printf("Memilih Tingkat Kesulitan \n");
    printf("1. Tingkat Pemula\n");
    printf("2. Tingkat Sedang\n");
    printf("3. Tingkat Profesional\n");
    printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
    scanf("%d", &ol);
    if(ol==1){
        system("cls");
        menu13();
    }
    else if(ol==2){
        system("cls");
        menu20();
    }
    else if(ol==3){
        system("cls");
        menu25();
    }
}
void menu13(){
    puts("==================================================");
    printf("|\t Latihan Pemula Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
    scanf("%d", &pp);
    if(pp==1){
        system("cls");
        menu16();
    }
    else if(pp==2){
        system("cls");
        menu17();
    }
    else if(pp==3){
        system("cls");
        menu18();
    }
    else if(pp==4){
        system("cls");
        menu19();
    }
}
void menu14(){
    puts("+==================================================+");
    printf("|\t Latihan sedang Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &sp);
    if(sp==1){
        system("cls");
        menu20();
    }
    else if(sp==2){
        system("cls");
        menu21();
    }
    else if(sp==3){
        system("cls");
        menu22();
    }
    else if(sp==4){
        system("cls");
        menu23();
    }
}
void menu15(){
    puts("+==================================================+");
    printf("|\t Latihan profesional Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &prp);
	if(prp==1){
        system("cls");
        menu24();
    }
    else if(prp==2){
        system("cls");
        menu25();
    }
    else if(prp==3){
        system("cls");
        menu26();
    }
    else if(prp==4){
        system("cls");
        menu27();
    }
}
