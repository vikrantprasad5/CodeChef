#include <bits/stdc++.h>
using namespace std;
int solve(vector<int>A,vector<int>B)
{
    int sumA=0;
    int sumB=0;
    for(int i=0;i<A.size();i++)
    {
        sumA+=A[i];
    }
    for(int i=0;i<B.size();i++)
    {
        sumB+=B[i];
    }
    int count=0;
    int i=0;
    int j=B.size()-1;
    while(i<A.size() && j>=0 && sumA<=sumB)
    {
        sumA=sumA-A[i]+B[j];
        sumB=sumB-B[j]+A[i];
        //swap(A[i],B[j]);
        count++;
        i++;j--;
    }
    if(sumA<=sumB)
    {
        return -1;
    }
    return count;
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
        int n,m;
        cin>>n>>m;
        vector<int>A(n);
        vector<int>B(m);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>B[i];
        }
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        cout<<solve(A,B)<<endl;
	}
	return 0;
}
