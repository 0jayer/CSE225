#include<bits/stdc++.h>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"

using namespace std;
void insertrec(TreeType<int>&tree,vector<int>arr, int start, int end)
{
    if(start>end)
        return;

    int mid = (start + end)/2;
    tree.InsertItem(arr[mid]);
    insertrec(tree,arr,start,mid-1);
    insertrec(tree,arr,mid+1,end);

}
int main() {
    TreeType<int> bst;

    // Insert elements into the BST


    // Count nodes with only one child
    int leafParentCount = bst.LeafCount();
    int singleParentCount = bst.SingleCount();
    std::cout << "Number of nodes with only one child: " << singleParentCount << std::endl;
    std::cout << "Number of nodes with only one child: " << leafParentCount << std::endl;
    //66 47 87 90 126 140 145 153 177 285 393 395 467 566 620 735
    cout<<66%20<<endl;
    cout<<47%20<<endl;
    cout<<87%20<<endl;
    cout<<90%20<<endl;
    cout<<126%20<<endl;
    cout<<140%20<<endl;
    cout<<145%20<<endl;
    cout<<153%20<<endl;
    cout<<177%20<<endl;
    cout<<285%20<<endl;
    cout<<393%20<<endl;
    cout<<395%20<<endl;
    cout<<467%20<<endl;
    cout<<566%20<<endl;
    cout<<620%20<<endl;
    cout<<735%20<<endl;
    return 0;
}

//56 47 69 22 49 59 11 29 23 30 62 61 64
//50 26 12 11 9 2 10 25 16 17 72 51 96 94 95 107
