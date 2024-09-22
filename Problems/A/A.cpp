#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oSet; // [find_by_order ==> given address at index] |==| [order_of_key ==> Number of element smaller then X]y
#define int long long
#define ld long double
const int mod = 1e9 + 7;
int t, n, m, q, x, k;

void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for (int temp = 1; temp <= t; temp++)
    {
        int n, k;
        cin >> n >> k;

        int totalTime = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            totalTime = min(totalTime, x);
        }

        totalTime += totalTime * (max(0LL, (n - 2))) * 2;
        if (totalTime <= k)
        {
            cout << "Case #" << temp << ": YES\n";
        }
        else
        {
            cout << "Case #" << temp << ": NO\n";
        }
    }
}

void main_()
{
    solve();
}

static void run_with_stack_size(void (*func)(void), size_t stsize)
{
    char *stack, *send;
    stack = (char *)malloc(stsize);
    send = stack + stsize - 16;
    send = (char *)((uintptr_t)send / 16 * 16);
    asm volatile(
        "mov %%esp, (%0)\n"
        "mov %0, %%esp\n"
        :
        : "r"(send));
    func();
    asm volatile("mov (%0), %%esp\n" : : "r"(send));
    free(stack);
}
int32_t main()
{
    run_with_stack_size(main_, 1024 * 1024 * 1024); // run with a 1 GiB stack
    return 0;
}