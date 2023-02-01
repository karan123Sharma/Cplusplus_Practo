#include <iostream>
#include <climits>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
struct Info
{
    int size;
    int min;
    int max;
    int ans;
    bool isBST;
};
Info LargestBST(Node *root)
{
    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }
    Info LeftInfo = LargestBST(root->left);
    Info RightInfo = LargestBST(root->right);
    Info Curr;
    Curr.size = (1 + LeftInfo.size + RightInfo.size);

    if (LeftInfo.isBST && RightInfo.isBST && LeftInfo.max < root->data && RightInfo.min > root->data)
    {
        Curr.min = min(LeftInfo.min, min(RightInfo.min, root->data));
        Curr.max = min(LeftInfo.max, min(RightInfo.max, root->data));
        Curr.ans = Curr.size;
        Curr.isBST = true;
        return Curr;
    }
    Curr.ans = max(LeftInfo.ans,RightInfo.ans);
    Curr.isBST = false;
    return Curr;
};


int main()
{
    Node* root = new Node(25);
    root->left = new Node(15);
    root->right = new Node(30);
    root->left->left = new Node(5);
    cout<<"Largest Root IS ::"<<LargestBST(root).ans<<endl;
}
