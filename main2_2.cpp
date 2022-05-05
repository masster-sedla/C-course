#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<bool, double> CalcMedian(vector<double> samples) {
    nth_element(samples.begin(), samples.begin()+1, samples.end());
    if(samples.empty()){
        return {false,0};
    }
    else{
        if(samples.size() % 2 == 0)
            return {true, (samples[samples.size() / 2 - 1] + samples[samples.size() / 2]) / 2};
        else
            return {true, samples[samples.size() / 2]};
    }
    // верните {true, медиана}, если она существует,
    // то есть вектор непустой,
    // иначе - {false, 0}
    // обратите внимание - вектор принимаем по значению,
    // так как его придётся немного подпортить, чтобы вернуть ответ
}

int main() {
    int size;
    cin >> size;

    vector<double> samples;
    for (int i = 0; i < size; ++i) {
        double sample;
        cin >> sample;
        samples.push_back(sample);
    }

    pair<bool, double> result = CalcMedian(samples);
    if (result.first) {
        cout << result.second << endl;
    } else {
        cout << "Empty vector"s << endl;
    }
}
