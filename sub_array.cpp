#include <iostream>
#include <set>
using namespace std;

int main() {
    const int sizeofArray = 3;
    int array[sizeofArray] = {1, 3, 5};

    set<int> s;

    for (int i = 0; i < sizeofArray; i++) {
        int mul = 1;
        for (int j = i; j < sizeofArray; j++) {
            mul *= array[j];
            if (s.find(mul) != s.end()) {
                cout << "The number is not colourful: " << mul << endl;
                return 0;
            }
            s.insert(mul);
        }
    }

    cout << "The number is colourful" << endl;
    return 0;
}
