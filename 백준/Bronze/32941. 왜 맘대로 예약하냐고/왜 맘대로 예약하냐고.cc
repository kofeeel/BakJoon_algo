#include <iostream>
#include <vector>

using namespace std;

int main() {
    int MaxReserveNum{};
    int ReserveTime{};
    int TeamNum{};

    cin >> MaxReserveNum >> ReserveTime;
    cin >> TeamNum;

    bool allCanAttend = true;

    for (int i = 0; i < TeamNum; ++i) 
    {
        int TeamAttendNum; 
        cin >> TeamAttendNum;

        bool memberCanAttend = false; 

        for (int j = 0; j < TeamAttendNum; ++j)
        {
            int AttendTime;
            cin >> AttendTime;
            if (AttendTime == ReserveTime)
            {
                memberCanAttend = true;
            }
        }

        if (!memberCanAttend)
        {
            allCanAttend = false; 
            break; 
        }
    }

    if (allCanAttend)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}