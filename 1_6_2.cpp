#include <iostream>
using namespace std;
#define N 0.00001
int main()
{
	int n,x,y;
	cin >> n >> x >> y;
	double i = (double)y/x;
	if(i - n >= 0)
	{
		cout<<"0"<<endl;
		return 0;
	 } 
	 else
	 {
	 	if(i - y/x < N)
	 	{
	 		cout<<n-y/x<<endl;
	 		return 0;
		 }
		 else{
		 	cout<<n-1-y/x<<endl;
		 }
	 }
}
