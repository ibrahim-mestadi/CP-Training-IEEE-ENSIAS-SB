#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;
// href:https://codeforces.com/problemset/problem/50/A

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> M >> N;
    if (M % 2 == 0)
    {
        cout << N * M / 2;
    }
    else if (N % 2 == 0)
    {
        cout << N * M / 2;
    }
    else
    {
        cout << (N * M) / 2;
    }
    return 0;
}