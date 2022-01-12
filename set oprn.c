
#include<stdio.h>
void main()
{
    int l1,l2,i,op;
    printf("enter the length of first set :");
    scanf("%d",&l1);
    printf("enter the length of second set :");
    scanf("%d",&l2);
    int a[l1],b[l2],c[l1];
    if(l1!=l2)
    {
    printf("the length of the set must be equal for bitwise operations... ");
    }
    else
    {
        printf("enter the elements of first set (only 1 & 0):\n");
        for(i=0;i<l1;i++)
        {
            scanf("%d",&a[i]);
        }
         printf("enter the elements of second set (only 1 & 0) :\n");
        for(i=0;i<l1;i++)
        {
            scanf("%d",&b[i]);
        }
        printf("your options are .....");
        printf("1.UNION \n 2.INTERSECTION \n 3.DIFFERENCE \n ");
        printf("enter your option : ");
        scanf("%d",&op);
        switch(op)
        {

    case 1 : printf("the union of the set is : \n");
            for(i=0;i<l1;i++)
                {
                    if(a[i]==1 || b[i]==1)
                        c[i]=1;
                    else
                        c[i]=0;
                    printf("%d",c[i]);
                }
                break;
    case 2: printf("the intersection of the set is : \n");
            for(i=0;i<l1;i++)
                {
                    if(a[i]==1 && b[i]==1)
                        c[i]=1;
                    else
                        c[i]=0;
                    printf("%d",c[i]);
                }
                break;
    case 3:  for(i=0;i<l1;i++)
                {
                    if(b[i]=1)
                        b[i]=0;
                    else
                        b[i]=1;
                }
    }
    }
}


