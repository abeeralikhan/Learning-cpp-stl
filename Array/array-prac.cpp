#include <iostream>
#include <array>

using namespace std;

void display(array<int, 5> a) {
    for(int i = 0; i < a.size(); i++)
        cout << a.at(i) << " ";
    cout << endl;
}

bool isSorted(array<int, 5> a) {
    for(int i = 0; i < a.size(); i++) 
        if(a[i] > a[i+1]) return false;
        
    return true;
}

int main() {
    // array<DataType, Size> = {....}
    array<int, 5> arr = {1, 2, 3, 4, 5};

    cout << "Displaying array: " << endl;
    display(arr);
    cout << "Element at front: " << arr.front() << endl; 
    cout << "Element at back: " << arr.back() << endl; 
    cout << "Is array empty or not? " << arr.empty() << endl; 
    cout << "Is array sorted? " << isSorted(arr) << endl; 
    return 0;
}