#include<iostream>
#include<string>

using namespace std;
class stack{  
	private:
		int top;
		int arr[5];
		
	public:
		stack()
		{
			top = -1;
			for(int i = 0 ; i < 5; i++)
			{
				arr[i] = 0;
			}	
		}
		bool isempty(){
			if(top==-1)	
				return true;
			else
				return false;
				
		}
		bool isfull(){
			if(top==4)	
				return true;
			else
				return false;			
			
			
		}
		//push method
		void push(int pushval)
		{
			if(isfull())
			{
				cout<<"overflow condition"<<endl;
			}
	
			else
			{	top++;
				arr[top]= pushval;
			
			}
		}
		
		
		//pop method
		int pop()
		{
		
			if(isempty())
			{
				cout<<"underflow condition"<<endl;
				return 0;
				
			}
			else
			{	
				int pv = arr[top];
				arr[top]=0;
				top--;
				return pv;
			}
		
		}
		int count()//smallest method
		{
			return(top+1);
		}
		
		int peek(int pos)
		{
			if(isempty())
			{
				cout<<"underflow condition"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
				
			}
		}
		void change(int pos, int val)
		{
			arr[pos] = val;
			cout<<"value change at given loc"<<endl;
			
		}
		void display()
		{
			cout<<"stack values are"<<endl;
			for(int i = 0;i<=4; i++)
			{
				cout<<arr[i]<<endl;
			}
		}
	
};
int main()
{
	stack s1;
	int option, position,value;
	do{
		cout<<"select option . for exit press 0."<<endl;
		cout<<"1.push()"<<endl;
		cout<<"2.pop()"<<endl;
		cout<<"3.isempty()"<<endl;
		cout<<"4.isfull()"<<endl;
		cout<<"5.peek()"<<endl;
		cout<<"6.count()"<<endl;
		cout<<"7.change()"<<endl;
		cout<<"8.display()"<<endl;
		cout<<"9. clear screan"<<endl;
		
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"push value = "<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"poped value: "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isempty())
					cout<<"full"<<endl;
				else
					cout<<"not full"<<endl;
			case 4:
				if(s1.isempty())
					cout<<"empty"<<endl;
				else
					cout<<"not empty"<<endl;
			//you can do it by yourself;
			
			case 9:
				system("cls");
				break;
			default:
				cout<<"enter proper option"<<endl;
		}
			
						
	}while(option!=0);
		
	
	return 0;
};
