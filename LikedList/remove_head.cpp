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

    void printList()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        ;
    }
};

int main()
{
    Linkedlist *list = new Linkedlist();

    list->insertAtHead(10);
    list->insertAtHead(20);
    list->insertAtHead(30);

    list->printList();
    list->removeAtHead();
    list->printList();

    return 0;
}