#include<iostream>
using namespace std;

struct Node 
{
	int data;
	struct Node *prev;
	struct Node *next;
};

int main()
{
	struct Node *Head;
	struct Node *one = NULL;
	struct Node *two = NULL;
	struct Node *three = NULL;

	one = new Node;
	two = new Node;
	three = new Node;

	one->data=34;
	two->data=48;
	three->data=57;

	one->prev=NULL;
	one->next=two;

	two->prev=one;
	two->next=three;
	
	three->prev=two;
	three->next=NULL;

	Head=one;

	cout<<one<<endl;
	cout<<"Previous address of node one: "<<one->prev<<endl;
	cout<<"Value of node one: "<<one->data<<endl;
	cout<<"Next node address in one: "<<one->next<<endl;
	cout<<endl;

	cout<<two<<endl;
	cout<<"Previous address of node two: "<<two->prev<<endl;
	cout<<"Value of node two: "<<two->data<<endl;
	cout<<"Next node address in two: "<<two->next<<endl;
	cout<<endl;

	cout<<three<<endl;
	cout<<"Previous Node address in node three: "<<three->prev<<endl;
	cout<<"Value of Node three: "<<three->data<<endl;
	cout<<"Next node address in node three: "<<three->next<<endl;
	cout<<endl;

	return 0;
}

