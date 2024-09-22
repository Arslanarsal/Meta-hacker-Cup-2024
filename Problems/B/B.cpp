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

void solve()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int N, P;
        cin >> N >> P;

        double originalSuccess = pow(P / 100.0, N);
        double newSuccess = pow((P + 1) / 100.0, N - 1);

        while (newSuccess < originalSuccess)
        {
            P++;
            newSuccess = pow((P + 1) / 100.0, N - 1);
        }

        cout << "Case #" << i << ": " << P - (double)P << endl;
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