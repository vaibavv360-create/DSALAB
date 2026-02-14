#include<stdio.h> 

int binarysearch(int arr[],int n, int key)
	{
	
		int low=0,high=n-1,mid;
		while(low<=high)
		{
			mid=(low+high)/2;
			if (arr[mid]==key)
			return mid;
			else if(arr[mid]<key)
			    low=mid+1;
			else
			    high=mid-1;
			    
		}
		return -1;
	}
	 	 	    

	 int main()
	 {
	 		int n,i,key,result;
     		printf("Enter number of elements:");
	 		scanf("%d",&n);
	 		int arr[n];
	 		printf("Enter %d sorted elements:\n",n);
	 		for(i=0;i<n;i++)
	 		scanf("%d",&arr[i]);
	 		printf("Enter the element to search:");
	 		scanf("%d",&key);
	 		result=binarysearch(arr,n,key);
	 		if(result !=-1)
	 		   printf("Enter found at index %d\n",result);
	 		else 
			   printf("Enter not found\n",result);
			   return 0;
	 
}
