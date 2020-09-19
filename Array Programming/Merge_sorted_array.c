/*Merging to sorted array and store the value in a third array*/

#include<stdio.h>
int main()
{
   int arr1[20],arr2[20],arr3[40],i=0,j=0,k=0,max1,max2;

   printf("Enter the no of elements in list 1:=:");
   scanf("%d",&max1);
   printf("Input elements in sorted order\n");

   for(i=0;i<max1;i++)
    {
        printf("Enter the element %d:=",i+1);
       scanf(" %d",&arr1[i]);
   }

   printf("Enter the no of elements in list 2:=");
   scanf("%d",&max2);
   printf("Input elements in sorted order\n");

   for(i=0;i<max2;i++)
   {
       printf("Enter the element %d:=",i+1);
       scanf(" %d",&arr2[i]);
   }

     /*MERGING*/
   i=0;
   while((i<max1) && (j<max2))
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++]=arr1[i++];

      }

      else
      {
            arr3[k++]=arr2[j++];
      }

   }

   while(i<max1){
    arr3[k++]=arr1[i++];
   }


   while(j<max2){
    arr3[k++]=arr2[j++];
   }


    /*MERGING COMPLETED*/
    printf("List1:\n");
    for(i=0;i<max1;i++){
        printf(" %d\t",arr1[i]);
    }
    printf(" \n List2:\n");
    for(i=0;i<max2;i++){
        printf(" %d\t",arr2[i]);
    }

   printf("\n List 3 after merging:\n",i+1);
    for(i=0;i<max1+max2;i++){
       printf(" %d\t",arr3[i]);
    }

    printf("\n");
    return(0);
}


/*
Enter the no. of elements in list 1: 3
Input elements in sorted order
Enter the element 1: 5
Enter the element 2: 7
Enter the element 3: 712
Enter the no. of elements in list 2: 2
Input elements in sorted order
Enter the element 1: 2
Enter the element 2: 5
List 1:
5 7 12
List 2:
2 5
List 3 after merging:
2 5 5 7 12
Execution time: 20.368s


*/
