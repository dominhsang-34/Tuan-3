#include <iostream>
#include <cstring>

int main()
{
    std::string s;
    std::getline(std::cin,s);

    for (int i=0;i<s.length();i++)
    {
        if (s[i]==' ' && (s[i-1]!=' ' && i-1>0) && (s[i+1]==' ' ||i+1==s.length())) {s.erase(i,1);i--;}
    }
    if (s[s.length()-2]==' ') s.erase(s.length()-2,1);
    std::cout<<s;
}