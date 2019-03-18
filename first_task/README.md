# So let's get the party started :)

I want you to write a sorting function. For now it will be just integers. I expect you to use a bit untraditional algorythm.
So let's start with a structure for a binary tree. I put tree structure at [tree.hpp] so you can use it. If it cannot satisfy your needs, feel free to edit it.
I need you to generate random length random numbers sequence and put it into the `std::vector<int>`. Use this object to sort your numbers.
Sequence length must be at least `1` but less than `RAND_MAX`(it's global scope variable used to control `rand()` result boundaries).
When you get filled vector you should pass it to your sorting function which will be using a binary tree to perform it's task.

## Tips

1. Use `node* root = (node*) malloc(sizeof(node));` to allocate one tree node. For child nodes use `root->left = (node*) malloc(sizeof(node))`. So you can access fields using `operator->`.

2. Resulting vector will be a massive object, so, because of the fact that C++ always performs an object copying, you should pass it from function to function not as `std::vector<int>` but as `const std::vector<int>&`. `const` are optional as a matter of fact that when you sort it, you must change it, but const won't allow you to do it, so just remove it in a function declaration.

## Afterwords

 To check that your sorting algorythm is working perfectly clear we will be using `std::sort` algorythm. I will expalin you more about how to write that check. We will wrap it into `BOOST_AUTO_TEST_CASE`.
 As you can see task is pretty big and complex to start of. So first of all I want you to write numbers generator. We will see how it should be wrapped and I'll show you an alternate way to generate numbers. So as time passes, we will be exploring all underlying conditions of this task and complete it step by step.