#Problem Name :- Player 
#Problem Code :- RRPLAYER
#Link :- https://www.codechef.com/problems/RRPLAYER

#include <iostream>
using namespace std;

int main() {
	long long int Test,Num,i,j;
	long double Song;
	cin>>Test;
	for(i=0;i<Test;i++)
	{
	    cin>>Num;
	    Song=0.0;
	    for(j=1;j<=Num;j++)
	    {
	        Song+=(double)((1.0*Num)/(1.0*j));
	    }
	    cout<<Song<<"\n";
	}
	return 0;
}
