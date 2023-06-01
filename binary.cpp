#include<stdio.h>
#define SIZE 50
main()
{
	int arr[SIZE];
	int i,len,mid ,n,sind,eind;
	void binary(int arr[],int,int,int,int,int);
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
	  scanf("%d",arr[i]);
    }
    binary(arr,len,mid,n,sind,eind);
}
void binary(int arr[],int len,int mid,int n,int sind,int eind)
{
	sind=0;
	eind=len-1;
	while(sind<=eind)
	{
		mid=(sind+eind)/2;
		printf("\n mid=%d-%d\n",mid,arr[mid]);
		if(arr[mid]==n)
		{
			printf("\nLoc:%d!",mid);
			break;
		}
		if(arr[mid>n])
		{
		 eind=mid-1;
        }
		 else
		{
		 sind=mid+1;
	    }
	}
}
