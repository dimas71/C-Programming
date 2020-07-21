#include<stdio.h>
#include<stdlib.h>

int main(void){
    float persentase,tugas,uts,uas,hadir;
    char kembali;
    int menu;
    int pilih,p_b,l_b,t_b,luas_balok,volume_balok,keliling_balok;
    int pembelian,diskon1,diskon2,pembayaran,harga;
    mulai:
    printf("1. Hitung Nilai Mhs\n");
    printf("2. Hitung Pembayaran\n");
    printf("3. Hitung Balok\n");
    printf("\nPilih Menu : ");
    scanf ("%d", &menu);
        if (menu==1){
            system("cls");
            printf("=================================\n");
            printf(" \tHitung Nilai Mhs\n");
            printf("=================================\n");
            printf("Tugas \t\t : ");
            scanf ("%f", &tugas);
            printf("UTS \t\t : ");
            scanf ("%f", &uts);
            printf("UAS \t\t : ");
            scanf ("%f", &uas);
            printf("Kehadiran (1-16) : ");
            scanf ("%f", &hadir);
            printf("=================================\n");
            persentase = (tugas*20/100)+(uts*30/100)+(uas*40/100)+(hadir/16*10/100*100);
            printf("Nilai \t\t : %0.1f\n" ,persentase);

                if (persentase>=90){
                printf("Hasil Akhir \t : A");
                }
                else if (persentase>=80){
                printf("Hasil Akhir \t : B");
                }
                else if (persentase>=60){
                printf("Hasil Akhir \t : C");
                }
                else if (persentase>=50){
                printf("Hasil Akhir \t : D");
                }
                else{
                printf("Nilai Akhir \t : E");
                }
            }

        else if (menu==2){
            system("cls");
            printf("==================================\n");
            printf(" \tHitung Pembayaran\n");
            printf("==================================\n");
            printf("Jumlah Pembelian \t : ");
            scanf("%d", &harga);
            diskon1=harga*15/100;
            diskon2=harga*5/100;
                if (harga>=500000)
                {
                printf("==================================\n");
                printf("Total yang harus dibayar : %d" ,harga-diskon1);
                }
                else if (harga>=250000)
                {
                printf("==================================\n");
                printf("Total yang harus dibayar : %d" ,harga-diskon2);
                }
                else
                {
                printf("==================================\n");
                printf("Total yang harus dibayar : %d" ,harga);
                }
            }
        else if (menu==3){
                system("cls");
                printf("==================================\n");
                printf(" \tHitung Balok\n");
                printf("==================================\n");
                printf("1. Luas\n");
                printf("2. Volume\n");
                printf("3. Keliling\n");
                printf("\nPilih : ");
                scanf("%d", &pilih);
                    if (pilih==1) {
                    printf("==================================\n");
                    printf(" \tHitung Luas Balok\n");
                    printf("==================================\n");
                    printf("Panjang : ");
                    scanf("%d", &p_b);
                    printf("Lebar   : ");
                    scanf("%d", &l_b);
                    printf("Tinggi  : ");
                    scanf("%d", &t_b);
                    luas_balok=2*(p_b*l_b+p_b*t_b+l_b*t_b);
                    printf("Luas    : %d" ,luas_balok);
                    }

                    else if (pilih==2){
                    printf("==================================\n");
                    printf(" \tHitung Volume Balok\n");
                    printf("==================================\n");
                    printf("Panjang : ");
                    scanf("%d", &p_b);
                    printf("Lebar   : ");
                    scanf("%d", &l_b);
                    printf("Tinggi  : ");
                    scanf("%d", &t_b);
                    volume_balok=(p_b*l_b*t_b);
                    printf("Volume  : %d" ,volume_balok);
                    }

                    else if (pilih==3){
                    printf("==================================\n");
                    printf(" \tHitung Keliling Balok\n");
                    printf("==================================\n");
                    printf("Panjang : ");
                    scanf("%d", &p_b);
                    printf("Lebar   : ");
                    scanf("%d", &l_b);
                    printf("Tinggi  : ");
                    scanf("%d", &t_b);
                    keliling_balok=4*(p_b+l_b+t_b);
                    printf("Keliling: %d" ,keliling_balok);
                    }
                    else {
                    printf("Pilihan Anda Salah!");
                    }
                }
        else{
        printf("Pilihan Anda Salah!");
        }

    kembali:
    printf("\n\nKembali ke menu (y/t) ? ");
    scanf(" %c", &kembali);
        if (kembali=='y'){
            system("cls");
            goto mulai;
        }
        else if (kembali=='t'){
            printf("Terimakasih!");
        }
        else{
            printf("Pilihan Anda Salah");
            goto kembali;
        }
    return 0;
}
