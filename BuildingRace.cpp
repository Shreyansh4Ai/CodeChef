#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, X, Y;
        cin >> A >> B >> X >> Y;

        double timeChef = static_cast<double>(A) / X;
        double timeChefina = static_cast<double>(B) / Y;

        if (timeChef < timeChefina)
            cout << "Chef" << endl;
        else if (timeChef > timeChefina)
            cout << "Chefina" << endl;
        else
            cout << "Both" << endl;
    }
    return 0;
}
