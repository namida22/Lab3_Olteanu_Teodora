
#include <string>
#include "Tree.h"
void Tree::insert(int v) {
    Node *n;
    if (rad == nullptr)
        rad = new Node(v);
    else
    {
        n=rad;
        while(n!=nullptr)
            if(n->nr<v)
            {
                if(n->rechts== nullptr){
                    n->rechts=new Node(v);
                    break;
                }
                n=n->rechts;
            }
            else{
                if(n->nr >v)
                    if(n->links== nullptr){
                        n->links=new Node(v);
                        break;
                    }
                n=n->links;
            }

    }
}

void Tree::deletee(int v)
{
    Node *n;
    if(rad->nr==v)
        rad= nullptr;
    else{
        n=rad;
        while(n!= nullptr)
        {
            if(n->nr<v)
            {
                if(n->rechts== nullptr)
                    break;
                else
                    if(n->rechts->nr==v)
                    {
                        n->rechts=nullptr;
                        break;
                    }
                n=n->rechts;
            } else
                if(n->nr>v)
                {
                    if(n->links== nullptr)
                        break;
                    else{
                        if(n->links->nr==v){
                            n->links=nullptr;
                            break;
                        }
                    n=n->links;
                    }
                }
        }
    }
}

string Tree::Inorder(Node *n)
{
    if(n==NULL)
        return "";
    return Inorder(n->links) + to_string(n->nr)+ " " + Inorder(n->rechts);
}

string Tree::Postorder(Node *n)
{
    if(n==NULL)
        return "";
    return Postorder(n->links) + Postorder(n->rechts)+ to_string(n->nr)+ " " ;
}

string Tree::Preorder(Node *n)
{
    if(n==NULL)
        return "";
    return to_string(n->nr)+ " " +Preorder(n->links) + Preorder(n->rechts);
}

int Tree::countNodes(Node *n){
    if(n==NULL)
        return 0;
    if(n->links == NULL && n->rechts == NULL)
        return 1;
    if(n->links == NULL)
        return 1+countNodes(n->rechts);
    if(n->rechts==NULL)
        return 1+countNodes(n->links);
    else
        return 1+ countNodes(n->links)+countNodes(n->rechts);
}

int Tree::countEdges(Node *n){
    return countNodes(n)-1;
}

int Tree::height(Node *n){
    int depth_links, depth_rechts;
    if(n==NULL)
        return 0;
    else{
            depth_links=height(n->links);
            depth_rechts=height(n->rechts);
            if (depth_links > depth_rechts)
                return(depth_links + 1);
            else
                return(depth_rechts + 1);
    }
}