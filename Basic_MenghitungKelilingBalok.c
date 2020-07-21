#include<stdio.h>//library input/output
#define const 4 //menetapkan konstanta 4

int main(void) { //fungsi utama untuk menjalankan program
    char nama[] = "Dimas Arya Pamungkas"; //memasukan Dimas Arya Pamungkas ke dalam tipe variabel char
    char jurusan[] = "Teknik Informatika"; //memasukan Teknik Informatika ke dalam tipe variabel char
    char tanggal_lahir[] = "12 November 2001"; //memasukan 12 November 2001 ke dalam tipe variabel char
    printf("\t BIODATA MAHASISWA \n\n"); //mencetak "BIODATA MAHASISWA"
    printf("Nama \t\t: %s\n", nama); //mencetak "Nama : Dimas Arya Pamungkas"
    printf("Jurusan \t: %s\n", jurusan); //mencetak "Jurusan : Teknik Informatika"
    printf("Tanggal Lahir \t: %s\n\n", tanggal_lahir); //mencetak "Tanggal Lahir : 12 November 2001"

    int cons = 4; //memasukan 4 ke variabel cons
    int p = 8; //memasukan 8 ke variabel p
    int l = 7; //memasukan 7 ke variabel l
    int t = 9; //memasukan 9 ke variabel t
    int hasil; //deklarasi variabel hasil
    hasil = cons*(p+l+t); //variabel hasil menampung nilai cons*(p+l+t)
    printf("\t MENGHITUNG KELILING BALOK \n\n"); //mencetak "MENGHITUNG KELILING BALOK"
    printf("Panjang \t: %d cm\n", p); //mencetak "Panjang : 8 cm"
    printf("Lebar \t\t: %d cm\n", l); //mencetak "Lebar : 7 cm"
    printf("Tinggi \t\t: %d cm\n", t); //mencetak "Tinggi : 9 cm"
    printf("Keliling Balok \t: %d cm3\n", hasil); //mencetak Keliling Balok : 96 cm3"


    return 0; //mengembalikan nilai 0: success!
}
