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

    void removeAtTail()
    {
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }

    void removeAtHead()
    {
        Node *temp = head;
        if (temp == NULL)
        {
            cout << "Empty";
            return;
        }
        head = temp->next;
        delete temp;
        return;
    }

    void removeAtAnyPosition(int position)
    {
        if (position <= 1)
        {
            this->removeAtHead();
            return;
        }
        int size = this->length();
        if (position >= size)
        {
            this->removeAtTail();
            return;
        }
        int i = 1;
        Node *temp = head;
        while (i < position - 1)
        {
            temp = temp->next;
            i++;
        }
        Node *deletenode = temp->next;
        temp->next = temp->next->next;
        delete deletenode;
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
    list->insertAtTail(30);
    list->printList();

    list->removeAtAnyPosition(2);
    list->printList();
    return 0;
}