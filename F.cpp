
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

string graph[600];
ll visit[600][600];
ll row, col;
vector < pair<int,int> > src;
ll cnt= 0;
int dx[]= {1,-1,0,0};
int dy[]= {0,0,1,-1};

void dfs(pair <int,int> st)
{
    cnt++;
    visit[st.first][st.second]= 1;
    for(ll i= 0; i<4; i++)
    {
        ll x= st.first + dx[i];
        ll y= st.second + dy[i];

        if( (x>=0 && x<row) and (y>=0 && y<col) )
            if( graph[x][y]=='#' and visit[x][y]==0 )
                dfs( {x,y} );

    }
}


int main()
{
    ll tc= 1;
    cin >> tc;
    while(tc--)
    {
        cin >> row >> col;
        for(ll i= 0; i<row; i++)
            cin >> graph[i];

        for(ll i= 0; i<row; i++)
            for(ll j= 0; j<col; j++)
                if(graph[i][j] == '#')
                    src.push_back( {i,j} );

        ll ans= 0;
        for(auto i:src)
        {
            if(visit[i.first][i.second]==0)
            {
                cnt= 0;
                dfs(i);
                ans= max(ans, cnt);
            }
        }

        cout << ans << endl;
        src.clear();
        memset(visit, 0, sizeof(visit));

        for(ll i= 0; i<row; i++)
            graph[i].clear();

        ans = 0;
    }
    return 0;
}
