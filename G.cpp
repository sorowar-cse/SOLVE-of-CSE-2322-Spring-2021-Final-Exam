#include<bits/stdc++.h>
using namespace std;

vector<pair<int, string>> v;

bool cmp(const pair<int, string> &A,  const pair<int, string> &B)
{
    if(A.first==B.first)
    {
        return A.second<B.second;
    }
    return A.first>B.first;
}


int main()
{
    int t= 1, n;
    cin>>n;
    while(t--)
    {

        int a, b, c, d;
        string s;
        for(int i= 0; i<n; i++)
        {
            cin >> s >> a >> b >> c >> d;
            int ok= a+b+c+d;

            v.push_back({ok,s});
        }

        sort(v.begin(), v.end(), cmp);
        //reverse(v.begin(), v.end());


        for(int i= 0; i<n; i++)
            cout << v[i].second << " " << v[i].first << endl;
    }

    return 0;
}
