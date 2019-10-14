#include<iostream>
using namespace std;

	#define max 5
	int top =-1,ch,x,con;
	int stack[max];

void push();
void pop();
void display();

	int main()
	{

		do
		{
			
		cout<<"----------------    STACK OPEARTIONS  -----------------------\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.peek\n";
		cout<<"4.exit\n";
		cout<<"enter your choice\n";
		cin>>ch;
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: 
				cout<<"exit\n";
					break;
			default:
				cout<<"invalid selection\n";
		}
		
			}while(ch!=4);
				
	}
			
						void push()
						{
						if(top>=(max-1))
						{
							cout<<"stack overflow \n";
								
						}
						else
							{
							top++;
							cout<<"enter the data \n";
							cin>>x;
							stack[top]=x;
							}	
						}
					
							void pop()
							{
								if(top==-1)
								{
									cout<<"stack is underflow\n";
								}
								else
								{
									top=top-1;
								}
							}
						void display()
						{
								if(top==-1)
								{
								cout<<"stack is empty\n";
									
								}
								else
								{
								         int i;
										for(i=0;i<=top;i++)
										{
										cout<<stack[i]<<endl;	
										}	
								}	
						}
						
