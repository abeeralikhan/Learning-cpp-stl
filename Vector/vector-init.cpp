#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<int> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}

void display(vector<string> v) {
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}

int main() {
    // Following are the three ways using which we can initialize vectors
    // 1st way
    vector<string> friends;

    friends.push_back("Jabbar");
    friends.push_back("Zubair");
    friends.push_back("Jahangir");

    cout << "Displaying First Vector: " << endl;
    display(friends);

    // 2nd way
    vector<int> vec(10, 5); // Make 10 copies of the element 5. Default is 0
    cout << "Displaying Second Vector: " << endl;
    display(vec);

    // 3rd way
    vector<string> copyFriends(friends); 
    cout << "Displaying Third Vector: " << endl;
    display(copyFriends);
    return 0;
}