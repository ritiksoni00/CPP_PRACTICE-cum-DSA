#include<iostream>
using namespace std;

class CIrcualrqueue{
	private:
		int f;
		int r;
		int arr[5];
		int itemcount;
	public:
		CIrcualrqueue(){
			itemcount=0;
			f = -1;
			r = -1;
			for(int i=0; i<5;i++)
			{
				arr[i] = 0;
			}
			
		}
		bool isempty()
		{
			if(f ==-1 && r == -1)
				return true;
			else
				return false;
			
		}
		bool isfull()
		{
			if((r+1)%5==f)
				return true;
			else
				return false;
				
			
		}
		void enqueue(int val)
		{
			if(isfull())
			{
			
				cout<<"Queue is full"<<endl;
				return;
			}
			else if(isempty())
			{
				f=0;
				r=0;
				arr[r] = val;
				itemcount++;
			}else
			{
				r = (r+1)%5;// change in simple q : r++
				arr[r] = val;
				itemcount++;
				}
		}
		int dequeue()
		{
			int x;
			if(isempty())
			{
				cout<<"queue is empty"<<endl;
				return 0;
			}
			else if(f==r)
			{
				x=arr[f];
				arr[f]=0;
				r=-1;
				f=-1;
				return x;
				
			}
			else{
				x=arr[f];
				arr[f]=0;
				f=(f+1)%5;//change
				return x;
			}
			itemcount--;
		}
		int count()
		{
			return(itemcount);
		}
		void display()
		{
			cout<<"all vals are : "<<endl;
			for(int i=0;i<5;i++)
			{
				cout<<arr[i]<<" ";
			}
		}
};


int main()
{
	CIrcualrqueue q1;
	int option, value;
	do
	{
		cout<<"\n\nselect opration . 0 to EXIT."<<endl;
		cout<<"1. enqueue"<<endl;
		cout<<"2. dequeue"<<endl;
		cout<<"3. isfull"<<endl;
		cout<<"4. isempty"<<endl;
		cout<<"5. COUNT"<<endl;
		cout<<"6.display"<<endl;
		cout<<"7.clear screen"<<endl;
		
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				
				break;
			
			case 1:
				cout<<"enter item to enque= ";
				cin>>value;
				q1.enqueue(value);
				break;
				
			case 2:
				cout<<"dequeue op : "<<q1.dequeue()<<endl;
				break;
			case 3:
				if(q1.isempty())
				{
					cout<<"q is empty"<<endl;
				}
				else{
					cout<<"q is not empty"<<endl;
				}
				break;	
			case 4:
				if(q1.isfull())
				{
					cout<<"q is full"<<endl;
				}
				else{
					cout<<"q is not full"<<endl;
				}
				break;
			case 5:
				cout<<"count the digits :"<<q1.count()<<endl;
				break;
			case 6:
				cout<<"displayed"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				
				break;	
			default:
				cout<<"enter proper no."<<endl;
				break;
		}
		
		
	}
	while(option!=0);

	return 0;
}
//https://drive.google.com/file/d/1gkqMXGdTKwjtZhgrL5BSQlyenKZE_J7N/view?usp=sharing
