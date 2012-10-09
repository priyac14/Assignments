/* Write a program to implement bubble sort
Input: array of elements
Output: array of sorted elements
Date: 05/10/12
*/

#include<stdio.h>

void main() {

	int array[25],limit,temp,i,j;

	printf("enter the limit: ");
	scanf("%d",&limit);
	printf("Enter the numbers: ");

	for(i=0;i<limit;i++) {

		scanf("%d",&array[i]);
    }
	for(i=0;i<limit-1;i++) {

		for(j=i+1;j<limit;j++)

			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
	}
    printf("the sorted array is: ");

	for(i=0;i<limit;i++)

		printf("%d\t",array[i]);
}



