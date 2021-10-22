#Problem Name :- Your Name is Mine
#Problem Code :- NAME2
#Link :- https://www.codechef.com/problems/NAME2

#include<bits/stdc++.h>
char a[25001],b[25001];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",&a,&b);
		int j=0;
		if(strlen(a)<=strlen(b))
        {
            for(int i=0;i<strlen(b);i++)
            {
                if(a[j]==b[i])
                    j++;
            }
            if(j==strlen(a))
                printf("YES\n");
		    else
			    printf("NO\n");
        }
	    else {
		    for(int i=0;i<strlen(a);i++)
			{
				if(b[j]==a[i])
				j++;
			}
			if(j==strlen(b))
		    	printf("YES\n");
			else
			    printf("NO\n");
	    }
    }
	return 0;
}
