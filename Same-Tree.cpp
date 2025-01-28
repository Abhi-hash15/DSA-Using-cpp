#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) return (p == q);
        return (p->val == q->val)
            && isSameTree(p->left, q->left)
            && isSameTree(p->right, q->right);
    }
};

TreeNode* createTree1() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    return root;
}

TreeNode* createTree2() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    return root;
}

TreeNode* createTree3() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(4);
    return root;
}

int main() {
    Solution solution;
    TreeNode* tree1 = createTree1();
    TreeNode* tree2 = createTree2();
    TreeNode* tree3 = createTree3();

    cout << "Tree 1 and Tree 2 are the same: " << solution.isSameTree(tree1, tree2) << endl;
    cout << "Tree 1 and Tree 3 are the same: " << solution.isSameTree(tree1, tree3) << endl;

    // Clean up memory (delete allocated nodes)
    // Implement a proper tree destructor or delete each node individually
    // For this example, let's manually delete the nodes for simplicity
    delete tree1->left;
    delete tree1->right;
    delete tree1;

    delete tree2->left;
    delete tree2->right;
    delete tree2;

    delete tree3->left;
    delete tree3->right;
    delete tree3;

    return 0;
}
