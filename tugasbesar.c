#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int umur, bb, tb, jk, l, p, ol, op, pl, pp, sl, sp, prl, prp, gender, r;
float bmi_l, bmi_p;
char nama[15];
void menu1();//Menu Pengisian Identitas
void menu2();//Menu Pemilihan Gender
void menu3();//Menu Pemilihan Program Laki
void menu4();//Perhitungan Berat Badan Ideal Laki
void menu5();//Program Menaikan Berat Badan Ideal Laki
void menu6();//Program Menurunkan Berat Badan Ideal Laki
void menu7();//Program Membentuk Otot Laki
void menu8();//Program Latihan Pemula Laki
void menu9();//Program Latihan Sedang Laki
void menu10();//Program Latihan Profesional Laki
void menu11();//Program Latihan Pemula Lengan Laki
void menu12();//Program Latihan Pemula Dada Laki
void menu13();//Program Latihan Pemula Perut Laki
void menu14();//Program Latihan Pemula Kaki Laki
void menu15();//Program Latihan Sedang Lengan Laki
void menu16();//Program Latihan Sedang Dada Laki
void menu17();//Program Latihan Sedang Perut Laki
void menu18();//Program Latihan Sedang Kaki Laki
void menu19();//Program Latihan Profesional Lengan Laki
void menu20();//Program Latihan Profesional Dada laki
void menu21();//Program Latihan Profesional Perut Laki
void menu22();//Program Latihan Profesional Kaki Laki
void menu23();//Menu Pemilihan Program Perempuan
void menu24();//Perhitungan Berat Badan Ideal Perempuan
void menu25();//Program Menaikan Berat Badan Ideal Perempuan
void menu26();//Program Menurunkan Berat Badan Ideal Perempuan
void menu27();//Program Membentuk Otot Perempuan
void menu28();//Program Latihan Pemula Perempuan
void menu29();//Program Latihan Sedang Perempuan
void menu30();//Program Latihan Profesional Perempuan
void menu31();//Program Latihan Pemula Lengan Perempuan
void menu32();//Program Latihan Pemula Dada Perempuan
void menu33();//Program Latihan Pemula Perut Perempuan
void menu34();//Program Latihan Pemula Kaki Perempuan
void menu35();//Program Latihan Sedang Lengan Perempuan
void menu36();//Program Latihan Sedang Dada Perempuan
void menu37();//Program Latihan Sedang Perut Perempuan
void menu38();//Program Latihan Sedang Kaki Perempuan
void menu39();//Program Latihan Profesional Lengan Perempuan
void menu40();//Program Latihan Profesional Dada Perempuan
void menu41();//Program Latihan Profesional Perut Perempuan
void menu42();//Program Latihan Profesional Kaki Perempuan
void menu43();//Rating Pengguna Terhadap Program

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
	printf("                            |=======================================================|\n");
	printf("                            |          Perhitungan Olahraga Rutin Sederhana	    |\n");
	printf("                            |=======================================================|\n");
	printf("                            |                        LOGIN	                    |\n");
	printf("                            |-------------------------------------------------------|\n\n");
	printf("                                             Masukan Username	: ");
	scanf("%s", &user);
	printf("                                             Masukan Password	: ");
	scanf("%s", &pass);

    login(user, pass);
    menu1();
}
void menu1(){
Identitas:
    printf("                                      |============================================|\n");
	printf("                                      |             Identitas Pengguna             |\n");
	printf("                                      |============================================|\n");
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
    printf("                                      |============================================|\n");
	printf("                                      |                Pilih Gender                |\n");
	printf("                                      |============================================|\n");
	printf("                                      |               1. Laki-Laki                 |\n");
	printf("                                      |--------------------------------------------|\n");
	printf("                                      |               2. Perempuan                 |\n");
	printf("                                      |--------------------------------------------|\n\n");
	printf("                                            Masukan Pilihan Untuk Gender  : ");
	scanf("%d", &gender);
	if(gender==1){
        system("cls");
        menu3();
	}
	else if (gender==2){
        system("cls");
        menu23();
	}
	else{
        printf("\n\n");
        printf("                                       |==========================================|\n");
		printf("                                       |      Input Yang Anda Masukan Salah!      |\n");
		printf("                                       |==========================================|\n");
        system("pause > 0 | echo                                                Klik ENTER Untuk Mengulangi");
        system("cls");
        menu2();
	}
}
//Program Untuk Laki
void menu3(){
    printf("                                        |============================================|\n");
	printf("                                        |        Pilihan Program Olahraga Laki       |\n");
	printf("                                        |============================================|\n");
	printf("                                        |        1. Program Berat Badan Ideal        |\n");
	printf("                                        |--------------------------------------------|\n");
	printf("                                        |        2. Program Membentuk Otot           |\n");
	printf("                                        |--------------------------------------------|\n\n");
	printf("                                                  Masukan Pilihan Program : ");
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
	   printf("\n\n");
        printf("                                          |=========================================|\n");
		printf("                                          |      Input Yang Anda Masukan Salah!     |\n");
		printf("                                          |=========================================|\n");
        system("pause > 0 | echo                                                   Klik ENTER Untuk Mengulangi");
        system("cls");
        menu3();
	}
}
//BERAT BADAN IDEAL Laki
void menu4(){
    bmi_l = (tb-100)-((tb-100)*0.1);
    printf("                            |--------------------------------------------------------|\n");
    printf("                            |       Berat Badan Ideal Anda Adalah %f KG       |\n", bmi_l);
    printf("                            |--------------------------------------------------------|\n");
    if(bb < bmi_l){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal|\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Program Menaikan Berat Badan\n\n");
        menu5();
    }
    else if(bb == bmi_l){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |   Berat Badan Anda Tergolong  Berat Badan Yang Ideal   |\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Menu Pemilihian Program\n\n");
        system("cls");
		menu3();
    }
    else if(bmi_l < bb){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal |\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Program Menaikan Berat Badan\n");
        menu6();
    }
}
void menu5(){
    printf("\n\n");
    printf("                                |=============================================|\n");
	printf("                                |        Program Menaikan Berat Badan         |\n");
	printf("                                |=============================================|\n");
	printf("                                |1.Tingkatkan Porsi Makan Dan Intensitas Makan|\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |       2.Makan-Makanan Bergizi Dan Nurtisi   |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         3.Konsumsi Jus Dan Smoothies        |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         4.Perbanyak Konsumsi Susu           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         5.Kurangi Olahraga Kardio           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         6.Perbanyak Minum Air Putih         |\n");
    printf("                                |---------------------------------------------|\n");
    system("pause > 0 | echo                                       Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu6(){
    printf("\n\n");
    printf("                                |=============================================|\n");
	printf("                                |       Program Menurunkan Berat Badan        |\n");
	printf("                                |=============================================|\n");
	printf("                                |           1.Minum Air Sebelum Makan         |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           2.Rajin Olahraga Kardio           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           3.Tidur Yang Cukup                |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           4.Makan Secara Perlahan           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           5.Membatasi Asupan Gula           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           6.Perbanyak Konsumsi Serat        |\n");
    printf("                                |---------------------------------------------|\n");
    system("pause > 0 | echo                                       Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
//MEMBENTUK OTOT Laki
void menu7(){
    printf("                                        |==========================================|\n");
    printf("                                        |     Program Membentuk Massa Otot Laki    |\n");
    printf("                                        |==========================================|\n");
    printf("                                        |             Tingkat Kesulitan            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |             1. Tingkat Pemula            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |             2. Tingkat Sedang            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |           3. Tingkat Profesional         |\n");
    printf("                                        |------------------------------------------|\n\n\n");
    printf("                                                Masukan Pilihan Program Anda: ");
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
    printf("                                       |==========================================|\n");
    printf("                                       |      Latihan Pemula Untuk Laki-Laki      |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
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
    printf("                                       |==========================================|\n");
    printf("                                       |      Latihan Sedang Untuk Laki-Laki      |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
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
    printf("                                       |==========================================|\n");
    printf("                                       |    Latihan Profesional Untuk Laki-Laki   |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
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
    printf("                                        |======================================================|\n");
    printf("                                        |              Melatih Otot Lengan Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 3-set push up dengan 1 setnya  10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 3-set trisep dengan 1 setnya  10 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 3-set chin up dengan 1 setnya  10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu12(){
    printf("                                        |======================================================|\n");
    printf("                                        |                Melatih Otot Dada Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 3-set chair dips dengan 1 setnya  10 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 3-set plank dengan 1 setnya selama 45 detik        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 3-set rotation push up dengan 1 setnya  10 repetisi|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu13(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Perut Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |  1. 3-set sit up dengan 1 setnya  10 repetisi        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  2. 3-set plank dengan 1 setnya selama 45 detik      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  3. 3-set push up roket dengan 1 setnya  10 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu14(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Kaki Pemula               |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 3-set squats dengan 1 setnya  10 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 3-set side lunges dengan 1 setnya selama 45 detik |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3-set jinjit kaki dengan 1 setnya 10 repetisi        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu15(){
    printf("                                        |======================================================|\n");
    printf("                                        |              Melatih Otot Lengan Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 5-set push up dengan 1 setnya  15 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 5-set trisep dengan 1 setnya  15 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 5-set chin up dengan 1 setnya  15 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    4. 5-set bench dips dengan 1 setnya  15 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu16(){
    printf("                                        |======================================================|\n");
    printf("                                        |                Melatih Otot Dada Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 5-set chair dips dengan 1 setnya  15 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 5-set plank dengan 1 setnya selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 5-set rotation push up dengan 1 setnya  15 repetisi|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 5-set archer push up dengan 1 setnya 15 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
   system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu17(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Perut Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |  1. 5-set sit up dengan 1 setnya  15 repetisi        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  2. 5-set plank dengan 1 setnya selama 1 menit       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  3. 5-set push up roket dengan 1 setnya  15 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  4. 5-set crunch, dengan 1 setnya  15 repetisi       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu18(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Kaki Sedang               |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 5-set squats dengan 1 setnya  15 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 5-set side lunges dengan 1 setnya selama 1 menit  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3. 5-set jinjit kaki dengan 1 setnya 15 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 4. 5-set sumo squats dengan 1 setnya  15 repetisi    |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu19(){
    printf("                                        |======================================================|\n");
    printf("                                        |            Melatih Otot Lengan Profesional           |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 7-set push up dengan 1 setnya  18 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 7-set trisep dengan 1 setnya  18 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 7-set chin up dengan 1 setnya  18 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    4. 7-set bench dips dengan 1 setnya  18 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    5. 7-set dumbell dengan 1 setnya  18 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu20(){
    printf("                                        |======================================================|\n");
    printf("                                        |             Melatih Otot Dada Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 7-set chair dips dengan 1 setnya  18 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 7-set plank dengan 1 setnya selama 1 menit 30 detik|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 7-set rotation push up dengan 1 setnya  18 repetisi|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 7-set archer push up dengan 1 setnya 18 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |5. 7-set diamond push up dengan 1 setnya  18 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu21(){
    printf("                                        |======================================================|\n");
    printf("                                        |            Melatih Otot Perut Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 7-set sit up dengan 1 setnya  18 repetisi          |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 7-set plank dengan 1 setnya selama 1 menit 30 detik|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 7-set push up roket dengan 1 setnya  18 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 7-set crunch, dengan 1 setnya  18 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |5. 7-set montain climb dengan 1 setnya  18 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu22(){
    printf("                                        |======================================================|\n");
    printf("                                        |             Melatih Otot Kaki Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 7-set squats dengan 1 setnya  18 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 7-set side lunges dengan 1 setnya selama 1,5 menit|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3. 7-set jinjit kaki dengan 1 setnya 18 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 4. 7-set sumo squats dengan 1 setnya  18 repetisi    |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 5. 7-set barbel squats dengan 1 setnya  18 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
//Program Untuk Perempuan
void menu23(){
    printf("                                        |============================================|\n");
	printf("                                        |      Pilihan Program Olahraga Perempuan     |\n");
	printf("                                        |============================================|\n");
	printf("                                        |        1. Program Berat Badan Ideal        |\n");
	printf("                                        |--------------------------------------------|\n");
	printf("                                        |        2. Program Membentuk Otot           |\n");
	printf("                                        |--------------------------------------------|\n\n");
	printf("                                                  Masukan Pilihan Program : ");
	scanf("%d", &p);
	if(p==1){
        system("cls");
        menu24();
	}
	else if (p==2){
        system("cls");
        menu27();
	}
	else{
        printf("\n\n");
        printf("                                          |=========================================|\n");
		printf("                                          |      Input Yang Anda Masukan Salah!     |\n");
		printf("                                          |=========================================|\n");
        system("pause > 0 | echo                                                   Klik ENTER Untuk Mengulangi");
        menu23();
	}
}
//BERAT BADAN IDEAL Perempuan
void menu24(){
    bmi_l = (tb-100)-((tb-100)*0.15);
    printf("                            |--------------------------------------------------------|\n");
    printf("                            |       Berat Badan Ideal Anda Adalah %f KG       |\n", bmi_p);
    printf("                            |--------------------------------------------------------|\n");
    if(bb < bmi_p){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |Berat Badan Anda Tergolong Kurang Dari Berat Badan Ideal|\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Program Menaikan Berat Badan\n\n");
        menu25();
    }
    else if(bb == bmi_p){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |   Berat Badan Anda Tergolong  Berat Badan Yang Ideal   |\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Menu Pemilihian Program\n\n");
        system("cls");
		menu23();
    }
    else if(bb > bmi_p){
        printf("                            |--------------------------------------------------------|\n");
        printf("                            |Berat Badan Anda Tergolong Lebih Dari Berat Badan Ideal |\n");
        printf("                            |--------------------------------------------------------|\n\n\n");
        system("pause > 0 | echo                            Klik ENTER Untuk Melanjutkan Ke Program Menaikan Berat Badan\n\n\n");
        menu26();
    }
}
void menu25(){
    printf("\n\n");
    printf("                                |=============================================|\n");
	printf("                                |        Program Menaikan Berat Badan         |\n");
	printf("                                |=============================================|\n");
	printf("                                |1.Tingkatkan Porsi Makan Dan Intensitas Makan|\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |       2.Makan-Makanan Bergizi Dan Nurtisi   |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         3.Konsumsi Jus Dan Smoothies        |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         4.Perbanyak Konsumsi Susu           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         5.Kurangi Olahraga Kardio           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |         6.Perbanyak Minum Air Putih         |\n");
    printf("                                |---------------------------------------------|\n");\
    system("pause > 0 | echo                                       Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu26(){
    printf("\n\n");
    printf("                                |=============================================|\n");
	printf("                                |       Program Menurunkan Berat Badan        |\n");
	printf("                                |=============================================|\n");
	printf("                                |           1.Minum Air Sebelum Makan         |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           2.Rajin Olahraga Kardio           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           3.Tidur Yang Cukup                |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           4.Makan Secara Perlahan           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           5.Membatasi Asupan Gula           |\n");
    printf("                                |---------------------------------------------|\n");
    printf("                                |           6.Perbanyak Konsumsi Serat        |\n");
    printf("                                |---------------------------------------------|\n");
    system("pause > 0 | echo                                       Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
//PROGRAM OTOT Perempuan
void menu27(){
    printf("                                        |==========================================|\n");
    printf("                                        |  Program Membentuk Massa Otot Perempuan  |\n");
    printf("                                        |==========================================|\n");
    printf("                                        |             Tingkat Kesulitan            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |             1. Tingkat Pemula            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |             2. Tingkat Sedang            |\n");
    printf("                                        |------------------------------------------|\n");
    printf("                                        |           3. Tingkat Profesional         |\n");
    printf("                                        |------------------------------------------|\n\n\n");
    printf("                                                Masukan Pilihan Program Anda: ");
    scanf("%d", &op);
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
    printf("                                       |==========================================|\n");
    printf("                                       |      Latihan Pemula Untuk Perempuan      |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
    scanf("%d", &pp);
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
    printf("                                       |==========================================|\n");
    printf("                                       |      Latihan Sedang Untuk Perempuan      |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
	scanf("%d", &sp);
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
    printf("                                       |==========================================|\n");
    printf("                                       |    Latihan Profesional Untuk Perempuan   |\n");
    printf("                                       |==========================================|\n");
    printf("                                       |           1. Latihan Otot Lengan         |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           2. Latihan Otot Dada           |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           3. Latihan Otot Perut          |\n");
    printf("                                       |------------------------------------------|\n");
    printf("                                       |           4. Latihan Otot Kaki           |\n");
    printf("                                       |------------------------------------------|\n\n\n");
    printf("                                               Masukan Pilihan Latihan Anda  : ");
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
    printf("                                        |======================================================|\n");
    printf("                                        |              Melatih Otot Lengan Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 3-set push up dengan 1 setnya  5 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 3-set trisep dengan 1 setnya  5 repetisi       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 3-set chin up dengan 1 setnya  5 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu32(){
    printf("                                        |======================================================|\n");
    printf("                                        |                Melatih Otot Dada Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 3-set chair dips dengan 1 setnya  5 repetisi       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 3-set plank dengan 1 setnya selama 30 detik        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 3-set rotation push up dengan 1 setnya  5 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu33(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Perut Pemula              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |  1. 3-set sit up dengan 1 setnya  5 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  2. 3-set plank dengan 1 setnya selama 30 detik      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  3. 3-set push up roket dengan 1 setnya  5 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu34(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Kaki Pemula               |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 3-set squats dengan 1 setnya  5 repetisi          |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 3-set side lunges dengan 1 setnya selama 30 detik |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3-set jinjit kaki dengan 1 setnya 5 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu35(){
    printf("                                        |======================================================|\n");
    printf("                                        |              Melatih Otot Lengan Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 5-set push up dengan 1 setnya  8 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 5-set trisep dengan 1 setnya  8 repetisi       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 5-set chin up dengan 1 setnya  8 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    4. 5-set bench dips dengan 1 setnya  8 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                            Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu36(){
    printf("                                        |======================================================|\n");
    printf("                                        |                Melatih Otot Dada Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 5-set chair dips dengan 1 setnya  8 repetisi       |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 5-set plank dengan 1 setnya selama 45 detik        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 5-set rotation push up dengan 1 setnya  8 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 5-set archer push up dengan 1 setnya 8 repetisi    |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu37(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Perut Sedang              |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |  1. 5-set sit up dengan 1 setnya  8 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  2. 5-set plank dengan 1 setnya selama 45 detik      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  3. 5-set push up roket dengan 1 setnya  8 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |  4. 5-set crunch, dengan 1 setnya  8 repetisi        |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
   system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu38(){
    printf("                                        |======================================================|\n");
    printf("                                        |               Melatih Otot Kaki Sedang               |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 5-set squats dengan 1 setnya  8 repetisi          |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 5-set side lunges dengan 1 setnya selama 45 detik |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3. 5-set jinjit kaki dengan 1 setnya 8 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 4. 5-set sumo squats dengan 1 setnya  8 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu39(){
    printf("                                        |======================================================|\n");
    printf("                                        |            Melatih Otot Lengan Profesional           |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |    1. 7-set push up dengan 1 setnya  10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    2. 7-set trisep dengan 1 setnya  10 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    3. 7-set chin up dengan 1 setnya  10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    4. 7-set bench dips dengan 1 setnya  10 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |    5. 7-set dumbell dengan 1 setnya  10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu40(){
    printf("                                        |======================================================|\n");
    printf("                                        |             Melatih Otot Dada Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 7-set chair dips dengan 1 setnya  10 repetisi      |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 7-set plank dengan 1 setnya selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 7-set rotation push up dengan 1 setnya  10 repetisi|\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 7-set archer push up dengan 1 setnya 10 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |5. 7-set diamond push up dengan 1 setnya  10 repetisi |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu41(){
    printf("                                        |======================================================|\n");
    printf("                                        |            Melatih Otot Perut Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |1. 7-set sit up dengan 1 setnya  10 repetisi          |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |2. 7-set plank dengan 1 setnya selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |3. 7-set push up roket dengan 1 setnya  10 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |4. 7-set crunch, dengan 1 setnya  10 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |5. 7-set montain climb dengan 1 setnya  10 repetisi   |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu42(){
    printf("                                        |======================================================|\n");
    printf("                                        |             Melatih Otot Kaki Profesional            |\n");
    printf("                                        |======================================================|\n");
    printf("                                        | 1. 7-set squats dengan 1 setnya  10 repetisi         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 2. 7-set side lunges dengan 1 setnya selama 1 menit  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 3. 7-set jinjit kaki dengan 1 setnya 10 repetisi     |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 4. 7-set sumo squats dengan 1 setnya  10 repetisi    |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        | 5. 7-set barbel squats dengan 1 setnya  10 repetisi  |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |pesan : istirahat perepetisi selama 30 detik dan      |\n");
    printf("                                        |        istirahat per-gerakkan selama 1 menit         |\n");
    printf("                                        |------------------------------------------------------|\n");
    printf("                                        |latihan ini dilakukan dengan rutin setiap harinya di  |\n");
    printf("                                        |               pagi atau sore hari :D                 |\n");
    printf("                                        |------------------------------------------------------|\n");
    system("pause > 0 | echo                                                  Klik ENTER Untuk Mengakhiri Program");
    system("cls");
    menu43();
}
void menu43(){
    printf("                                        |======================================================|\n");
    printf("                                        |       Terimakasih Telah Menggunakan Program Kami     |\n");
    printf("                                        |       Semoga Membantu Dalam Aktivitas Sehari-hari    |\n");
    printf("                                        | Diharapkan  Untuk Meninput Rating Dengan Jujur Untuk |\n");
    printf("                                        |  Membantu Development Dalam Pengembangan Aplikasinya |\n");
    printf("                                        |======================================================|\n\n");
    system("pause > 0 | echo                                                   Klik ENTER Untuk Memberi Rating\n\n");
    printf("                                        |======================================================|\n");
    printf("                                        |          Rating Keseluruhan Program Olahraga         |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |                   * = Sangat Buruk                   |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |                  ** =  Buruk                         |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |                 *** =  Cukup                         |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |                **** =  Baik                          |\n");
    printf("                                        |======================================================|\n");
    printf("                                        |               ***** =  Sangat Baik                   |\n");
    printf("                                        |======================================================|\n\n\n");
    printf("                                                Silahkan Input Rating Program Olahraga  :");
    scanf("%d, &r");
    return(0);

}
