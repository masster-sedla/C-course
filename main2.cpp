#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int count;
    cout << "amount: ";
    cin >> count;
    vector<pair<string, int>> name_with_age{count};
    for (int i = 0; i < count; i++) {
        string name;
        int age;
        cout << "(" << i + 1 << ")name and age: " << endl;
        cin >> name >> age;
        pair<string, int> name_with_age_i = {name, age};
        name_with_age[i] = {name_with_age_i};
    }
    int comp = 1;
    sort(name_with_age.begin(), name_with_age.end(), [](auto a, auto b){ return a.second > b.second; });

    for (const auto& element: name_with_age) {
            cout << element.first << endl;
    }
    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
}
