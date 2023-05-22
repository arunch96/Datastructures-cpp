#include<iostream>
using namespace std;
#define size 100

int main()
{
	int arr[size],start,end,mid,i,num,target;

	cout<<"Enter the array size: ";
	cin>>num;

	cout<<"Enter the values in the array: \n";
	for(i=0;i<num;i++)
	{
		cout<<"arr["<<i<<"]= ";
		cin>>arr[i];
	}

	start=0;
	end=num-1;

	cout<<"Enter the value to find on the target: ";
	cin>>target;

	while(start<=end)
	{
		mid=(start+end)/2;

	if(arr[mid]==target)
	{
		cout<<"Element found at index: "<<(mid);
		cout<<endl;
		exit(0);
	}
	else if(target > arr[mid])
	{
		start=mid+1;
	}
	else if(target < arr[mid])
	{
		end=mid-1;
	}
	}

	cout<<"Element not found"<<endl;
	return 0;
}	
