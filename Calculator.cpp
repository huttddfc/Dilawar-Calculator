#include<iostream>
using namespace std;
int main()
{
	int choice;
	float a,b;
	cout<<"~~~~~ Dilawar's Calculator ~~~~~"<<endl;
	do{
		cout<<endl<<"Operation Instructions"<<endl<<endl;
		cout<<"Enter 1 for addition"<<endl<<"Enter 2 for subtraction"<<endl<<"Enter 3 for multiplication"<<endl<<"Enter 4 for division"<<endl<<"Enter 5 for exit"<<endl;
		cout<<endl<<"Enter Your Opperation: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<endl<<"You Selected Addition"<<endl;
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			cout<<"Your answer is "<<a+b<<endl;
			break;
			case 2:
			cout<<endl<<"You Selected Subtraction"<<endl;
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			cout<<"Your answer is "<<a-b<<endl;
			break;
			case 3:
			cout<<endl<<"You Selected Multiplication"<<endl;
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			cout<<"Your answer is "<<a*b<<endl;
			break;
			case 4:
			cout<<endl<<"You Selected Division"<<endl;
			cout<<"Enter first number: ";
			cin>>a;
			cout<<"Enter second number: ";
			cin>>b;
			cout<<"Your answer is "<<a/b<<endl;
			break;
		}
	}
	while(choice!=5);
	cout<<endl<<"Thanks For Using Dilawar's Calculator "<<endl<<"~~~~~~~~~~~~ Good Byee!! ~~~~~~~~~~~~"<<endl;
}
