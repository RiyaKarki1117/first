#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int *p,n=0,temp=0,i=0,j=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    p=(int *)calloc(n,4);
    if(p==NULL) 
	{
        printf("\nMemory couldn't be allocated");
        exit(0);
    }
    for(i=0;i<n;i++) 
	{  
        printf("Enter number:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n-1;i++) 
	{
        for(j=i+1;j<n;j++) 
		{
            if(*(p+i)>*(p+j)) 
			{
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("\nNumbers in ascending order:\n");
    for(i=0;i<n;i++) 
	{
        printf("%d ",*(p+i));
    }
    for(i=0;i<n-1;i++) 
	{
        for(j=i+1;j<n;j++) 
		{
            if(*(p+i)<*(p+j)) 
			{
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    printf("\nNumbers in descending order:\n");
    for(i=0;i<n;i++) 
	{
        printf("%d ",*(p+i));
    }
    free(p);
    return 0;
}


