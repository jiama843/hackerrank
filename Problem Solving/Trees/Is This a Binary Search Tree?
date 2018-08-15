void traverseInOrder(Node *curr, vector<int> &val){
    if(curr == nullptr){ return; }
    traverseInOrder(curr->left, val);
    val.emplace_back(curr->data);
    traverseInOrder(curr->right, val);
}
    
bool checkBST(Node* root) {
      vector<int> val;
  traverseInOrder(root, val);

      if(val.size() == 0){ return true; }
      int maxSofar = val[0];
      for(int i = 1; i < val.size(); i++){
          if(val[i] <= maxSofar){
              return false;
          }
          else{
              maxSofar = val[i];
          }
      }
      return true;
}
