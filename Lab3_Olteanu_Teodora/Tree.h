
#ifndef LAB3_OLTEANU_TEODORA_TREE_H
#define LAB3_OLTEANU_TEODORA_TREE_H
#include "Node.h"
#include <iostream>
using namespace std;
class Tree {
public:
    Node *rad;

public:
    void insert(int v);
    void deletee(int v);
    string Inorder(Node *n);
    string Postorder(Node *n);
    string Preorder(Node *n);
    int countNodes(Node*n);
    int countEdges(Node *n);
    int height(Node *n);

};


#endif //LAB3_OLTEANU_TEODORA_TREE_H
