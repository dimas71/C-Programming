#include <stdio.h>

int main()
{
	int harga,PPN,total; /*deklarasi untuk harga, PPN, dan total*/
	char kode,kelas,nambah; /*deklarasi untuk kode,kelas,nambah*/

	printf("\n                            INDONESIA AIRLINES                                 \n");
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^Reservasi Tiket Pesawat^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n");
	printf("\n=============================================================================\n");
	printf("Tujuan Anda                  Kelas          Kelas        Kelas\n");
	printf("                           Ekonomi(E)     Bisnis(B)    Eksekutif (X)\n");
	printf("===============================================================================\n");
	printf("1.Yogyakarta               Rp.125.000    Rp.500.000    Rp.700.000\n");
	printf("2.Malaysia                 Rp.250.000    Rp.750.000    Rp.1.200.000\n");
	printf("3.Singapura                Rp.450.000    Rp.1.200.000  Rp.1.700.000\n");
	printf("4.Jepang                   Rp.1.250.000  Rp.2.300.000  Rp.3.100.000\n");
	printf("===============================================================================\n");

	for (;;)/*untuk perulangan jika ada yang ingin ditambahkan*/
	{
	printf("\nPilih tujuan anda (1/2/3/4): ");
	scanf("%d",&kode);

	switch(kode)/*proses yang akan dilakukan saat kode telah diinput oleh user*/
	{
		case 1: {/*proses yang akan dilakukan saat user memasukkan kode 1*/
					printf("Tujuan Anda : Yogyakarta\n");
					printf("\n-----------Silahkan Pilih Kelas Pesawat---------\n");
					printf("Masukkan Kode Kelas (E/B/X): ");
					scanf("%s",&kelas);
					if(kelas=='E' || kelas=='e')
					{
						harga=125000;
						PPN=0;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp. %d",harga);
						printf("\nPPN: Rp. %d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='B' || kelas=='b')
					{
						harga=500000;
						PPN=0;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='X' || kelas=='x')
					{
						harga=700000;
						PPN=0;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
			break;
		}
		case 2: /*proses yang akan dilakukan saat user memasukkan kode 2*/
			{printf("Tujuan Anda : Malaysia\n");
					printf("\n-------------Silahkan Pilih Kelas Pesawat-----------\n");
					printf("Masukkan Kode Kelas (E/B/X): ");
					scanf("%s",&kelas);
					if(kelas=='E' || kelas=='e')
					{
						harga=250000;
						PPN=550;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp. %d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='B' || kelas=='b')
					{
						harga=750000;
						PPN=1500;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='X' || kelas=='x')
					{
						harga=1200000;
						PPN=5000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}

			break;
		}
		case 3: /*proses yang akan dilakukan saat user memasukkan kode 3*/
			{printf("Tujuan Anda : Singapura\n");
					printf("\n-------------Silahkan Pilih Kelas Pesawat-----------\n");
					printf("Masukkan Kode Kelas (E/B/X): ");
					scanf("%s",&kelas);
					if(kelas=='E' || kelas=='e')
					{
						harga=450000;
						PPN=1000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp. %d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='B' || kelas=='b')
					{
						harga=1200000;
						PPN=2000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='X' || kelas=='x')
					{
						harga=1700000;
						PPN=5000;
						total=harga-PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
			break;
		}
		case 4:/*proses yang akan dilakukan saat user memasukkan kode 4*/
			{printf("Tujuan Anda : Jepang\n");
					printf("\n-------------Silahkan Pilih Kelas Pesawat-----------\n");
					printf("Masukkan Kode Kelas (E/B/X): ");
					scanf("%s",&kelas);
					if(kelas=='E' || kelas=='e')
					{
						harga=1250000;
						PPN=1000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp. %d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='B' || kelas=='b')
					{
						harga=2300000;
						PPN=6000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
					else if(kelas=='X' || kelas=='x')
					{
						harga=3100000;
						PPN=10000;
						total=harga+PPN;
						printf("\nHarga Tiket : Rp.%d",harga);
						printf("\nPPN: Rp.%d",PPN);
						printf("\nTotal pembayaran : Rp.%d",total);
					}
			break;
		}
		default:
			printf("Maaf, Anda Salah Memasukkan Kode");/*jika user salah memasukkan kode, maka proses akan dimasukkan ke default*/
		}

			printf("\n\nAda Yang Ingin Ditambahkan (y/t):");/*jika user ingin membeli tiket lagi*/
			scanf("%s",&nambah);
			if(nambah=='t')/*jika tidak, maka proses akan berhenti, jika iya maka proses akan berulang*/
				break;
	}
	printf("\n\n========================== Terima Kasih =============================\n");
	system("PAUSE");
	return 0;
}
