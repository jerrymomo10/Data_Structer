#ifndef _BINARYTREE_H_
#define _BINARYTREE_H_
class BinaryTreeNode{
    friend void PreOrder(BinaryTreeNode* r);
    friend void InOrder(BinaryTreeNode* r);
    friend void PostOrder(BinaryTreeNode* r);
    public:
        BinaryTreeNode(){left=right=0;}
        BinaryTreeNode(const int& x){data=x;left=right=0;}
        BinaryTreeNode(const int& x,BinaryTreeNode* l,BinaryTreeNode* r)
        {
            data=x;
            left=l;
            right=r;
        }
    private:
        int data;
        BinaryTreeNode* left;
        BinaryTreeNode* right;
};
class BinaryTree{
    public:

    private:
        BinaryTreeNode* root;
};
#endif
