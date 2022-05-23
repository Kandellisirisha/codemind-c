#include<stdio.h>
int main()
{
    int i,I,w,h,n;
    scanf("%d",&I);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&w,&h);
        if((w<I)||(h<I))
        printf("UPLOAD ANOTHER
");
        else
        {
            if(w==h)
            printf("ACCEPTED
");
            else
            printf("CROP IT
");
        }
    }
}