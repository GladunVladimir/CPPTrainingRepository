struct node
{
  int data;
  node * left;
  node * right;
};

/*void print_Tree(node * p,int level)
{
    if(p)
    {
        print_Tree(p->left,level + 1);
        for(int i = 0;i< level;i++) std::cout<<"   ";
        std::cout << p->data << std::endl;
        print_Tree(p->right,level + 1);
    }
}