#include <iostream>
using namespace std;
#define MAX 99
int rooms[MAX + 1][MAX + 1];

int main() {
    int t, h, w, n;
    cin >> t;
    for (int tc = 0; tc < t; tc++) {
        cin >> h >> w >> n;

        for (int i = 1; i < MAX + 1; i++)
            for (int j = 1; j < MAX + 1; j++)
                rooms[i][j] = 0;

        int floor = (n % h == 0) ? h : n % h;
        int dist = (n-1) / h + 1;
        printf("%d", floor);
        printf("%02d\n", dist);
    }
    return 0;
}
