#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int a[n];
    bool checking=true;
    for (int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for (int i=0;i<n;i++)
    {
        if (a[i]!=a[n-i-1])
        {
            checking=false;break;
        }
    }
    if (checking==true) std::cout<<"Symmetric array";else std::cout<<"Asymmetric array";
    return 0;
}