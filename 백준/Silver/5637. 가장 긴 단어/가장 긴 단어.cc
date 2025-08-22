#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //E-N-D 입력시 입력종료
    //단어는 알파벳(a-z, A-Z)과 하이픈(-)으로만 이루어져 있다. 
    //공백으로 구분

    string line, word;
    string longest = "";
    int maxLen = 0;

    while (getline(cin, line))
    {
        word = "";

        for (int i = 0; i < line.length(); i++) 
        {
            char c = line[i];

            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '-')
            {
                word += c;
            }
            else
            {
                if (word.length())
                {
                    if (word == "E-N-D")
                    {
                        for (int j = 0; j < longest.length(); j++)
                        {
                            if (longest[j] >= 'A' && longest[j] <= 'Z')
                            {
                                longest[j] = longest[j] + 32;
                            }
                        }
                        cout << longest;
                        return 0;
                    }

                    if (word.length() > maxLen)
                    {
                        maxLen = word.length();
                        longest = word;
                    }
                    word = "";
                }
            }
        }

        if (word.length())
        {
            if (word == "E-N-D")
            {
                for (int j = 0; j < longest.length(); j++) 
                {
                    if (longest[j] >= 'A' && longest[j] <= 'Z') 
                    {
                        longest[j] = longest[j] + 32;
                    }
                }
                cout << longest;
                return 0;
            }

            if (word.length() > maxLen)
            {
                maxLen = word.length();
                longest = word;
            }
        }
    }

    return 0;
}