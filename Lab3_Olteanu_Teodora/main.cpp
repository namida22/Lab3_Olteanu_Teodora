#include "Tree.h"
#include "Node.h"
#include <iostream>
using namespace std;
int main() {

    Tree *tree = new Tree();
    tree->insert(5);
    tree->insert(1);
    tree->insert(7);
    tree->insert(8);
    cout<<"Inorder: "<<tree->Inorder(tree->rad);//mit dem Knoten 8

    tree->deletee(8);
    cout<<"\nInorder: "<<tree->Inorder(tree->rad);
    cout<<"\nPostorder: "<<tree->Postorder(tree->rad);
    cout<<"\nPreorder: "<<tree->Preorder(tree->rad);
    cout<<"\nNummer der Knoten: "<<tree->countNodes(tree->rad);
    cout<<"\nNummer der Kanten: "<<tree->countEdges(tree->rad);
    cout<<"\nHoehe des Baumes: "<<tree->height(tree->rad);

    return 0;
}
