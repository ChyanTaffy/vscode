#include <stdio.h>
#include <string.h>
void input_array(int a,int i);
int main()
{
    
    
}

void input_array(int a,int i)
{
    
    int arr[a];
    printf("array size");
    scanf("%d",&a);

    printf("input num");
    for (i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
}