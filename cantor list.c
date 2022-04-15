#include <stdio.h>
int sum(int a,int b);
int main()
{
    int a;
    scanf("%d",&a);
    int i=1,i_last=1;
    while (sum(1,i_last) < a)
    {
        i=i+1;
        i_last=i;
    }
    int k = a-sum(1,i_last-1);
        int f1,f2;
        if ((i_last )%2 != 0)
        {
            f1=(i_last)-(k-1);
            f2=1+(k-1);
        }else{
            f1=1+(k-1);
            f2=(i_last)-(k-1);
        }
        printf("%d/%d",f1,f2);
}

int sum(int a,int b)
{
    int c = ((a+b)*(b-a+1))/2;
    return c;
}