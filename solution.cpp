#include <cstring>
#include <iostream>
#include <array>

using namespace std;

int main() {

    int n = 5;
    bool result = true;
    array<int, 5> arr = {1,2,3,8,5};

    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[i+1]) {
            result = false;
            break;
        }
    }

    cout << boolalpha << result;

    return 0;
}
