#include <iostream>

int main()
{
    std::string s;
    std::getline(std::cin,s);
    int countalpha=0;
    int countnum=0;
    int countother=0;
    for (int i=0;i<s.length();i++)
    {
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) countalpha++;else
        if (s[i]>='0' && s[i]<='9') countnum++;
        else countother++;
    }
    std::cout<<countalpha<<" "<<countnum<<" "<<countother;
    return 0;
}