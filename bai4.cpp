#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    double x;
    cin>>x;
    if (x<a[0]) cout<<fixed<<setprecision(2)<<x<<" ";
    for (int i=0;i<n;i++)
    {
        if (a[i]<=x && a[i+1]>x) cout<<fixed<<setprecision(2)<<a[i]<<" "<<x<<" ";
        else cout<<fixed<<setprecision(2)<<a[i]<<" ";
    }
    if (x>=a[n-1]) cout<<fixed<<setprecision(2)<<x<<" ";
}