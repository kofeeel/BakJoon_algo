#include <iostream>

using namespace std;

int main()
{
    int h, m, endTime;
    cin >> h >> m >> endTime;

    int totalMinutes = h * 60 + m + endTime;

    totalMinutes %= 1440;

    h = totalMinutes / 60;
    m = totalMinutes % 60;

    cout << h << " " << m;
    return 0;
}