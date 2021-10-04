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

int main() {
    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i*i);
    }
    
    cout << "Output of Vector 1" << endl;
    display(v1);
    cout << "Output of Vector 2" << endl;
    display(v2);
    return 0;
}