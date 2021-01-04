#include <bits/stdc++.h>
using namespace std;
void solve(int n,int k,int x0,int y0)
{
    int m=1;
    int y1,y2,y3,y4;
    int x1,x2,x3,x4;
    bool CW=true; 
    vector<pair<int,int>>pos;
    if(y0==x0)
    { 
        cout<<n<<" "<<n<<endl;
        return;
    }
    else if(y0<x0)//ACW
    { 
        //EAST 
        x1=n;
        y1=x1+1*(y0-x0); 
        pos.push_back({x1,y1}); 
        //NORTH
        y2=n;
        x2=y2-1*(x1-y1);
        pos.push_back({x2,y2});
        //WEST
        x3=0;
        y3=x3+1*(y2-x2);
        pos.push_back({x3,y3});
        //SOUTH
        y4=0;
        x4=y4-1*(x3-y3);
        pos.push_back({x4,y4});

        k--;
        int index=k%4;
        cout<<pos[index].first<<" "<<pos[index].second<<endl;
    }
    else//CW
    { 
        //NORTH
        y1=n;
        x1=y1+1*(x0-y0);
        pos.push_back({x1,y1});
        //EAST
        x2=n;
        y2=x2-1*(y1-x1);
        pos.push_back({x2,y2});
        //SOUTH
        y3=0;
        x3=y3+1*(x2-y2);
        pos.push_back({x3,y3});
        //WEST
        x4=0;
        y4=x4-1*(y3-x3);
        pos.push_back({x4,y4});
        k--;
        int index=k%4; 
        cout<<pos[index].first<<" "<<pos[index].second<<endl;
    }
    return;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
        int n,k,x,y;
        cin>>n>>k>>x>>y;
        solve( n, k, x, y); 
	}
	return 0;
}
