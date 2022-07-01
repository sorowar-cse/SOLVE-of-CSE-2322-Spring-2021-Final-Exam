#include<iostream> //For my Machine
#include<bits/stdc++.h> //For Contest
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
#define pb         push_back
#define ppb        pop_back
#define yes        cout << "Yes" << endl
#define no         cout << "No" << endl
#define Yes        cout << "YES" << endl
#define No         cout << "NO" << endl
#define fr0(i,n)   for(ll i= 0; i<n; i++)
#define fr1(i,n)   for(ll i= 1; i<=n; i++)
#define kocu ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);



const int MAXSIZE=1e6+10;

const int MOD=1e9+7;
ll mod(ll a)
{
    a%= MOD;
    if(a<0)
        a+= MOD;
    return a;
}

const double PI = 2*acos(0.0);
#define mset(arr) memset(pq, 0, sizeof(pq)); // to set arr values = 0

string Summation(string n,string s)
{
    if(n.size() > s.size())
        swap(n, s);

    string str;
    int l_n = n.size();
    int l_s = s.size();

    reverse(n.begin(),n.end());
    reverse(s.begin(),s.end());

    int carry = 0;
    for(int i=0; i<l_n; i++)
    {
        int sum = ((n[i]-'0')+(s[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    for(int i = l_n; i<l_s; i++)
    {
        int sum = ((s[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if(carry)
        str.push_back(carry+'0');

    reverse(str.begin(),str.end());

    return str;
}



/*                                   || Main Function ||                                    */
int i, j;
string ok[60100];

void fib()
{
    ok[0]= "0";
    ok[1]= "1";

    for(i= 2; i<6000; i++)
        ok[i]= Summation(ok[i-1], ok[i-2]);
}

int main()
{
    fib();

    while(1)
    {
        int n;
        cin >> n;
        //int A[n+32];

        if(n==0)
            cout << 2 << endl;
        else if(n>0)
            cout << Summation(ok[n+1], ok[n-1]) << endl;
        else
            break;

    }
    return 0;
}

