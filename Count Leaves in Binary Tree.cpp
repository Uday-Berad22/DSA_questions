int countLeaves(Node* p)
{
    int count=0;
  if(p==NULL)
  {
      return 0;
  }
  if(p->left==NULL&&p->right==NULL)
  {
      return 1;
  }
  else
  {
      count=countLeaves(p->left)+countLeaves(p->right);
      return count;
  }
}
