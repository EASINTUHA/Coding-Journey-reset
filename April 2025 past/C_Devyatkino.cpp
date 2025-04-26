#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<string> data;
    string token;
    while (ss >> token) {
        data.push_back(token);
    }

    int idx = 0;
    int t = stoi(data[idx]);
    idx++;
    for (int _ = 0; _ < t; _++) {
        int n = stoi(data[idx]);
        idx++;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = stoi(data[idx]);
            idx++;
        }

        long long dp0 = 1, dp1 = 0, dp2 = 0, dp3 = 0;
        for (int num : a) {
            long long new_dp0 = 0, new_dp1 = 0, new_dp2 = 0, new_dp3 = 0;
            if (num == 0) {
                new_dp0 = (new_dp0 + dp0 * 3) % MOD;
                new_dp1 = (new_dp1 + dp1 * 3) % MOD;
                new_dp2 = (new_dp2 + dp2 * 3) % MOD;
                new_dp3 = (new_dp3 + dp3 * 3) % MOD;
            } else {
                new_dp1 = (new_dp1 + dp0) % MOD;
                new_dp2 = (new_dp2 + dp0) % MOD;
                new_dp3 = (new_dp3 + dp0) % MOD;
                new_dp0 = (new_dp0 + dp1 + dp2 + dp3) % MOD;
                new_dp1 = (new_dp1 + dp2) % MOD;
                new_dp2 = (new_dp2 + dp3) % MOD;
                new_dp3 = (new_dp3 + dp1) % MOD;
                swap(new_dp1, new_dp2);
                swap(new_dp0, new_dp1);
                swap(new_dp2, new_dp3);
            }
            dp0 = new_dp0;
            dp1 = new_dp1;
            dp2 = new_dp2;
            dp3 = new_dp3;
        }

        cout << dp0 % MOD << '\n';
    }

    return 0;
}