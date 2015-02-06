#include <iostream>

using namespace std;

int main()
{
    int a[75][75], b[75][75],c[75][75];
    int x,y,i,j,m,n;


    cin>>x>>y;

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>a[i][j];
        }
    }

    cin>>m>>n;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }


        for(i=0;i<x;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=0;
                for(int k=0;k<m;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }

        for(i=0;i<x;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<c[i][j];
		if (j!=n-1) cout << " ";
		else continue;
            }
	cout << endl;
        }
    return 0;
}
