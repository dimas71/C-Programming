#include <stdio.h>
#include <stdlib.h>
/*
Keterangan :
Besar tunjangan 13% dari gaji pokok
Besar upah lembur perjam 3% dari gaji pokok
*/
int main(void){
    int no,gaji,lembur,tunjangan,uang_lembur,total_lembur,total_gaji;
    char nama,kembali;
    printf("    ===================================================\n");
    printf(" =========================================================\n");
    printf(" =============  Selamat Datang di Aplikasi  ==============\n");
    printf(" =============     Hitung Gaji Karyawan     ==============\n");
    printf(" =========================================================\n");
    printf("    ===================================================\n");
    system("pause");
    system("cls");

    mulai :
    printf("    ========== Aplikasi Hitung Gaji Karyawan ==========\n");
    printf(" =========================================================\n");
    printf(" Nomor Pegawai\t\t : ");
    scanf("%d",&no);
    printf(" Nama Pegawai\t\t : ");
    scanf(" %[^\n]",&nama);
    printf(" Gaji Pokok\t\t : ");
    scanf("%d",&gaji);
    printf(" Jam Lembur\t\t : ");
    scanf("%d",&lembur);
    printf(" =========================================================\n");
    tunjangan = gaji*13/100;
    uang_lembur = gaji*3/100;
    total_lembur = uang_lembur*lembur;
    total_gaji = gaji+tunjangan+total_lembur;
    printf(" Gaji Pokok\t\t : Rp. %d\n",gaji);
    printf(" Tunjangan\t\t : Rp. %d\n",tunjangan);
    printf(" Uang Lembur Per-Jam\t : Rp. %d\n",uang_lembur);
    printf(" Total Uang Lembur\t : Rp. %d\n",total_lembur);
    printf(" Total Gaji\t\t : Rp. %d\n",total_gaji);
    printf(" =========================================================\n");
    printf("    ========== Aplikasi Hitung Gaji Karyawan ==========\n\n");
    kembali:
    printf(" Kembali ke menu (y) ? ");
    scanf("%s", &kembali);
        if (kembali=='y'){
            system("cls");
            goto mulai;
        }
    return 0;
}
