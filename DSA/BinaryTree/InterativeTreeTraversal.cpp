#include <bits/stdc++.h>

using namespace std;

#define ll long long int

class node
{
public:
    ll data;
    node *left;
    node *right;
    node(ll d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *BuildTree(node *root)
{
    cout << "Enter the data: " << "\n";
    ll data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for inserting in left " << data << "\n";
    root->left = BuildTree(root->left);
    cout << "Enter data for inserting in right " << data << "\n";
    root->right = BuildTree(root->right);
    return root;
}

void inOrderTraversal(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

void preOrderTraversal(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            cout << curr->data << " ";
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}

void postOrderTraversal(node *root)
{
    stack<node *> s;
    node *curr = root;
    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
        cout << curr->data << " ";
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    node *root;
    root = BuildTree(root);

    // In order traversal
    inOrderTraversal(root);
    cout << "\n";

    // Pre order traversal
    preOrderTraversal(root);
    cout << "\n";

    // Post order traversal
    postOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    return 0;
}