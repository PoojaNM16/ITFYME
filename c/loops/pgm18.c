#include<stdio.h>
int main(int argc, char *argv[]) {
  /*
    int n,rev=0,digit,mul=1,num,digit2,count,temp;
    printf("enter the num\n");
    scanf("%d",&n);
    temp=n;
    while(n>0){
      count=0;
      digit=n%10;
     // printf("num=%d\n",num);
      num=temp;
      printf("%d %d\n",num,digit2);
      if(num!=digit2){
      while(num>0){
        digit2=num%10;
       // printf("digit=%d  digit2=%d\n",digit,digit2);
        if(digit==digit2){
            count++;
        }
        num=num/10;
    }
      }
      printf("%d occured %d times\n",digit,count);
      n=n/10;
    }  */  
    int n,rem,c=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    printf("enter the num\n");
    scanf("%d",&n);
    while(n>0){
      rem=n%10;
      n/=10;
      switch(rem){
        case 0:c++;
            break;
        case 1:c1++;
            break;
        case 2:c2++;
            break;
        case 3:c3++;
            break;
        case 4:c4++;
            break;
        case 5:c5++;
            break;
        case 6:c6++;
            break;
        case 7:c7++;
            break;
        case 8:c8++;
            break;
        default:c9++;

      }
      
    }
    if(c>0){
        printf("0 freq is=%d\n",c);
        
    }
    if(c1>0){
        printf("1 freq is=%d\n",c1);

    }
    if(c2>0){
         printf("2 freq is=%d\n",c2);
        
    }
    if(c3>0){
         printf("3 freq is=%d\n",c3);
        
    }
    if(c4>0){
         printf("4 freq is=%d\n",c4);
        
    }
    if(c5>0){
         printf("5 freq is=%d\n",c5);
        
    }
    if(c6>0){
         printf("6 freq is=%d\n",c6);
        
    }
    if(c7>0){
         printf("7 freq is=%d\n",c7);
        
    }
    if(c8>0){
         printf("8 freq is=%d\n",c8);
        
    }
    if(c9>0){
         printf("9 freq is=%d\n",c9);
        
    }
}












