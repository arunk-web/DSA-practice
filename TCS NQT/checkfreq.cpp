#include <bits/stdc++.h>
using namespace std;

vector<int> topKScores(vector<int>& scores, int k) {
    unordered_map<int, int> freq;        // score -> frequency
    unordered_map<int, int> firstIdx;    // score -> pehli baar kahan aaya

    for (int i = 0; i < (int)scores.size(); i++) {
        int s = scores[i];
        freq[s]++;
        if (firstIdx.find(s) == firstIdx.end()) {
            firstIdx[s] = i;
        }
    }

    // distinct scores ki list
    vector<int> arr;
    for (auto &p : freq) arr.push_back(p.first);

    // frequency descending, tie mein first index ascending
    sort(arr.begin(), arr.end(), [&](int a, int b) {
        if (freq[a] != freq[b]) return freq[a] > freq[b];
        return firstIdx[a] < firstIdx[b];
    });

    // sirf pehle K elements rakho
    if ((int)arr.size() > k) arr.resize(k);
    return arr;
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    int k;
    cin >> k;

    vector<int> result = topKScores(scores, k);

    for (int i = 0; i < (int)result.size(); i++) {
        if (i) cout << " ";
        cout << result[i];
    }
    cout << endl;
    return 0;
}