#include<stdio.h>

void main()
{
    int a[30],b[30],c[30],i,j,m,n,f,temp=0,k;
printf("Enter the limit of the array 1= ");
scanf("%d",&m);
printf("Enter the limit of the second array= ");
scanf("%d",&n);
f=m+n;
printf("\n Enter the first array elements= ");
for(i=0;i<m;i++)
{
  scanf("%d",&a[i]);
  c[i]=a[i];
}
k=m;
printf("Enter the second array elements= ");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
printf("The first array is = \t");
for(i=0;i<m;i++)
{
    printf("%d\t",a[i]);
}

printf("\n The second array is = \t");
for(i=0;i<n;i++)
{
    printf("%d\t",b[i]);
}
printf("\n the merged array is= ");
for(i=0;i<f;i++)
{
    for(j=i+1;j<f;j++)
    {
        if(c[i]>c[j])
        {
            temp=c[i];
            c[i]=c[j];
            c[j]=temp;

        }
    }

}
for(i=0;i<f;i++)
{
    printf("\t%d\t",c[i]);
}
return 0;
}

