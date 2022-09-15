//recursively calculating sum of digits until sum ends up to a single digit number
#include <bits/stdc++.h>
using namespace std;
int digitalRoot(int n){
    if(n<10)
    return n;
    n=n%10+digitalRoot(n/10);
    return (n<10)?n:digitalRoot(n);
}
int main()
{
    int n=0;
    cin>>n;
    cout<<digitalRoot(n)<<endl;
    return 0;
}