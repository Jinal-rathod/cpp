#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
public:
    Node *head;

    Linkedlist()
    {
        this->head = NULL;
    }

    void insertAtTail(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void AddOne()
    {
        Node *temp = head;
        while (temp)
        {
            temp->data = temp->data + 1;
            temp = temp->next;
        }
    }
};

int main()
{
    Linkedlist *list = new Linkedlist();
    list->insertAtTail(10);
    list->insertAtTail(20);
    list->insertAtTail(30);
    list->printList();
    list->AddOne();
    cout << endl;
    list->printList();
    return 0;
}