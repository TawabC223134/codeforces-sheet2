#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i,n,f=1;
    cin >> n;
    int ar1[n],ar2[n];
    for(i=0;i<n;i++)
    {
        cin >> ar1[i];

    }
    sort(ar1,ar1+n);
    for(i=0;i<n;i++)
    {
        cin >> ar2[i];
    }
    sort(ar2,ar2+n);
    for(i=0;i<n;i++)
    {
        f=1;
        if(ar1[i]!=ar2[i])
        {
          f=0;
          break;
        }
    }
    if(f==1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}

