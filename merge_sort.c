/*Program to implement merge sort
Input  : A list  of numbers
Output :Sorted list
Date   :08/10/2012*/

void merge(int * , int , int , int );
void merge_sort(int *, int , int );

#include<stdio.h>

void main() {

    int i,array[25],num;

    printf("\nEnter the number of elements to be sorted\n");
    scanf("%d",&num);

    printf("\nEnter the elements to be sorted\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    merge_sort(array,0,num-1); 

    printf("The sorted list is: ");
    for(i= 0;i<num;i++)
    {
        printf("%d\n",array[i]);
    }
}


void merge_sort(int *array, int left, int right)
{
    int mid = (left+right)/2;

    if(left<right)
    {
        merge_sort(array,left,mid);
        merge_sort(array,mid+1,right);
        merge(array,left,mid,right);
    }
}

void merge(int *array, int left, int mid, int right)
{

    int temp[right-left+1];

    int pos=0,left_pos = left,right_pos = mid + 1;

    while(left_pos<=mid && right_pos<=right)
    {
        if(array[left_pos]<array[right_pos])
        {
            temp[pos++]=array[left_pos++];
        }
        else
        {
            temp[pos++]=array[right_pos++];
        }
    }

    while(left_pos<=mid) {  
        temp[pos++]=array[left_pos++];
    }
         
    while(right_pos<=right) { 
        temp[pos++]=array[right_pos++];
    }
    
    int i;
    for(i =0;i<pos;i++)
    {
        array[i+left] = temp[i];
    }
    return;   

}
