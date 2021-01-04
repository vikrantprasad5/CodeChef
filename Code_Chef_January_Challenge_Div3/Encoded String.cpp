#include <bits/stdc++.h>
using namespace std;
string decode(string s)
{
    string letters="abcdefghijklmnop";
    for(int i=0;i<4;i++)
    {
        if(s[i]=='0')
        {
            letters=letters.substr(0,letters.size()/2);
        }
        else
        {
            letters=letters.substr(letters.size()/2,letters.size()/2);
        }
    }
    return letters;
}
string solve(string s)
{
    string res="";
    for(int i=0;i<s.size();i=i+4)
    {
        string temp=s.substr(i,4);
        res+=decode(temp);
    }
    return res;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
        int n;
        cin>>n;
        string s;
        cin>>s;  
        cout<<solve(s)<<endl;
	}
	return 0;
}
