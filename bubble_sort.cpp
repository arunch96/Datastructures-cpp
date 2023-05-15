#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void printbbst(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	int arr[]={9,4,8,6,2,3,1,5};
	int val=sizeof arr/sizeof arr[0];
	bubblesort(arr,val);
	printbbst(arr,val);
	return 0;
}
