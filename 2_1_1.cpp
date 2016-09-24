#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int a[100];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<N;i++)
	{
		if(a[i] == i)
		{
			cout<<i;
			return 0;
		}
	}
	cout << "N";
	return 0;
}
