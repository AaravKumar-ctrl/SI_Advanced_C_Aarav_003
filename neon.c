#include<stdio.h>

int main()
{
int rem, sq, sum=0;
for(int i=1;i<1000;i++)
{
    sq=i*i;
    sum=0;
    for(int temp=i; temp>0; temp/=10)
    {
        rem=temp%10;
        sum=sum+rem;
    }
    if(sum==i)
    {
        printf("%d ", i);
    }

}
return 0;
}