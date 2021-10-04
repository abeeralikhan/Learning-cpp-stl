#include <iostream>
#include <vector>

using namespace std;

// To display the contents of vector
void display(vector<int> &v) {
    // To run the following block of code if vector is not empty
    if (!v.empty()) {
        for (int i = 0; i < v.size(); i++){
            cout << v.at(i) << ' ';
            //cout << v[i] << ' '; OR we could have implemented in this way 
        }
        cout << endl;

    } else {
        cout << "Vector is empty!" << endl;
    } 
}

// v.begin() --returns beginning pointer
// c.end() --> returns ending pointer

int main() {
    // vectors object
    vector<int> v1;
    vector<int> v2;

    // pushing some elements into v1
    for(int i = 0; i < 5; i++) v1.push_back(i*i);

    // vectors iterator
    // both vector iterator objects will point at the beginning of the vector
    vector<int>::iterator v1_itr = v1.begin();
    vector<int>::iterator v2_itr = v2.begin();
    
    cout << "Before inserting elements using pointer: " << endl;
    cout << "Vector 1" << endl;
    display(v1);
    cout << "Vector 1" << endl;
    display(v2);

    v1.insert(v1_itr, 65); // Insert at first position
    v1.insert(v1_itr+2, 3); // Insert at third position
    v2.insert(v2_itr, 5, 500); // Insert at first positoin, five copies of 500s
    cout << endl << "After inserting elements using pointer: " << endl;
    cout << "Vector 1" << endl;
    display(v1);
    cout << "Vector 1" << endl;
    display(v2);

    return 0;
}