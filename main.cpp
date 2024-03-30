#include <iostream>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    string input;
    int numbers[4];
    cout << "Enter 4 single-digit numbers without spaces:\n";
    cin >> input;
    if (input.length() != 4) {
        cout << "Invalid input. Please enter exactly 4 digits.\n";
        return 1;
    }
    for (int i = 0; i < 4; i++) {
        numbers[i] = input[i] - '0';
        if (numbers[i] < 1 || numbers[i] > 9) {
            cout << "Number must be from 1 to 9. Please try again.\n";
            return 1;
        }
    }
    do {
        for (int i = 0; i < 4; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    } while (next_permutation(numbers, numbers + 4));
    cout << "Press any key to exit...\n";
    cin.get();  
    return 0;
}
