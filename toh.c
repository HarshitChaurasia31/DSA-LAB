#include <stdio.h>
void toh(int n,char S,char M,char D){
    if(n==1){
        printf("Move disk from %c to %c\n",S,D);
    }
    else{
        toh(n-1,S,D,M);
        printf("Move disk from %c to %c\n",S,D);
        toh(n-1,M,S,D);
    }
}
int main(){
    int x;
    printf("Enter number of disks:");
    scanf("%d",&x);
    char s='S';
    char m='M';
    char d='D';
    toh(x,s,m,d);
}