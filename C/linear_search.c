#include<stdio.h>
void main()
{
	int a[10],n,i,ele;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter element to be searched : ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
		printf("Element found at index %d",i);
		break;	
		}
		else if(i==n-1&&a[i]!=ele)
		printf("Element not found");
}
}