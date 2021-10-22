#Problem Name :- Polygon Relationship
#Problem code :- POLYREL
#Link :- https://www.codechef.com/problems/POLYREL

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n, temp,temp1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>temp>>temp1;
		}
		ll ans=n;
		while(n>=6)
		{
			n/=2;
			ans+=n;
		}
		cout<<ans<<endl;
	}
	return 0;
}