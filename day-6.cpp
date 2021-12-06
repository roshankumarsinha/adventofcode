#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int i,r=0,j;
    long long a1[9]={0};
    for(i=0;i<n.length();i++){
        if(n[i]==','){
            a1[r]++;
            r=0;
        }
        else{
            r=(r*10)+(n[i]-'0');
        }
    }
    a1[r]++;
    for(i=0;i<256;i++){
        long long x=a1[0];
        for(j=1;j<9;j++){
            a1[j-1]=a1[j];
        }
        a1[8]=x;
        a1[6]=a1[6]+x;
    }
    long long sum=0;
    for(i=0;i<9;i++){
        sum=sum+a1[i];
    }
    cout<<sum;
    return 0;
}
