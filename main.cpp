#include <iostream>
#include <string>
#include "./trees.h"

using namespace std;

int main(){
  kt::Tree<int> tree({1,2,3,4,5,6,7,8,9});
  tree.connect(tree[0], tree[1]);
  tree.connect(tree[0], tree[2]);
  tree.connect(tree[0], tree[3]);
  vector<int> children = tree.get_children(tree[0]);
  cout << "Children size: " << children.size() << "\n";
  for(int i : children){
    cout << i << " ";
  }
  cout << "\n";
  return 0;
}