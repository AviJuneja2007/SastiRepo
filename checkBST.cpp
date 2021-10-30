#include <bits/stdc++.h>
using namespace std;

class isBST{
    public:
    int minimum;
    int maximum;
    bool isBST1;
}
isBST2 check(BinaryTreeNode<int>* root){
if(root==NULL){
    isBST output;
    output.minimum = INT_MAX;
    output.maximum = INT_MIN;
    output.isBSRT1 = true;
    return output;
}

isBST left = isBST2(root->left); 
isBST right = isBST2(root->right);
int minimum = min(root->data,min(left.minimum,right.minimum));
int maximum = max(root->data,min(left.maximum,right.maximum));
bool BSTfinal = (root->data > minimum) && (root=>data <= maximum) && left.isBST1 && right.isBSR1;

isBST output;
output.minimum - minimum;
output.maximum = maximum;
output.isBSRT1 = BSTfinal;
return output;

}
bool isBST3(BinaryTreeNode<int>* root, int minimum = INT_MIN,int maximum = INT_MAX){
    if(root == NULL){
        return true;
    }
    if(root->data < minimum || root->data > maximum){
        return false;
    }
    bool left = isBST3(root->left,minimum,root->data-1);
    bool right = isBST3(root->right,root->data,maximum);
    return left && right ;
}


int main(){
    


}