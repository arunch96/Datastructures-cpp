#include<iostream>
#include<string>
using namespace std;

class stack
{
	private:
		int top;
		int arr[5];

	public:
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				arr[i]=0;
			}
		}

		bool isempty()
		{
			if(top==-1)
				return true;
			else
				return false;
		}

		bool isfull()
		{
			if(top==4)
				return true;
			else
				return false;
		}

		void push(int val)
		{
			if(isfull())
			{
				cout<<"Stack overflow"<<endl;
			}
			else
			{
				top++;
				arr[top]=val;
			}
		}

		int pop()
		{
			if(isempty())
			{
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else
			{
				int popvalue=arr[top];
				arr[top]=0;
				top--;
				return popvalue;
			}
		}

		int count()
		{
			return (top+1);
		}

		int peek(int pos)
		{
			if(isempty())
			{
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}

		void change(int pos, int val)
		{
			arr[pos]=val;
			cout<<"Value that changed: "<<pos<<endl;
		}

		void display()
		{
			cout<<"All elements in the stack are:\n ";
			for(int i=4;i>=0;i--)
			{
				cout<<arr[i]<<endl;
			}
		} 
};

int main()
{
	stack s1;
	int position,value,option;

	do
	{
		cout<<"Select the option that mention below to perform the operation \"Also press 0 to exit:\" "<<endl;
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.isempty()"<<endl;
		cout<<"4.isfull()"<<endl;
		cout<<"5.peek()"<<endl;
		cout<<"6.count()"<<endl;
		cout<<"7.change()"<<endl;
		cout<<"8.display()"<<endl;
		cout<<"9.clear_screen"<<endl;

		cin>>option;

		switch(option)
		{
			case 0:
				break;

			case 1:
				cout<<"Enter the value to push in to the stack: ";
				cin>>value;
				s1.push(value);
				break;

			case 2:
				cout<<"pop-function called- popped value is: "<<s1.pop()<<endl;
				break;

			case 3:	
				if(s1.isempty())
				{
					cout<<"Stack is empty"<<endl;
				}
				else
				{
					cout<<"Stack is not empty"<<endl;
				}
				break;

			case 4:
				if(s1.isfull())
                                {
                                        cout<<"Stack is full"<<endl;
                                }
                                else
                                {
                                        cout<<"Stack is not full"<<endl;
                                }
                                break;

			case 5:
				cout<<"Enter position of item that you want to peek: "<<endl;
				cin>>position;
				cout<<"peek-function called \"Value at position \""<<position<<" is: "<<s1.peek(position)<<endl;
				break;

			case 6:
				cout<<"count function called \"No of values in the count are:\" "<<s1.count()<<endl;
				break;

			case 7:
				cout<<"Change function called\n";
				cout<<"Enter the position of item to change: ";
				cin>>position;
				cout<<endl;
				cout<<"Enter value of the item to change: ";
				cin>>value;
				cout<<endl;
				s1.change(position,value);
				break;

			case 8:
				cout<<"Display function called: "<<endl;
				s1.display();
				break;

			case 9:
				system("cls");
				break;

			default:
				cout<<"Invalid selection"<<endl;
		}		

	}while(option!=0);

return 0;
}
