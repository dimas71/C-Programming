int main (void){
int i,j,k;
for (i=5; i >= 0; i--){
    for (k=i; k<=4; k++){
        printf(" ");
    }
    for (j=i;j>=0;j--){
        printf("%d",j);
    }
    printf("\n");
}
}
