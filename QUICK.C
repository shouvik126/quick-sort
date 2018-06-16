#include<stdio.h>
#include<conio.h>
int ar[20];
int partition(int low ,int high)
{
	int temp,pivot=ar[low],i=low,j=high;
	while(i<j)
	{
		do
		{
			i++;
		}while(ar[i]<=pivot);
		do
		{
			j--;
		}while(ar[j]>pivot);

		if(i<j)
		{
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
	temp=ar[low];
	ar[low]=ar[j];
	ar[j]=temp;
	return j;

}
void quick_sort(int low,int high)
{       if(low<high)
	{       int i,pivot;
		pivot=partition(low,high);
		quick_sort(low,pivot);
		quick_sort(pivot+1,high);
	}
}
void main()
{
	int n,i;
	clrscr();
	printf("Enter how mauny no u want to enter:=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("A[%d]",i+1);
		scanf("%d",&ar[i]);
	}
	ar[n]=9999;//assume as a infinity
	printf("\nBefore sorting:=\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",ar[i]);
	}
	quick_sort(0,n);
	printf("\nAfter sorting:=\n");
	for(i=0;i<n;i++)
	{
		printf("%d,",ar[i]);
	}
	getch();
}