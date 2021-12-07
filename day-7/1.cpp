#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int i,r=0,j;
    vector<int>a;
    for(i=0;i<n.length();i++){
        if(n[i]==','){
            a.push_back(r);
            r=0;
        }
        else{
            r=(r*10)+(n[i]-'0');
        }
    }
    a.push_back(r);
    long long ans=999999999999;
    for(i=0;i<10000;i++){
        long long sum=0;
        for(j=0;j<a.size();j++){
            sum=sum+abs(i-a[j]);
        }
        if(sum<ans){
            ans=sum;
        }
    }
    cout<<ans;
    return 0;
}
