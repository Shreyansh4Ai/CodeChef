#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int player1_total = 0, player2_total = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;
        player1_total += s;
        player2_total += t;

        int lead = abs(player1_total - player2_total);
        if (lead > max_lead) {
            max_lead = lead;
            winner = (player1_total > player2_total) ? 1 : 2;
        }
    }

    cout << winner << " " << max_lead << endl;
    return 0;
}
