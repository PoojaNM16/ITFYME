#include<stdio.h>
int main(int argc, char *argv[]) {
    int n,prime;
    printf("enter the num\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n/2){
        prime=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
             prime=0;
             break; 
            }
        }
        //printf("prime=%d\n",prime);
        if(prime==1 && n%i==0){ 
            //if(n%i==0){
              printf("%d\n",i);
           // }
          
        }
        i++;
         
        
    }
}