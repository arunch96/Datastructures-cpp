#include<iostream>
using namespace std;
#define size 5

class queue
{
	int arr[size];
	int rear;
	int front;

	public:
	queue()
	{
		front=rear=-1;
	}

	void enqueue(int x);
	int dequeue();
	void display();
};

void queue::enqueue(int x)
{
	if(front==-1)
	{
		front++;
	}
	else if(rear==size-1)
	{
		cout<<"Queue is full"<<endl;
	}
	else
	{
		arr[++rear]=x;	
	}
}

int queue::dequeue()
{
	return arr[++front];
}

void queue::display()
{
	for(int i=front;i<=rear;i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main()
{
	queue obj;
	obj.enqueue(48);
	obj.enqueue(78);
	obj.enqueue(67);
	obj.enqueue(96);
	obj.display();
	obj.dequeue();

	return 0;
}








