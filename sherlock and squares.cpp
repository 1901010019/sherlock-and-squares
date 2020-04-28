#include<iostream>
#include<math.h>
using namespace std;
typedef long long LL;
int main()
{
	int t, i;
	LL a, b, j;
	cin>>t;
	for(i=0; i<t; i++)
	{  
	   int count =0; 
	   cin>>a>>b;
		for(j=sqrt(a); j<=sqrt(b); j++)
		{
			LL k=j*j;
			if(k>=a and k<=b)
			count++;
		}
		cout<<count;
	}

	return 0;
}
