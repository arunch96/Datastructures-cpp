#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

int main()
{
	struct Node *one = NULL;
	struct Node *two = NULL;
	struct Node *three = NULL;

	one = new Node;
	two = new Node;
	three = new Node;

	one->data=15;
	two->data=23;
	three->data=54;

	one->next=two;
	two->next=three;
	three->next=NULL;

	cout<<one<<endl;
	cout<<one->data<<endl;
	cout<<one->next<<endl;

	cout<<two<<endl;
	cout<<two->data<<endl;
	cout<<two->next<<endl;

	cout<<three<<endl;
	cout<<three->data<<endl;
	cout<<three->next<<endl;

	return 0;
}

