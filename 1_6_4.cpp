#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int maxs=0;
	int a;
	while(N--)
	{
		cin >>a;
		if(maxs < a)
			maxs = a;
	 } 
	 cout << maxs;
}
