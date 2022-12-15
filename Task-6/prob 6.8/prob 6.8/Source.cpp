#include<iostream>
#include<cstdlib>
using namespace std;
class node {
public:
    int key;
    node* left;
    node* right;
    node();
    node(int k) {
        key = k;
        left = NULL;
        right = NULL;
    }
};
class bts {
public:
    void  preOrder(node* root) {

        if (root == NULL)
            return;

        cout << root->key << " ";

        preOrder(root->left);
        preOrder(root->right);
    }
    node* insertNode(node* root, int val)
    {
        if (root == NULL) {
            node* newNode;
            newNode = (node*)malloc(sizeof(node));
            newNode->left = newNode->right = NULL;
            newNode->key = val;
            return newNode;
        }
        else if (val <= root->key) {
            root->left = insertNode(root->left, val);
        }
        else
            root->right = insertNode(root->right, val);
        return root;
    }
};
int main()
{
    bts out;
    node* root = NULL;
    int n, key;
    cin >> n;
    while (n--) {
        cin >> key;
        root = out.insertNode(root, key);
    }
    out.preOrder(root);

    return 0;
}
