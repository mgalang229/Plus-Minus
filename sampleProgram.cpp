#include <iostream>
using namespace std;

int main(){

    float n, positive, negative, zero, arr[100];
    positive = negative = zero = 0;

    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            positive++;
        } else if(arr[i] < 0){
            negative++;
        } else {
            zero++;
        }
    }
    cout << positive / n << endl;
    cout << negative / n << endl;
    cout << zero / n;

    return 0;
}
