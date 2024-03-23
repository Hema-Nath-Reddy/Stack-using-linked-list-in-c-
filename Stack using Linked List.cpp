#include<iostream>
using namespace std;
struct node{
	int data;
	node* link;
};
class stack{
	node* head=NULL;
	bool isEmpty(){
		if(head==NULL){
			return true;
		}
		return false;
	}
	public:
		void push(int data){
			node* newnode=new node();
			newnode->data=data;
			newnode->link=head;
			head=newnode;
			cout<<"Push successful."<<endl;
		}
		void pop(){
			if(isEmpty()){
				cout<<"The stack is empty."<<endl;
			}else{
				node* temp=head;
				head=head->link;
				int element=temp->data;
				delete temp;
				cout<<element<<" has been deleted."<<endl;
			}		
		}
		void display(){
			if(isEmpty()){
				cout<<"The stack is empty."<<endl;
			}else{
				node* temp=head;
				cout<<"The stack is:"<<endl;
				while(temp!=NULL){
					cout<<temp->data<<endl;
					temp=temp->link;
				}
			}		
		}
};
int main(){
	stack s;
	int choice;
	do{
		cout<<endl<<"1. Push an element."<<endl;
		cout<<"2. Pop an element."<<endl;
		cout<<"3. Display the stack."<<endl;
		cout<<"4. Exit."<<endl<<endl;
		cout<<"Choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				int element;
				cout<<"Enter the element: ";
				cin>>element;
				s.push(element);
				break;
			case 2:
				s.pop();	
				break;
			case 3:
				s.display();
				break;
			case 4:
				cout<<"Exited.";
				break;
			default:
				cout<<"Enter your choice from 1 to 4."<<endl;
				break;
		}
	}while(choice!=4);
	return 0;
}
