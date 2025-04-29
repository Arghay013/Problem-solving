#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
using namespace std;
void solve()
{
    int k,n,m;
    cin >> k >> n >> m;
    int arr1[n],arr2[m];
    for(int i=0; i<n; i++)
        cin >> arr1[i];
    for(int j=0; j<m; j++)
        cin >> arr2[j];
    int i=0,j=0;
    vector <int> ans;
    while(i<n || j<m)
    {
        if(arr1[i]<=k && arr1[i]!=0 && i<n)
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j]<=k && arr2[j]!=0 && j<m)
        {
            ans.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]==0 && i<n)
        {
            ans.push_back(arr1[i]);
            i++;
            k++;
        }
        else if(arr2[j]==0 && j<m)
        {
            ans.push_back(arr2[j]);
            j++;
            k++;
        }
        else
        {
            cout << -1 << '\n';
            return;
        }
    }
    for(auto u:ans)
        cout << u << " ";
    cout << '\n';
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}