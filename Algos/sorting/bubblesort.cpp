#include<iostream>
using namespace std;
void bubblesort(int a[])
{
	for(int i=0;i<5;i++)
	{
		for(int j=0; j<(5-i-1);j++) // most important line
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
}
int main()
{	
	int myarr[5];
	for(int i=0;i<5;i++)
	{
		cin>>myarr[i];
	}
	bubblesort(myarr);
	cout<<"after bubblesorting array is :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<<" ";
	}
	return 0;
}
