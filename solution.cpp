#include <iostream>
#include <queue>
using namespace std;
int josephusUsingQueue(int N, int k)
{
    // N is the number of people in the circle
    // k is the number of people to be skipped
    queue<int> q;
    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }
    while (q.size() > 1)
    {
        for (int i = 0; i < k - 1; i++)
        {
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }
}
//driver code 
int main()

{
    queue<int> q;
    int N, k;
    cin >> N >> k;
    cout << josephusUsingQueue(N, k);

    return 0;
}