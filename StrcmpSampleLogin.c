#include<stdio.h>
#include<string.h>
int main(void){
char username[20]; char password[20];
int i=0;

for(i=0;i<3;i++){
    printf("Silahkan Login\n\n");
    printf("Username : ");
    scanf("%s",&username);
    printf("Password : ");
    scanf("%s",&password);

    if((strcmp(username,"dimas71")==0)&&(strcmp(password,"nusaputraku")==0)){
            printf("\nAnda Berhasil Login");
            break;
            }
    else{
        printf("\nUsername / Password Anda Salah!\n\n");
    }
}
if (i == 3){
            printf("Maaf anda sudah 3x login, Coba lagi nanti\n");
        }

return 0;
}
