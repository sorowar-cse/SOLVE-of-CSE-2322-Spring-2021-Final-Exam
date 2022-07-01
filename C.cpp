
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, i;
    cin >> t;

    while(t--)
    {
        string str;
        cin >> str;
        vector <char> b;

        bool ans= true;

        for(char c : str)
        {
            if( (c==')') or (c==']') or (c=='}') )
            {
                if( !b.empty() and ( (c==')' and b.back()=='(') or
                                     (c==']' and b.back()=='[') or
                                     (c=='}' && b.back()=='{')) ) {
                    b.pop_back();
                }
                else
                {
                    ans= false;
                    break;
                }
            }
            else
                b.push_back(c);
        }

        if( ans and b.empty() )
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
