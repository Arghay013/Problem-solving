#include<bits/stdc++.h>
using namespace std;

int searchLastSmallerK(const vector<int> &A, int k)
{
    int l = 0, r = (int)A.size() - 1, res = -1;
    while (l <= r)
    {
        int m = l + ((r - l) >> 1);
        if (A[m] < k)
        {
            res = A[m];
            l = m + 1;     
        }
        else
            r = m - 1;
    }
    return res;
}

int searchFirstLargerK(const vector<int> &A, int k)
{
    int l = 0, r = (int)A.size() - 1, res = -1;
    while (l <= r)
    {
        int m = l + ((r - l) >> 1);
        if (A[m] > k)
        {
            res = A[m];
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

int main()
{  
    int N;
    while (cin >> N)
    {
        vector< int> chimps(N);
        for (int i = 0; i < N; ++i)
            cin >> chimps[i];
        
        sort(chimps.begin(), chimps.end());

        int Q;
        cin >> Q;
        while ( Q-- )
        {
             int q;
            cin >> q;

             int s, h;
            s = searchLastSmallerK(chimps, q);
            h = searchFirstLargerK(chimps, q);

            if (s == -1)
                cout << "X";
            else
                cout << s;

            cout << " ";

            if (h == -1)
                cout << "X";
            else
                cout << h;

            cout << endl;
        }
    }
    return 0;
}