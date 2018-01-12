#include<bits/stdc++.h>
using namespace std;
string mul(string a,long long n)
{
    string b;
    long long carry=0,num;
    reverse(a.begin(),a.end());
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        num=(a[i]-'0')*n+carry;
        b+=(num%10)+'0';
        carry=num/10;
    }
    while(carry)
    {
        b+=(carry%10)+'0';
        carry/=10;
    }
    reverse(b.begin(),b.end());
    return b;
}
int main()
{
    string a;
    long long n;
    while(cin>>a>>n)
    {
        cout<<mul(a,n)<<endl;
    }
    return 0;
}