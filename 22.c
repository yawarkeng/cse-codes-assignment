
//Program in C to display the series 2 4 16 256 65536 ... upto n terms

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,x;
    printf("enter the value of n:");
    scanf("%d",&n);
    x=2;
    printf("%d ",x);
    for(i=1;i<n;i++){
        x=pow(x,2);
        printf(" %d ",x);
    }
   return 0;
}
