#include<stdio.h>
int main()
{
    int i,j,k,n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=m;i=n+i)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j-1)%n==0){
                printf("%d",i+j-1);
            }else{
                printf("%d ",i+j-1);
            }

        }
        if(i+n<m)
            printf("\n");
    }
    printf("\n");

    return 0;
}
