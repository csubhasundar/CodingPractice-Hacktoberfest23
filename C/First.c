#include<stdio.h>
void main()
{
	int a[5],n,i,j,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=5;i>1;i--)
	{
		for(j=0;j<i-1;j++)
		{
		if(a[j]>a[j+1])
		{
			temp = a[j+1];
			a[j+1] = a[j];
			a[j] = temp;
		}
	    }
	}

	printf("Array after sorting\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
