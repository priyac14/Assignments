/*Program to implement insertion sort
Input : Array of unsorted elements
Output: array of sorted elements
Date : 05/10/12
 */

#include<stdio.h>

void main() {

    int limit,array[20],index1,index2,key;

    printf("Enter the no. of elements to be sorted\n");
    scanf("%d",&limit);

    printf("\nEnter the elements to be sorted\n");
    for(index1=0;index1<limit;index1++)
    {
        scanf("%d",&array[index1]);
    }
    
    printf("The unsorted array is: ");
    for(index1=0;index1<limit;index1++)
    {
        printf("%d\t\n",array[index1]);
    }



    for(index1=1;index1<limit;index1++)
    {
        key=array[index1];
        index2=index1-1;
        while(key<array[index2] && index2>=0)
        {
            array[index2+1] = array[index2];
            index2 = index2-1;
        }
        array[index2+1]=key;
    }

    printf("The sorted array is: ");
    for(index1=0;index1<limit;index1++) {
        printf("%d \t",array[index1]);
    }
    
}

