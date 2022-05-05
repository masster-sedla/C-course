#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool pop(string xs){
    if(xs[0]!=' ')
        return ((xs[0]=='a') || (xs[0]=='A'));
}
int CountStartsWithA(const vector<string>& xs) {
    // посчитайте число строк, начинающихся на букву A
    return count_if(xs.begin(), xs.end(), pop);
}

int main() {
    // не меняйте тело main
    cout << CountStartsWithA({"And"s, "another"s, "one"s, "gone"s, "another"s, "one"s "bites"s, "the"s, "dust"s});
		return 0;
}
