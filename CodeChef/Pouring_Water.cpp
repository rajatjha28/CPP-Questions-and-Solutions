#Problem Name :- Pouring Water
#Problem Code :- POUR1
#Link :- https://www.codechef.com/problems/POUR1

#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int GCD(int a, int b)
{
  int t;
  while(b != 0)
  {
    t = a % b;
    a = b;
    b = t;
  }
 
  return a;
}
int pour(int a,int b,int c)
{
	int step;
	step=1;
	int l,r;
	l=a;
	r=0;
	while(l!=0 || r!=0)
	{
		if(r==b)
		{
			r=0;
		}
		else if(l!=0)
		{
			const int rEmpty=b-r;
			if(l>rEmpty)
			{
				r=b;
				l-=rEmpty;
			}
			else
			{
				r+=l;
				l=0;
			}
		}
		else
		{
			l=a;
		}
		++step;
		if(l==c || r==c)
		{
			return step;
		}
	}
	
	return -1;
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll step=-1;
		if(c<=a || c<=b)
		{
			if(a==c || b==c)
			{
				step=1;
			}
			else if(a==b && a!=c)
			{
				step=-1;
			}
			else
			{
				int gcd1=GCD(a,b);
				if((c%gcd1)==0)
				{
					int step1,step2;
					step1=pour(a,b,c);
					step2=pour(b,a,c);
					if(step1>step2)
					{
						step=step2;
					//	cout<<step2<<endl; Check the count of Step2
					}
					else
					{
						step=step1;
					} //cout<<step1<<endl; Check the count of Step1
				}
			}
		}
		cout<<step<<endl;//"-1\n";
	}
	return 0;
}