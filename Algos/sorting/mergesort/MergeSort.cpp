#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
	int i=l;
	int j=m+1;
	int k=l;
	
	int temp[5];
	
	while(i<=m && j<=r)
	{
		if(arr[i]<=arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=m)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	for(int s=l;s<=r;s++)
	{
		arr[s] = temp[s];
	}
}


void MS(int arr[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		MS(arr,l,m);
		MS(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main()
{
	int a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
	
	MS(a,0,4);
	cout<<"mergesorted"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}	
	
	
	return 0;
}
