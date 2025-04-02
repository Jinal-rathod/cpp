// create tree

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree()
{
    cout << "Enter value : " << endl;
    int data;
    cin >> data;
    if (data == 0)
    {
        return NULL;
    }
    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();

    return root;
}

int main()
{
    createTree();
    return 0;
}