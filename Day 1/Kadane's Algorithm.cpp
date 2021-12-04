#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int maxim = INT_MIN;
    int sum = 0;

    for (auto i : nums)
    {
        sum += i;
        maxim = max(sum, maxim);
        if (sum < 0)
            sum = 0;
    }
    cout << maxim;
}