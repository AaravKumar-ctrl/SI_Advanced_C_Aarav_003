#include<stdio.h>
#include<math.h>

int main()
{
int rem, count=0, power, sum=0, countArm=0;
for(int i=1;i>0;i++)
{
    count=0; sum=0;
    for(int temp=i; temp>0; temp/=10)
    {
        count++;
    }
    for(int temp=i; temp>0; temp/=10)
    {
        rem=temp%10;
        power=pow(rem, count);
        sum=sum+power;
    }
    if(sum==i)
    {
        printf("%d ", i);
        countArm++;
        if(countArm==17)
        {printf("\n The 17th armstrong number is %d", i);
        break;
        }
    }
}
return 0;
}