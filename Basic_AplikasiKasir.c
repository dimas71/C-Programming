#include<stdio.h>

int main(void){
    int pembelian,diskon1,diskon2,pembayaran,harga;
    printf("Masukan Harga: ");
    scanf("%d", &harga);
    diskon1=harga*15/100;
    diskon2=harga*5/100;
    if (harga>=500000)
    {
        printf("Total Pembelian \t: Rp.%d\n" ,harga);
        printf("Total Diskon 15%%\t: Rp.%d\n" ,diskon1);
        printf("Total Pembayaran \t: Rp.%d\n" ,harga-diskon1);
    }
    else if (harga>=250000)
    {
        printf("Total Pembelian \t: Rp.%d\n" ,harga);
        printf("Total Diskon 5%% \t: Rp.%d\n", diskon2);
        printf("Total Pembayaran \t: Rp.%d\n", harga-diskon2);
    }
     else
    {
        printf("Total Pembelian \t: Rp.%d\n" ,harga);
        printf("Total Diskon    \t: Rp.0\n", harga);
        printf("Total Pembayaran \t: Rp.%d\n", harga);
    }
    return 0;
    }
