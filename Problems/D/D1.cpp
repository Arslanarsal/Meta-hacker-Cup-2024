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
int t, n, m, q, x, k, g;
int arr[300005];
// void solve()
// {
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     int t;
//     cin >> t;
//     for (int temp = 1; temp <= t; temp++)
//     {
//         int n, g;
//         cin >> n >> g;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//         }
//         int difference, num;
//         queue<int> q;
//         q.push(1);
//         difference = abs(g - arr[0]);
//         num = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             int val = arr[i];
//             int diff = abs(g - val);
//             if (diff < difference)
//             {
//                 if (val < num)
//                 {
//                     q.pop();
//                 }
//                 difference = diff;
//                 num = val;
//             }
//             else if (val > num)
//             {
//                 q.pop();
//             }

//             q.push(i + 1);
//         }
//         cout << "Case #" << temp << ": " << q.front() << " " << difference << "\n";
//     }
// }
void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    for (int temp = 1; temp <= t; temp++)
    {
        cin >> n >> g;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int diff = LLONG_MAX, ans;
        for (int i = 0; i < n; i++)
        {
            int temp = abs(g - arr[i]);
            if (temp <= diff)
            {
                diff = temp;
                ans = n - i;
            }
        }
        cout << "Case #" << temp << ": " << ans << " " << diff << "\n";
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