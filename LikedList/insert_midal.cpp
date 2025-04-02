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

    void insertAtHead(int data)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        newnode->next = head;
        head = newnode;
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

    void insertAtAnyPosition(int data, int position)
    {
        Node *newnode = new Node(data);
        if (position <= 1)
        {
            this->insertAtHead(data);
            return;
        }
        int size = this->length();
        if (position >= size)
        {
            this->insertAtTail(data);
            return;
        }
        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    int length()
    {
        Node *temp = head;
        int count = 0;
        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
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

    list->printList();
    list->insertAtAnyPosition(15,2);

    list->printList();

    return 0;
}