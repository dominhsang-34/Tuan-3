#include <iostream>
#include <cstring>

int main()
{
    std::string s;
    std::getline(std::cin,s);
    for (int i=0;i<s.length();i++)
    {
        if (s.substr(i,4)=="Zues") 
        {
            std::cout<<"Zues";
            i=i+3;
        }else std::cout<<s[i];
    }
}