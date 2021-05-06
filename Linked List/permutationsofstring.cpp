#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void forwardPrint(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d-", head->data);
        head = head->next;
    }
}

void backwardPrint(struct Node *head)
{
    if (head == NULL)
    {
        return;
    }
    backwardPrint(head->next);
    printf("%d-", head->data);
}

void push(Node **head_ref, char new_data)
{
    Node *new_node = new Node();

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
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
            push(&head, m);
        }

        forwardPrint(head);
        cout << endl;
        backwardPrint(head);
        cout << endl;
    }
    return 0;
}