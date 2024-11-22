#include <iostream>
#include <cmath> 
using namespace std;
void towerOfHanoiIterative(int n) {
    int totalMoves = pow(2, n) - 1;
    char source = 'A', destination = 'C', auxiliary = 'B';
    if (n % 2 == 0) {
        swap(destination, auxiliary);
    }
    for (int i = 1; i <= totalMoves; i++) {
        int from, to;
        if (i % 3 == 1) {
            from = source;
            to = destination;
        } else if (i % 3 == 2) {
            from = source;
            to = auxiliary;
        } else {
            from = auxiliary;
            to = destination;
        }
        cout << "Move disk " << (i % 2 == 0 ? i / 2 : (i + 1) / 2) << " from " << from << " to " << to << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    cout << "The sequence of moves involved in the Tower of Hanoi are:" << endl;
    towerOfHanoiIterative(n);
    return 0;
}