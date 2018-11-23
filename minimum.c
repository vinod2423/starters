#include<stdio.h>
int main()
{
	int n;
	printf("enter size of the array\n");
	scanf("%d",&n);
	int a[n],min,i;
	printf("enter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("Minimum number in array is %d",min);
}
