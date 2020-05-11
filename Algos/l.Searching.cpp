#include<iostream>

using namespace std;
void linearsearch(int a[], int n)
{
	int temp=-1;
	for(int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			cout<<"found at pos : "<<i<<endl;
			temp=0;
		}
	}
	if(temp=-1)
	{
		cout<<"no element found"<<endl;
	}
}
int main()
{
	int num;
	int arr[5]={1,2,3,4,5};
	cout<<"eneter element to find"<<endl;
	cin>>num;
	linearsearch(arr,num);
	return 0;
	
	
	
}
