#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int sz;
    cin >> sz;
    int x[sz];
    for(int i=0;i<sz;i++)
    cin >> x[i];

    int lb=0,ub=sz-1,mid=0,prev=0,next=0,ans=0;

    if(x[lb]<=x[ub])    //  array is already sorted so min element occurs at low index
    ans=lb;
    else 
    while(lb<=ub)
    {
        mid=lb+(ub-lb)/2;
        prev=(mid-1+sz)%sz;
        next=(mid+1)%sz;

        if(x[mid]<=x[prev] && x[mid]<=x[next])
        {
            ans=mid;
            break;
        }
        else if(x[lb]<=x[mid])  // choosing the unsorted part (right one here)where min element lies
            lb=mid+1;
        else
            ub=mid-1;   // left one here
    }
    cout << "Rotation count: " << ans << "\n";
    return (0);
}