#include<stdio.h>
int main()
{
	int search,i,n,found=0;
	printf("Enter the number of element in array:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element of array:\n");
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search:");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			found=1;
			printf("Element %d found at index %d\n",search,i);
			break;
		}
	}
	if(!found)
	{
		printf("Element %d not found in the array\n",search);
	}
	return 0;
}
