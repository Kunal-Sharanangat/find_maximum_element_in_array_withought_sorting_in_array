#include<stdio.h>
void main()
{
	int a[5],max,i;
	printf("enter five elements:");
	max=a[0];
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("maximum element in array=%d",max);
}
