#include <stdio.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int main(void)
{
    BTreeNode* avlRoot;
    BTreeNode* clNode;
    BTreeNode* crNode;

    BTreeNode* clNode2;
    BTreeNode* crNode2;

    BTreeNode* clNode3;
    BTreeNode* crNode3;

    BSTMakeAndInit(&avlRoot);

    BSTInsert(&avlRoot, 1);
    BSTInsert(&avlRoot, 2);
    BSTInsert(&avlRoot, 3);    
    BSTInsert(&avlRoot, 4);
    BSTInsert(&avlRoot, 5);
    BSTInsert(&avlRoot, 6);
    BSTInsert(&avlRoot, 7);
    BSTInsert(&avlRoot, 8);
    BSTInsert(&avlRoot, 9);

    printf("��Ʈ ��� : %d \n", GetData(avlRoot));
    
    clNode = GetLeftSubTree(avlRoot);
    crNode = GetRightSubTree(avlRoot);
    printf("����1 : %d, ������1 : %d \n", GetData(clNode), GetData(crNode));

    clNode2 = GetLeftSubTree(clNode);
    crNode2 = GetRightSubTree(clNode);
    printf("����2 : %d, ������2 : %d \n", GetData(clNode2), GetData(crNode2));

    clNode2 = GetLeftSubTree(crNode);
    crNode2 = GetRightSubTree(crNode);
    printf("����3 : %d, ������3 : %d \n", GetData(clNode2), GetData(crNode2));

    clNode3 = GetLeftSubTree(crNode2);
    crNode3 = GetRightSubTree(crNode2);
    printf("����4 : %d, ������4 : %d \n", GetData(clNode3), GetData(crNode3));

    return 0;
}