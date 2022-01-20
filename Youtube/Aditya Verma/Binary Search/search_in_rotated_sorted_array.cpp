#include <bits/stdc++.h>
using namespace std;

int getPivot(vector<int> &v, int n)
{
    int lb=0,ub=n-1,prev,next,mid;

    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        prev=(mid-1+n)%n;
        next=(mid+1)%n;

        if(v[prev]>=v[mid] && v[next]>=v[mid])
        return mid;
        else if(v[lb]<=v[mid])
        lb=mid+1;
        else
        ub=mid-1;
    }
    return -1;
}

int binSearch(vector<int>& v,int lb, int ub, int item)
{
    int mid;
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        if(item==v[mid])
            return mid;
        else if(item<v[mid])
            ub=mid-1;
        else
            lb=mid+1;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout); 
    #endif
    
    int t, n, temp, pivot, item;
    vector<int> v;

    cin >> t;
    while(t--)
    {
        cin >> n >> item;
        for(int i=0;i<n;i++)
        {
            cin >> temp;
            v.push_back(temp);
        }

        pivot=getPivot(v,n);
        // x=binSearch(v,0,pivot-1,item);
        // y=binSearch(v,pivot,n-1,item);
        // if(x!=-1)
        //     cout << x << "\n";
        // else if(y!=-1)
        //     cout << y << "\n";
        // else
        //     cout << x << "\n";

        if(pivot==-1)
        cout << binSearch(v,0,n-1,item);
        else if(v[pivot]==item)
        cout << pivot;
        else if(v[0]<=item)
        cout << binSearch(v,0,pivot-1,item);
        else
        cout << binSearch(v,pivot+1,n-1,item);
        v.clear();
    }
    return 0;
}