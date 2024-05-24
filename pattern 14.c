#include<stdio.h>
int main(){
    int raw,col,n;
scanf("%d",&n);
    for(raw=1;raw<=n;raw++){
       for(col=1;col<=n-raw;col++){
        printf(" ");
       }
       for(col=1;col<=raw*2-1;col++){
        printf("*");
       }
       printf("\n");
    }


for(raw=n-1;raw>=1;raw--){
    for(col=1;col<=n-raw;col++){
       printf(" ");
    }
    for(col=1;col<=raw*2-1;col++){
        printf("*");
    }
    printf("\n");


}




}

