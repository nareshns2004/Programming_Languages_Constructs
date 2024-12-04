#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string word;
    cin>>word;
    int len = word.size();
    int i=0;
    int cntl=0,cnth=0;
    while(i<len)
    {
        if(word[i]<=90)
        {
            cnth++;
        }
        else
        {
            cntl++;
        }

        i++;
    }

    if(cnth>cntl)
    {
        for(int i=0;i<len;i++)
        {
        word[i] = toupper(word[i]);
        }
        cout<<word<<endl;
    }
    else
    {
        for(int i=0;i<len;i++)
        {
        word[i] = tolower(word[i]);
        }
        cout<<word<<endl;
    }

    return 0;
}