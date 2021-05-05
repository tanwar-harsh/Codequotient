#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void forwardPrint(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data;
    forwardPrint(head->next);
}

void backwardPrint(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }
    backwardPrint(head->next);
    cout << head->data;
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t--)
    {
        struct Node *head = NULL;
        cin >> n;
        while (n--)
        {
            cin >> m;
            insertEnd(&head, m);
        }
        forwardPrint(head);
        cout << endl;
        backwardPrint(head);
        cout << endl;
    }
    return 0;
}