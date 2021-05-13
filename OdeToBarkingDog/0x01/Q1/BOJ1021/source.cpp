#include <iostream>
#include <deque>

using namespace std;

deque<int> q;
deque<int>::iterator iter;

int result = 0;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int M;

    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        q.push_back(i);
    }

    for (int i = 0; i < M; i++)
    {
        int num;
        int cur;
        cin >> num;

        cur = 1;

        for (iter = q.begin(); iter < q.end(); iter++)
        {
            if (*iter == num)
            {
                break;
            }
            cur++;
        }

        int left = cur - 1;
        int right = q.size() - cur + 1;

        if (left < right)
        {
            for (int j = 1; j < left; j++)
            {
                int temp = q.front();
                q.pop_front();
                q.push_back(temp);
                result++;
            }
            q.pop_front();
        }
        else
        {
            for (int j = 1; j <= right; j++)
            {
                int temp = q.back();
                q.pop_back();
                q.push_front(temp);
                result++;
            }
            q.pop_front();
        }

        cout << result << endl;
        return 0;
    }

    


}