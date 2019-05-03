/* 2. Write a program to sort the elements in odd positions in descending order and elements in ascending order
Eg 1: Input : 13,2 4,15,12,10,5
      Output: 13,2,12,10,5,15,4
Eg 2: Input : 1,2,3,4,5,6,7,8,9
      Output: 9,2,7,4,5,6,3,8,1 
*/

#include<stdio.h>
int main()
{

int arr[100];
int size,temp,i,j;
printf("Enter the size of an array:\n");
scanf("%d",&size);
printf("Enter the element to sort:\n");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
/* Even Number sorting  */
for(i=0;i<size;i+=2)
{
for(j=0;j<size;j+=2)
{

if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}

/* Odd number Descending order */
for(i=1;i<size;i+=2)
{
for(j=1;j<size;j+=2)
{

if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}

printf("\n**********The Sorted Output Is*********");
for(i=0;i<size;i++)
{
printf("\n%d",arr[i]);
}
getch();
}

