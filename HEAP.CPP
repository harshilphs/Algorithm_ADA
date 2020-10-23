#include<stdio.h>
#include<conio.h>
void heap_sort(int a[20],int n);
void heapify(int a[20],int n);
void adjust(int a[20],int i, int n);
void main()
{       clrscr();
	int i,n,a[20];
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter Elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	heap_sort(a,n);
	printf("Sorted array:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
}
void heap_sort(int a[20],int n)
{
	int i, temp;
	heapify(a,n);
	for(i=n;i>=2;i--)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		adjust(a,1,i-1);
	}
}
void heapify(int a[20],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	{
		adjust(a,i,n);
	}
}
void adjust(int a[20],int i,int n)
{
	int j, item;
	j=2*i;
	item=a[i];
	while(j<=n)
	{
		if((j<n)&&(a[j]<a[j+1]))
		{
			j++;
		}
		if(item>a[j])
		{
			break;
		}
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=item;
}
