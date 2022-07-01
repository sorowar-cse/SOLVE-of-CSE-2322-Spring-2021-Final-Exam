
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int A[n+32];
        for(int i= 0; i<n; i++)
            cin >> A[i];

        sort(A, A+n);

        int max= A[n-1], cnt= 0;
        for(int i= 0; i<n; i++)
            if(max==A[i])
            {max= A[i]; cnt++;}

        cout << max << " " << cnt << endl;

    }

}

