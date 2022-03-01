#include <iostream>

bool checkLength(std::string s);
bool checkAlphaNum(std::string s);
bool checkFirstNum(std::string s);

int main()
{
    std::string s;
    std::getline(std::cin,s);
    if (checkAlphaNum(s)==true && checkFirstNum(s)==true && checkLength(s)==true) std::cout<<"Valid username.";
    else std::cout<<"Invalid username.";
    return 0;
}

bool checkLength(std::string s)
{
    if (s.length()>=6 && s.length()<=15) return true;else return false;
}

bool checkAlphaNum(std::string s)
{
    int countalpha=0;
    int countnum=0;
    int countother=0;
    for (int i=0;i<s.length();i++)
    {
        if ((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) countalpha++;else
        if (s[i]>='0' && s[i]<='9') countnum++;
        else countother++;
    }
    if ((countalpha>0 || countnum>0) && countother==0) return true;else return false;
}

bool checkFirstNum(std::string s)
{
    if (s[0]>='0'&& s[0]<='9') return false;else return true;
}