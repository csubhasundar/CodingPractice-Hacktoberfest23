#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter %d elements ",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=n;i>1;i--)
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
	return 0;
}
