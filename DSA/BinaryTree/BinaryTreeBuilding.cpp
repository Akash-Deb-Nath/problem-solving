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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << "\n";
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void preOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void postOrderTraversal(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

void BuildFromLevelOrderTraversal(node *&root)
{
    queue<node *> q;
    cout << "Enter data for root :" << "\n";
    ll data;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter left node for :" << temp->data << "\n";
        ll leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter right node for :" << temp->data << "\n";
        ll rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    node *root = NULL;
    // Creating tree
    BuildFromLevelOrderTraversal(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    /*
    // Level order traversal
    cout << "Level order traversal :" << "\n";
    levelOrderTraversal(root);
    cout << "In Order traversal :" << "\n";
    inOrderTraversal(root);
    cout << "\n";
    cout << "Pre order traversal :" << "\n";
    preOrderTraversal(root);
    cout << "\n";
    cout << "Post order traversal :" << "\n";
    postOrderTraversal(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    */

    return 0;
}