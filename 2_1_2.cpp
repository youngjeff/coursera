#include<iostream>
using namespace std;
int a[4];
int temp[5];
int dfs(int n)
{
	if(n > 4)
	{
		return 0;
	}
	if(n == 4)
	{
		if ((a[1]==1) + (a[3]==4) + (a[0]==3) == 1)
		{
			if ((a[3]==1) + (a[1]==4) + (a[0] == 2) + (a[2]==3) == 1)
			{
				if ((a[3] == 4) + (a[1] == 3) == 1)
				{
					if((a[0] == 1) + (a[2] == 4) + (a[3] == 2)+ (a[1]==3) == 1)
					{
						cout<<a[0]<< endl<<a[1]<< endl<<a[2]<< endl<<a[3]<<endl;
					}
				}
			}
		}
	}
	else
	{
		for(int i=1;i<5;i++)
		{
			if(temp[i]==1)
			{
				a[n]=i;
				temp[i]=0;
				dfs(n+1);
				temp[i]=1;
			}
		}
	}
}
int main()
{
	for(int i=0;i<5;i++)
		temp[i]=1;
	dfs(0); 
}
