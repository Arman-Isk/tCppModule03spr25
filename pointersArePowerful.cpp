#include <iostream>

using namespace std;
int main() {
    int arr[5] = {10,15,20,25,30};
    int *p = arr;
    for (int i = 0; i < 5; i++) {
        cout << "address of arr[: " << i << "]: " << (p+ i) << endl;
        cout << "value of arr[" << i << "]: " << *(p + i) << endl;
    }
    return 0;
}