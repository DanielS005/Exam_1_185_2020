#include <iostream>

using namespace std;

class Hard_thing {
public:
    void counting(int* arr) {
        int result;
        for (int i = 0; i < 10; i++) {
            if (i <= 2) { arr[i] = i;cout << arr[i] << endl; }
            else {
                result = arr[i - 1] + arr[i - 2] + arr[i - 3];
                arr[i] = result;
                cout << result << endl;
            }
        }
    }
};

int main() {
    int arr[10];
    Hard_thing object1;
    object1.counting(arr);
    return 0;
}