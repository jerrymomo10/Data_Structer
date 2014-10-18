#include "BinaryTree.h"
//前序遍历
void PreOrder(BinaryTreeNode* r)
{
    if(r)
    {
        //访问数据r->data;
        PreOrder(r->left);
        PreOrder(r->right);
    }
}
//中序遍历
void InOrder(BinaryTreeNode* r)
{
    if(r)
    {
        InOrder(r->left);
        //访问数据r->data
        InOrder(r->right);
    }
}
//后序遍历
void PostOrder(BinaryTreeNode* r)
{
    if(r)
    {
        PostOrder(r->left);
        PostOrder(r->right);
        //访问数据r->data
    }
}
