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

    void removeAtTail()
    {
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = NULL;
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
};

int main()
{
    Linkedlist *list = new Linkedlist();

    list->insertAtTail(10);
    list->insertAtTail(20);
    list->insertAtTail(30);
    list->removeAtTail();
    list->printList();
    return 0;
}