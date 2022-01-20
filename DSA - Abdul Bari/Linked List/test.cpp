// ****************************************************************************
//                                     INTRODUCTION
// ****************************************************************************

/*    CODE WRITER        :    jinx_11

    MOTO            :    REGULAR CODE MAKES THE ROAD
    
    Problem link    :    
*/

// ****************************************************************************
//                                     HEADER FILE
// ****************************************************************************

#include <bits/stdc++.h>
using namespace std;

// ****************************************************************************
//                                     MY CODE
// ****************************************************************************

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createSLL(int arr[], int n)
{
    struct Node *first, *last, *temp;

    first=new Node;
    first->data=arr[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        temp=new Node;
        temp->data=arr[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

    return first;
}
void display_sll(struct Node* t)
{
    while(t)
    {
        cout << t->data;
        t=t->next;
        if(t)    cout << " -> ";
    }
    cout << "\n";
}

void fun(struct Node* start)
{
    if(start==NULL)
    {
        return;
    }
    cout << start->data << " ";
    if(start->next)
        fun(start->next->next);
    cout << start->data << " ";
}
void solution()
{
    int arr[]={11,12,13,14,15,16};
    int n=6;

    struct Node *start = createSLL(arr,n);

    fun(start);
}

// ****************************************************************************
//                                     MAIN()
// ****************************************************************************

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    
    solution();

    #ifndef ONLINE_JUDGE
    cerr << "Time: " << 1000*((double)clock())/(double)CLOCKS_PER_SEC << "ms\n";
    #endif

    return 0;
}
