#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int umur, bb, tb, jk, l, p, ol, op, pl, pp, sl, sp, prl, prp, gender;
float bmi_l, bmi_p, bmr_p, bmr_l;
char nama[15];
void menu1();//Menu Pengisian Identitas
void menu2();//Menu Pemilihan Gender
void menu3();//Menu Pemilihan Program Pria
void menu4();//
void menu5();//
void menu6();//
void menu7();//
void menu8();//
void menu9();//
void menu10();
void menu11();
void menu12();
void menu13();
void menu14();
void menu15();
void menu16();
void menu17();
void menu18();
void menu19();
void menu20();
void menu21();
void menu22();
void menu23();
void menu24();
void menu25();
void menu26();
void menu27();
void menu28();
void menu29();
void menu30();
void menu31();
void menu32();
void menu33();
void menu34();
void menu35();
void menu36();
void menu37();
void menu38();
void menu39();
void menu40();
void menu41();
void menu42();
void menu43();
void menu44();
void menu45();
void menu46();

char login(char user[15], char pass[15]){
	if(strcmp(user,"DEDE")==0&&strcmp(pass,"123")==0 || strcmp(user,"DIMAS")==0&&strcmp(pass,"123")==0 || strcmp(user,"TRI")==0&&strcmp(pass,"123")==0){
		printf("\n\n                                                  AKSES DITERIMA");
		system("pause > 0");
		printf("\n                                     |========================================|");
		printf("\n                                     |          SELAMAT DATANG %s           |", user);
		printf("\n                                     |========================================|\n\n");
		system("pause > 0 | echo                             Klik Enter Untuk Melanjutkan Ke Menu Pengisian Identitas");
		system("cls");
	}
	else{
		printf("\n                                    Username atau Password Yang Anda Masukan Salah!\n");
		system("pause > 0 | echo                                             Klik enter untuk Mengulangi");
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
	printf("                                     Tanggal: %d-%d-%d ||", tanggal, bulan, tahun); printf("  Pukul: %d:%.2d\n", jam, menit);
}

int main(){
    waktu_default();
	char user[15], pass[15];
	puts("                          |-----------------------------------------------------------|");
	printf("                          |    \t    Perhitungan Olahraga Rutin Sederhana	      |\n");
	puts("                          |-----------------------------------------------------------|");
	printf("                                           Masukan Username	: ");
	scanf("%s", &user);
	printf("                                           Masukan Password	: ");
	scanf("%s", &pass);

    login(user, pass);
    menu1();
}
void menu1(){
Identitas:
    puts("                                      |--------------------------------------------|");
	printf("                                      |             Identitas Pengguna             |\n");
	puts("                                      |--------------------------------------------|");
	printf("                                         Masukan Nama	        : ");
	scanf("%s", &nama);
	printf("                                         Masukan Umur	        : ");
	scanf("%d", &umur);
	printf("                                         Berat Badan Dalam Kg   : ");
	scanf("%d", &bb);
	printf("                                         Tinggi Badan Dalam Cm  : ");
	scanf("%d", &tb);
	system("cls");
	menu2();
}
void menu2(){
Gender:
    puts("+--------------------------------------------+");
	printf("\t|        Pilih Gender          |\n");
	puts("+--------------------------------------------+");
	printf("\t   1. Laki-Laki  \n");
	printf("\t   2. Perempuan  \n\n");
	printf("Masukan Pilihan 1 Atau 2 Untuk Memilih Gender  : ");
	scanf("%d", &gender);
	if(gender==1){
        system("cls");
        menu3();
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
//Program Untuk Laki
void menu3(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga Laki      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &l);
	if(l==1){
        system("cls");
        menu4();
	}
	else if (l==2){
        system("cls");
        menu7();
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
//BERAT BADAN IDEAL Laki
void menu4(){
    bmi_l = (tb-100)-((tb-100)*0.1);
    printf("Berat Badan Ideal Anda Adalah %f KG\n", bmi_l);
    if(bb < bmi_l){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu5();
    }
    else if(bb == bmi_l){
        printf("Berat Badan Anda Tergolong Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
        system("cls");
		menu3();
    }
    else if(bmi_l < bb){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu6();
    }
}
void menu5(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf("1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu6(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
//MEMBENTUK OTOT Laki
void menu7(){
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
        menu8();
    }
    else if(ol==2){
        system("cls");
        menu9();
    }
    else if(ol==3){
        system("cls");
        menu10();
    }
}
void menu8(){
    puts("==================================================");
    printf("|\t Latihan Pemula Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
    scanf("%d", &pl);
    if(pl==1){
        system("cls");
        menu11();
    }
    else if(pl==2){
        system("cls");
        menu12();
    }
    else if(pl==3){
        system("cls");
        menu13();
    }
    else if(pl==4){
        system("cls");
        menu14();
    }
}
void menu9(){
    puts("+==================================================+");
    printf("|\t Latihan sedang Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &sl);
    if(sl==1){
        system("cls");
        menu15();
    }
    else if(sl==2){
        system("cls");
        menu16();
    }
    else if(sl==3){
        system("cls");
        menu17();
    }
    else if(sl==4){
        system("cls");
        menu18();
    }
}
void menu10(){
    puts("+==================================================+");
    printf("|\t Latihan profesional Untuk Laki-Laki\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &prl);
	if(prl==1){
        system("cls");
        menu19();
    }
    else if(prl==2){
        system("cls");
        menu20();
    }
    else if(prl==3){
        system("cls");
        menu21();
    }
    else if(prl==4){
        system("cls");
        menu22();
    }
}
void menu11(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set push up dengan 1 setnya berisi 10 repetisi\n ");
    printf("2. 3-set trisep dengan 1 setnya berisi 10 repetisi\n ");
    printf("3. 3-set chin up dengan 1 setnya berisi 10 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu12(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set chair dips dengan 1 setnya berisi 10 repetisi\n");
    printf("2. 3-set plank dengan 1 setnya dilakukan dengan waktu 45 detik\n");
    printf("3. 3-set rotation push up dengan 1 setnya berisi 10 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu13(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set sit up dengan 1 setnya berisi 10 repetisi\n");
    printf("2. 3-set plank dengan 1 setnya dilakukan dengan 45 detik\n");
    printf("3. 3-set push up roket dengan 1 setnya berisi 10 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu14(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set squats dengan 1 setnya berisi 10 repetisi");
    printf("2. 3-set side lunges dengan 1 setnya dilakukan dengan 45 detik\n");
    printf("3. 3-set jinjit kaki dengan 1 setnya berisi 10 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu15(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan Sedang\n");
    puts("+==================================================+");
    printf("1. 3-set push up dengan 1 setnya berisi 15 repetisi\n ");
    printf("2. 3-set trisep dengan 1 setnya berisi 15 repetisi\n ");
    printf("3. 3-set chin up dengan 1 setnya berisi 15 repetisi\n");
    printf("4. 3-set Gerakan bench dips dengan 1 setnya berisi 15 repetisi ");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu16(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada Sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set chair dips dengan 1 setnya berisi 15 repetisi\n");
    printf("2. 5-set plank dengan 1 setnya dilakukan dengan waktu 1 menit\n");
    printf("3. 5-set rotation push up dengan 1 setnya berisi 15 repetisi\n");
    printf("4. 5-set archer push up dengan 1 setnya berisi 15 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu17(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set sit up dengan 1 setnya berisi 15 repetisi\n");
    printf("2. 5-set plank dengan 1 setnya dilakukan dengan 1 menit\n");
    printf("3. 5-set push up roket dengan 1 setnya berisi 15 repetisi\n");
    printf("4. 5-set crunch, dengan 1 setnya berisi 15 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu18(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set squats dengan 1 setnya berisi 15 repetisi");
    printf("2. 5-set side lunges dengan 1 setnya berisi 15 repetisi");
    printf("3. 5-set jinjit kaki dengan 1 setnya berisi 15 repetisi");
    printf("4. 5-set sumo squats dengan 1 setnya berisi 15 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu19(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan profesional\n");
    puts("+==================================================+");
    printf("1. 7-set push up dengan 1 setnya berisi 18 repetisi\n ");
    printf("2. 7-set trisep dengan 1 setnya berisi 18 repetisi\n ");
    printf("3. 7-set chin up dengan 1 setnya berisi 18 repetisi\n");
    printf("4. 7-set bench dips dengan 1 setnya berisi 18 repetisi");
    printf("5. 7-set dumbell dengan 1 setnya berisi 18 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu20(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada profesional\n");
    puts("+==================================================+");
    printf("1. 7-set chair dips dengan 1 setnya berisi 18 repetisi\n");
    printf("2. 7-set plank dengan 1 setnya dilakukan dengan waktu 1 menit 30 detik\n");
    printf("3. 7-set rotation push up dengan 1 setnya berisi 18 repetisi\n");
    printf("4. 7-set archer push up dengan 1 setnya berisi 18 repetisi");
    printf("5. 7-set diamond push up dengan 1 setnya berisi 18 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu21(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Profesional\n");
    puts("+==================================================+");
    printf("1. 7-set sit up dengan 1 setnya berisi 18 repetisi\n");
    printf("2. 7-set plank dengan 1 setnya dilakukan dengan 1 menit 30 detik\n");
    printf("3. 7-set push up roket dengan 1 setnya berisi 18 repetisi\n");
    printf("4. 7-set crunch dengan 1 setnya berisi 18 repetisi");
    printf("5. 7-set montain climb dengan 1 setnya berisi 18 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu22(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki profesional\n");
    puts("+==================================================+");
    printf("1. 7-set squats dengan 1 setnya berisi 18 repetisi");
    printf("2. 7-set side lunges dengan 1 setnya berisi 18 repetisi");
    printf("3. 7-set jinjit kaki dengan 1 setnya berisi 18 repetisi");
    printf("4. 7-set sumo squats dengan 1 setnya berisi 18 repetisi");
    printf("5. 7-set barbel squats dengan 1 setnya berisi 18 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
//Program Untuk Perempuan
void menu23(){
    puts("+--------------------------------------------+");
	printf("|\t    Pilihan Program Olahraga      |\n");
	puts("+--------------------------------------------+");
	printf("1. Program Berat Badan Ideal \n");
	printf("2. Program Membentuk Otot \n");
	printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
	scanf("%d", &p);
	if(p==1){
        system("cls");
        menu24();
	}
	else if (p==2){
        system("cls");
        menu7();
	}
	else{
	    puts("===============================================");
		printf("\t Input Yang Anda Masukan Salah!\n");
		puts("===============================================");
        system("pause > 0 | echo Klik ENTER Untuk Mengulangi");
        system("cls");
        menu23();
	}
}
//BERAT BADAN IDEAL Perempuan
void menu24(){
    bmi_l = (tb-100)-((tb-100)*0.15);
    printf("Berat Badan Ideal Anda Adalah %f KG", bmi_p);
    if(bb < bmi_p){
        printf("Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menaikan Berat Badan\n");
        system("cls");
        menu25();
    }
    else if(bb == bmi_p){
        printf("Berat Badan Anda Tergolong Ideal");
        system("pause > 0 | echo Klik ENTER Untuk Kembali Ke Menu Pemilihan Program\n");
		system("cls");
		menu23();
    }
    else if(bb > bmi_p){
        printf("Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal\n");
        system("pause > 0 | echo Klik ENTER Untuk Melanjutkan Ke Menu Program Menurunkan Berat Badan\n");
        system("cls");
        menu26();
    }
}
void menu25(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menaikan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menaikan Berat Badan : \n");
	printf(" 1.Tingkatkan Porsi Makan Dan Intensitas Makan\n 2.Makan-Makanan Bergizi Dan Nurtisi\n 3.Konsumsi Jus Dan Smoothies\n 4.Perbanyak Konsumsi Susu\n 5.Kurangi Olahraga Kardio\n 6.Perbanyak Minum Air Putih");
}
void menu26(){
    puts("+--------------------------------------------+");
	printf("|\t    Program Menurunkan Berat Badan      |\n");
	puts("+--------------------------------------------+");
	printf("Berikut Adalah Daftar Yang Harus Kalian Lakukan Jika Ingin Menurunkan Berat Badan : \n");
	printf(" 1.Minum Air Sebelum Makan\n 2.Rajin Olahraga Kardio\n 3.Tidur Yang Cukup\n 4.Makan Secara Perlahan\n 5.Membatasi Asupan Gula\n 6.Perbanyak Konsumsi Serat");
}
//PROGRAM OTOT Perempuan
void menu27(){
    puts("===============================================");
    printf("|\t Program Membentuk Massa Otot Perempuan |\n");
    puts("===============================================");
    printf("Memilih Tingkat Kesulitan \n");
    printf("1. Tingkat Pemula\n");
    printf("2. Tingkat Sedang\n");
    printf("3. Tingkat Profesional\n");
    printf("Masukan Pilihan Program Yang Akan Dipilih  : ");
    scanf("%d", &ol);
    if(op==1){
        system("cls");
        menu28();
    }
    else if(op==2){
        system("cls");
        menu29();
    }
    else if(op==3){
        system("cls");
        menu30();
    }
}
void menu28(){
    puts("==================================================");
    printf("|\t Latihan Pemula Untuk Perempuan\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
    scanf("%d", &pl);
    if(pp==1){
        system("cls");
        menu31();
    }
    else if(pp==2){
        system("cls");
        menu32();
    }
    else if(pp==3){
        system("cls");
        menu33();
    }
    else if(pp==4){
        system("cls");
        menu34();
    }
}
void menu29(){
    puts("+==================================================+");
    printf("|\t Latihan sedang Untuk Perempuan\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &sl);
    if(sp==1){
        system("cls");
        menu35();
    }
    else if(sp==2){
        system("cls");
        menu36();
    }
    else if(sp==3){
        system("cls");
        menu37();
    }
    else if(sp==4){
        system("cls");
        menu38();
    }
}
void menu30(){
    puts("+==================================================+");
    printf("|\t Latihan profesional Untuk Perempuan\n|");
    puts("==================================================");
    printf("1. Latihan Otot Lengan\n");
    printf("2. Latihan Otot Dada\n");
    printf("3. Latihan Otot Perut\n");
    printf("4. Latihan Otot Kaki\n");
    printf("Masukan Pilihan Latihan Yang Akan Dipilih  : ");
	scanf("%d", &prp);
	if(prp==1){
        system("cls");
        menu39();
    }
    else if(prp==2){
        system("cls");
        menu40();
    }
    else if(prp==3){
        system("cls");
        menu41();
    }
    else if(prp==4){
        system("cls");
        menu42();
    }
}
void menu31(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set push up wanita dengan 1 setnya berisi 5 repetisi\n ");
    printf("2. 3-set trisep dengan 1 setnya berisi 5 repetisi\n ");
    printf("3. 3-set chin up dengan 1 setnya berisi 5 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu32(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set chair dips dengan 1 setnya berisi 5 repetisi\n");
    printf("2. 3-set plank dengan 1 setnya selama 30 detik\n");
    printf("3. 3-set rotation push up dengan 1 setnya berisi 5 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu33(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set sit up dengan 1 setnya berisi 5 repetisi\n");
    printf("2. 3-set plank dengan 1 setnya 30 detik\n");
    printf("3. 3-set push up rocket dengan 1 setnya berisi 5 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu34(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki Pemula\n|");
    puts("+==================================================+");
    printf("1. 3-set squats dengan 1 setnya berisi 5 repetisi");
    printf("2. 3-set side lunges dengan 1 setnya berisi 5 repetisi\n");
    printf("3. 3-set jinjit kaki dengan 1 setnya berisi 5 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu35(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan Sedang\n");
    puts("+==================================================+");
    printf("1. 5-set push up wanita dengan 1 setnya berisi 8 repetisi\n ");
    printf("2. 5-set trisep dengan 1 setnya berisi 8 repetisi\n ");
    printf("3. 5-set chin up dengan 1 setnya berisi 8 repetisi\n");
    printf("4. 5-set Gerakan bench dips dengan 1 setnya berisi 8 repetisi ");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu36(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada Sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set chair dips dengan 1 setnya berisi 8 repetisi\n");
    printf("2. 5-set plank dengan 1 setnya selama 45 detik\n");
    printf("3. 5-set rotation push up dengan 1 setnya berisi 8 repetisi\n");
    printf("4. 5-set archer push up dengan 1 setnya berisi 8 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu37(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set sit up dengan 1 setnya berisi 8 repetisi\n");
    printf("2. 5-set plank dengan 1 setnya selama 45 detik\n");
    printf("3. 5-set push up rocket dengan 1 setnya berisi 8 repetisi\n");
    printf("4. 5-set crunch dengan 1 setnya berisi 8 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu38(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki sedang\n|");
    puts("+==================================================+");
    printf("1. 5-set squats dengan 1 setnya berisi 8 repetisi");
    printf("2. 5-set side lunges dengan 1 setnya berisi 8 repetisi");
    printf("3. 5-set jinjit kaki dengan 1 setnya berisi 8 repetisi");
    printf("4. 5-set sumo squats dengan 1 setnya berisi 8 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu39(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Lengan profesional\n");
    puts("+==================================================+");
    printf("1. 7-set push up wanita dengan 1 setnya berisi 10 repetisi\n ");
    printf("2. 7-set trisep dengan 1 setnya berisi 10 repetisi\n ");
    printf("3. 7-set chin up dengan 1 setnya berisi 10 repetisi\n");
    printf("4. 7-set Gerakan bench dips dengan 1 setnya berisi 10 repetisi");
    printf("5. 7-set dumbbell dengan 1 setnya berisi 10 repetisi.");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu40(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Dada profesional\n");
    puts("+==================================================+");
    printf("1. 7-set chair dips dengan 1 setnya berisi 10 repetisi\n");
    printf("2. 7-set plank dengan 1 setnya selama 1 menit, \n");
    printf("3. 7-set rotation push up dengan 1 setnya berisi 10 repetisi\n");
    printf("4. 7-set archer push up dengan 1 setnya berisi 10 repetisi");
    printf("5. 7-set diamond push up dengan 1 setnya berisi 10 repetisi");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu41(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Perut Profesional\n");
    puts("+==================================================+");
    printf("1. 7-set sit up dengan 1 setnya berisi 10 repetisi\n");
    printf("2. 7-set plank dengan 1 setnya 1 menit\n");
    printf("3. 7-set push up rocket dengan 1 setnya berisi 10 repetisi\n");
    printf("4. 7-set crunch dengna 1 setnya berisi 10 repetisi, ");
    printf("5. 7-set montain climb dengan 1 setnya berisi 10 repetisi,");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}
void menu42(){
    puts("+==================================================+");
    printf("|\t Melatih Otot Kaki profesional\n");
    puts("+==================================================+");
    printf("1. 7-set squats dengan 1 setnya berisi 10 repetisi\n");
    printf("2. 7-set side lunges dengan 1 setnya berisi 10 repetisi\n");
    printf("3. 7-set jinjit kaki dengan 1 setnya berisi 10 repetisi\n");
    printf("4. 7-set sumo squats dengan 1 setnya berisi 10 repetisi\n");
    printf("5. 7-set barbel squats dengan 1 setnya berisi 10 repetisi\n");
    printf("pesan : istirahat perepetisi diberikan waktu 30 detik dan istirahat pergerakkan diberikan waktu hanya 1 menit\n");
    printf("latihan ini dilakukan dengan rutin setiap harinya di pagi atau sore hari:)\n");
    system("pause > 0 | echo Klik ENTER Untuk selesai");
    system("cls");
}

