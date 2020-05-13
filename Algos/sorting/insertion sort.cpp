#include<iostream>
using namespace std;
void insertionsort(int arr[])
{ 
	int j=0;
	int key=0;
	
	for(int i=1;i<5;i++)
	{
		key = arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]= arr[j];
			j=j-1;
		}
		arr[j+1]=key;	
	}
}
int main()
{
	int myarr[5];
	cout<<"Enter my array element :"<<endl;
	for(int i =0; i<5;i++)
	{
		cin>>myarr[i];
	}
	
	cout<<"before sorting : "<< endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<< " ";
	}
	insertionsort(myarr);
	cout<<endl<<"after sorting : "<< endl;
	for(int i=0;i<5;i++)
	{
		cout<<myarr[i]<< " ";
	}	

	return 0;
}
