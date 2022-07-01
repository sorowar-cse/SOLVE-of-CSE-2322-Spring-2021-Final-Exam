
#include<bits/stdc++.h>
using namespace std;

long long int i, j;

int main()
{
    long long int n;
    while(cin >> n)
    {
        long long int ok= n;
        vector <long long int> v;
        for(i= 2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
                while(n%i==0)
                    n/= i;
            }
        }

        if(n>1)
            v.push_back(n);

        if( (v.size()==2) and (ok==v[0]*v[1]) )
            {
                cout << ok << " is a marvelous number, factors are " << v[0] << " and " << v[1] << endl;
            }

        else
            cout << ok << " is not a marvelous number" << endl;
    }
    return 0;
}
