#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int element,i,loc,size,n,j,choice;
    printf("1. Inserting an Element in an Array\n");
    printf("2. Deleting an Element in an Array\n");
    printf("Select your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter %d array elements\n",size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before Insertion: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to insert\n");
        scanf("%d",&element);
        printf("Enter a position to insert an element %d\n",element);
        scanf("%d",&loc);
        loc--;
        for(i=size-1;i>=loc;i--)
        {
            a[i+1]=a[i];
        }
        a[loc]=element;
        printf("List after Insertion: ");
        for(i=0;i<size+1;i++)
        {
            printf("%d ",a[i]);
        }
         break;
    case 2:
        printf("Enter the size of an array\n");
        scanf("%d",&size);
        printf("Enter elements\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("List before deletion\n");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\nEnter an element to delete\n");
        scanf("%d",&n);
        for(i=0;i<size;i++)
        {
            if(a[i]==n)
            {
                for(j=i;j<(size-1);j++)
                {
                    a[j]=a[j+1];
                }
                break;
            }
        }
        printf("List after deletion\n");
        for(i=0;i<(size-1);i++)
        {
            printf("%d ",a[i]);
        }
        break;
    default:
        printf("Wrong choice, Please try again later");
    }
    return 0;
}

/* Output

1. Inserting an Element in an Array
2. Deleting an Element in an Array
Select your choice : 1
Enter the size of an array
3
Enter 3 array elements
123
1
1
List before Insertion: 123 1 1 
Enter an element to insert
5
Enter a position to insert an element 5
2
List after Insertion: 123 5 1 1
 */
