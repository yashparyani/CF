#include<bits/stdc++.h>
using namespace std;

int solve(int a){
    int ans = INT_MAX;
    while(a!=0)
    {
        ans = min(ans,a%10);
        a/=10;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        cout<<solve(a)<<endl;
    }
}