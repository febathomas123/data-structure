#include<stdio.h>
int main()

{

int arr[60],elem,i,pos,size,n,choice,search,ch,flag=0;
     printf("menu driven program to insert,delete,traverse and search\n");
     printf("1.inserting an element in an array\n");
     printf("2.deleting an element in an array\n");
     printf("3.traversing an element in an array\n");
     printf("4.searching an element in an array\n");
     printf("enter your choice");
     scanf("%d",&choice);
 switch(choice)

 {{
  case 1: printf("enter the limit\n");
          scanf("%d",&n);
          printf("array elements\n");

       for(i=0;i<n;i++)
       {
       scanf("%d",&arr[i]);
       }


       printf("enter the position of elements\n");
       scanf("%d",&pos);
       printf("enter the element\n");
       scanf("%d",&elem);
       if (pos>n)
       printf("invalid\n");
       else
       {
       for(i=n-1;i>=pos-1;i--)
       arr[i+1]=arr[i];
       arr[pos-1]=elem;
       printf("array after insertion\n");
       for(i=0;i<=n;i++)
       printf("%d\n",arr[i]);
       }
break;
}


 {case 2:
      printf("enter the limit\n");
      scanf("%d",&n);
      printf("enter the elements\n");
      for(i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }

      printf("enter position of the element to be deleted\n");
      scanf("%d",&pos);
      if(pos>=n+1)
      printf("deletion not possible");
      else
  {
      for(i=pos-1;i<n;i++)
      arr[i]=arr[i+1];
      printf("array after deletion\n");

      for(i=0;i<=n-1;i++)
     {
      printf("%3d",arr[i]);
     }
  }

  break;

  }

 case 3:

        printf("enter the limit\n");
        scanf("%d",&n);
        printf("enter the element\n");
        for(i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);
        }
        printf("you entered:");
        for(i=0;i<=n-1;i++)
    {
        printf("%d",arr[i]);
    }

   break;

 case 4:
         printf("enter the limit\n");
         scanf("%d",&n);
         printf("enter the elements\n");
        for(i=0;i<n;i++)
        {
         scanf("%d",&arr[i]);
        }
         printf("enter the element to be search\n");
         scanf("%d",&ch);
         for(i=0;i<n;i++)
          {
         if (arr[i]==ch)
         {

         flag=1;
         break;}}
         if (flag==1)
         {
         printf("the value is at %d position\n",i+1);
         }
         else
         {
         printf("value not found");
         }

break;


  case 5:exit(0);
  break;
}
}








