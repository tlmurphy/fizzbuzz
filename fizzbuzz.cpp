#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    for (int i = 1; i < 101; i++) {
        if (i % 5 == 0 && i % 3 == 0) {
            cout << "fizzbuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "buzz" << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
