#include<bits/stdc++.h>
using namespace std;

string A= "00";
string B= "010";
string C= "011";
string D= "1110";
string E= "10";
string F= "11000010";
string G= "11000011";
string H= "11010";
string I= "1111";
string J= "11001000";
string K= "11001001";
string L= "110011";
string M= "11001010";
string N= "110001";
string O= "11001011";
string P= "11011011";
string Q= "11000001";
string R= "11011110";
string S= "1101110";
string T= "11011111";
string U= "11011010";
string V= "11011000";
string W= "110000000";
string X= "110000001";
string Y= "110110010";
string Z= "110110011";

int main()
{
    while(1)
    {
        string Ans= "";
        string ok;
        cin >> ok;
        if(ok=="#")
            break;
        else
        {
            for(int i= 0; ok[i]!='\0'; i++)
            {
                if(ok[i]=='A')
                    Ans+= A;
                else if(ok[i]=='B')
                    Ans+= B;
                else if(ok[i]=='C')
                    Ans+= C;
                else if(ok[i]=='D')
                    Ans+= D;
                else if(ok[i]=='E')
                    Ans+= E;
                else if(ok[i]=='F')
                    Ans+= F;
                else if(ok[i]=='G')
                    Ans+= G;
                else if(ok[i]=='H')
                    Ans+= H;
                else if(ok[i]=='I')
                    Ans+= I;
                else if(ok[i]=='J')
                    Ans+= J;
                else if(ok[i]=='K')
                    Ans+= K;
                else if(ok[i]=='L')
                    Ans+= L;
                else if(ok[i]=='M')
                    Ans+= M;
                else if(ok[i]=='N')
                    Ans+= N;
                else if(ok[i]=='O')
                    Ans+= O;
                else if(ok[i]=='P')
                    Ans+= P;
                else if(ok[i]=='Q')
                    Ans+= Q;
                else if(ok[i]=='R')
                    Ans+= R;
                else if(ok[i]=='S')
                    Ans+= S;
                else if(ok[i]=='U')
                    Ans+= U;
                else if(ok[i]=='T')
                    Ans+= T;
                else if(ok[i]=='V')
                    Ans+= V;
                else if(ok[i]=='W')
                    Ans+= W;
                else if(ok[i]=='X')
                    Ans+= X;
                else if(ok[i]=='Y')
                    Ans+= Y;
                else if(ok[i]=='Z')
                    Ans+= Z;
            }
            cout << Ans << endl;
        }
    }

    return 0;
}

