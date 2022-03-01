#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        if (a[i]!=a[i+1]) std::cout<<a[i]<<" ";
    }
    std::cout<<a[n-1];
}