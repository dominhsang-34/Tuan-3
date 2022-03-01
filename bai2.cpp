#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    std::cin>>n;
    double a[n];
    for (int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    sort(a+0,a+n);
    for (int i=n-1;i>=0;i--) std::cout<<std::fixed<<setprecision(2)<<a[i]<<" ";
}