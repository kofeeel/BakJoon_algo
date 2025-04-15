#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> stack;
    //명령어 개수
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string input;
        cin >> input;

        if (input == "push")
        {
            int value;
            cin >> value;
            stack.push_back(value);
        }
        else if (input == "pop")
        {
            if (!stack.empty())
            {
                int value = stack.back();
                cout << value << "\n";
                stack.pop_back();
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (input == "size")
        {
            cout << stack.size() << "\n";
        }
        else if (input == "top")
        {
            if (!stack.empty())
            {
                int value = stack.back();
                cout << value << "\n";
            }
            else
            {
                cout << "-1\n";
            }
        }
        else if (input == "empty")
        {
            cout << (stack.empty() ? 1 : 0) << "\n";
        }
        else
        {
            cout << "잘못된 입력입니다.\n";
        }
    }

    return 0;
}