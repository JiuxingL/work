#include <iostream>
using namespace std;
class Myclass {
public:
    void fun(int arr[], int len) {
        int min = arr[0];
        int index = 0;
        for (int i = 0; i < len; i++) {
            if (arr[i] < arr[index]) {
                min = arr[i];
                index = i;
            }
        }
        int temp = min;
        arr[index] = arr[len - 1];
        arr[len - 1] = temp;
    }
};
int main(){
    int len;
    cin >> len;
    int arr[5];
    for (int i = 0; i < len; i++){
        cin >> arr[i];
    }
    Myclass myclass;
    myclass.fun(arr, len);
    for (int i = 0;i < len; i++) {
        cout << arr[i] << " ";
    }
    system("pause");
    return 0;
}
