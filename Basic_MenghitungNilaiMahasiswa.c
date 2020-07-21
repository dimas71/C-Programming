#include<stdio.h>

int main(void){
    float persentase,tugas,uts,uas,hadir;
    printf("=================================\n");
    printf(" \tHitung Nilai Mhs\n");
    printf("=================================\n");
    printf("Tugas \t\t : ");
    scanf("%f", &tugas);
    printf("UTS \t\t : ");
    scanf("%f", &uts);
    printf("UAS \t\t : ");
    scanf("%f", &uas);
    printf("Kehadiran (1-16) : ");
    scanf("%f", &hadir);
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
    return 0;
    }
