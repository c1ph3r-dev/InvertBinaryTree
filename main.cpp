class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int x) { val = x; }
};

TreeNode* invertTree(TreeNode* root)
{
    if (root == nullptr) return root;

    TreeNode* left = invertTree(root->left);
    TreeNode* right = invertTree(root->right);

    // swap
    root->right = left;
    root->left = right;
}

int main()
{

    return 0;
}