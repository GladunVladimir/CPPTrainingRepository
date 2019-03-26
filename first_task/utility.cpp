#include "utility.hpp"

#include <cstdlib>
#include <ctime>

void util::generate_sequence(std::list<int>& container)
{
	int size = 1 + (rand() % RAND_MAX);
	for(int i = 0; i < size; i++)
	{
	  int elem = 1 + (rand() % RAND_MAX);
	  container.push_back(elem); 
	}	
}	

node* create_tree(const std::list<int>&);

void util::sort(std::list<int>& container)
{
	node* root = create_tree(container);

}

node* create_tree(const std::list<int>& list)
{
	assert(list.size() != 0);
	node * root = (node*) malloc(sizeof(node));
	root->data = *list.cbegin();
	root->left = NULL;
	root->right = NULL;
	for(std::list<int>::const_iterator iter = ++list.cbegin(); iter != list.cend(); iter++)
  {
  	node* root_pointer = root;
  	int current_number = *iter;
  	while(root_pointer)
  	{
  		if(current_number < root_pointer->data)
  		{
  			root_pointer = root_pointer->left;
  		}
  		else
  		{
  			root_pointer = root_pointer->right;
  		}
  	}
  	root_pointer = (node*) malloc(sizeof(node));
  	root_pointer->data = current_number;
  }
  return root;
}  

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
/*показ дерева*/
/*void show_tree(const std::list<int>& tree)
{
	if (tree != NULL)
	{
		show_tree(tree->left);
		cout << Tree->x << '\t';
		show_tree(Tree->right);
	}
}
*/