#include<stdio.h>
void main(){
    int num , n,res=0 , oct=0;

    printf("Enter an integer : ");
    scanf("%d" , &num);
    n = num;



    while(n!=0)
    {

            res = res*10 + n%8;
            n = n/8;
            
    }

while(res!=0)
{

oct = oct*10 + res%10;
res = res/10;


}
printf("The octal of %d is %d" , num , oct);
}
