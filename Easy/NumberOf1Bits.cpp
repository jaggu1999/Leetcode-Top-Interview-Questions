#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt = 0;
        for (int i = 1; i <= 32; i++) {
            if (n & 1) cnt++;
            n >>= 1;
        }
        return cnt;
    }
};