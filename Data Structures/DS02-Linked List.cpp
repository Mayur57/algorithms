#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

class DLL
{
    Node *head;
    Node *tail;

public:
    DLL()
    {
        head = NULL;
        tail = NULL;
    }

    void make_list(DLL, vector<int>);
    void traverse(int);
    void traverse();
    void insert_beginning(int);
    void insert_end(int);
    void insert_after(Node *, int);
    void insert_before(Node *, int);
    void remove_front(int);
    void remove_back(int);
    void remove_after(Node *, int);
};

void DLL::traverse(int dir)
{
    Node *iter;
    iter = new Node();

    if (dir == 0)
    {
        iter = head;
        while (iter != NULL)
        {
            cout << iter->data << " <-> ";
            iter = iter->next;
        }
    }
    else
    {
        iter = tail;
        while (iter != NULL)
        {
            cout << iter->data << " <-> ";
            iter = iter->prev;
        }
    }
    cout << "\n";
}

void DLL::traverse()
{
    Node *iter;
    iter = new Node();

    iter = head;
    while (iter != NULL)
    {
        cout << iter->data << " <-> ";
        iter = iter->next;
    }
    cout << "\n";
}

void DLL::insert_end(int val)
{
    // end of list, right side
    Node *temp;
    temp = new Node();

    temp->data = val;
    temp->next = NULL;
    temp->prev = tail;

    tail == NULL ? head = temp : tail->next = temp;

    tail = temp;
}

void DLL::insert_beginning(int val)
{
    // start of list, left side
    Node *temp;
    temp = new Node();

    temp->data = val;
    temp->prev = NULL;
    temp->next = head;

    head == NULL ? tail = temp : head->prev = temp;

    head = temp;
}

void DLL::insert_after(Node *pos, int val)
{
    Node *temp;
    temp = new Node();

    temp->data = val;
    temp->prev = pos;
    temp->next = pos->next;

    pos->next = temp;

    if (pos->next == NULL)
        tail = temp;
}

void DLL::insert_before(Node *pos, int val)
{
    Node *temp;
    temp = new Node();

    temp->data = val;
    temp->prev = pos->prev;
    temp->next = pos;

    pos->prev = temp;

    if (pos->prev == NULL)
        head = temp;
}

// idk why this doesn't work
// void DLL::make_list(DLL D, vector<int> val) {
//     for(int i=0; i<val.size(); i++){
//         D.insert_beginning(val[i]);
//     }
// }

int main()
{
    DLL DLL1, DLL2;
    DLL1.insert_beginning(9);
    DLL1.insert_beginning(4);
    DLL1.insert_beginning(1);
    DLL1.insert_beginning(5);
    DLL1.traverse(1);
    DLL1.insert_end(3);
    DLL1.insert_beginning(8);
    DLL1.traverse(1);

    DLL2.insert_beginning(9);
    DLL2.insert_beginning(4);
    DLL2.insert_beginning(1);
    DLL2.insert_beginning(5);
    DLL2.traverse();
    return 0;
}