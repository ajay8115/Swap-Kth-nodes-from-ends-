// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
}; 

Node *swapkthnode(Node *head, int n, int k)
{
    if (k > n )
    {
        return head;
    }

    Node *ar[n];

    Node *cur = head;
    int i = 0;
    while (cur != NULL)
    {
        ar[i++] = cur;
        cur = cur->next;
    }

    swap(ar[k - 1], ar[n - k]);

    int n1 = n;
    cur = head;
    while (n1--)
    {
        Node *temp = cur;
        cur = cur->next;
        temp->next = NULL;
    }

    head = ar[0];
    cur = head;

    int j = 1;
    n--;
    while (n--)
    {
        cur->next = ar[j++];
        cur = cur->next;
    }

    return head;
}
 