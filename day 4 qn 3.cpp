#include<iostream>
using namespace std;
int main()
{
	int i,
	n,a[100],b=0,p=0;
	cout<<"Enter total numebr of elements : ";
	cin>>n;
	cout<<"Enter your elements : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(int j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				b++;
			}
		}
		if(b==0)
		p++;
		b=0;
	}
	cout<<"priime : "<<p<<"composite"<<n-p;
}
