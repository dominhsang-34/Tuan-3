#include <iostream>

int main()
{
    int n;bool checking=true;
    std::cin>>n;
    int arrayA[n],arrayB[n];
    for (int i=0;i<n;i++) 
    {
        std::cin>>arrayA[i];
    }
    for (int i=0;i<n;i++)
    {
        std::cin>>arrayB[i];
        if (arrayA[i]!=arrayB[i])
        {
            checking=false;break;
        }
    }
    if (checking==true) std::cout<<"YES"; else std::cout<<"NO";
}