#include<stdio.h>
#include<stdlib.h>
void counting(int* a,int n)
{
	int m=a[0];
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>m)
		{
			m=a[i];
		}
	}
	int* count=(int*)calloc(m+1,sizeof(int));
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=1;i<=m;i++)
	{
		count[i]+=count[i-1];
	}
	int* op=(int*)malloc(n*sizeof(int));
	for(i=n-1;i>=0;i--)
	{
		op[count[a[i]]-1]=a[i];
		count[a[i]]--;
	}
	for(i=0;i<n;i++)
	{
		a[i]=op[i];
	}
	free(op);
	free(count);
	
}
void print(int* a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	counting(a,n);
	print(a,n);
	
}





