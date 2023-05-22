#include<iostream>
using namespace std;

int linearsearch(int arr[],int n, int val)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==val)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[]={2,4,5,6,7,8,9};
	int val=7;
	int n= sizeof (arr)/sizeof (arr[0]);

	int result=linearsearch(arr,n,val);
	
	cout<<"Elements in array are: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl;
	}
	
	cout<<"The value is: "<<val;
	cout<<endl;

	(result==-1)
	?cout<<"Element not present \n"
	:cout<<"Element present at index "<<result<<endl;

	return 0;
}











