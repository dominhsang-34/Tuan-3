#include<iostream>

int main()
{
    std::string s;
    int count=1;;
    std::getline(std::cin,s);
    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' ') count++ ;
    }
    std::cout<<count;
    return 0;
}