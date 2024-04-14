typedef struct Tree{
    struct Tree *smallest;
    struct Tree *biggest;
    int value;
};

struct Tree* create_tree(int value);

/**
 * Function to insert a new smallest value.
 * @param tree A pointer to a tree object.
 * @param new_value The new smallest value of the tree.
*/
void push_smallest(struct Tree* tree, int new_value);

/**
 * Function to insert a new biggest value.
 * @param tree A pointer to a tree object.
 * @param new_value The new biggest value of the tree.
*/
void push_biggest(struct Tree* tree, int new_value);

/**
 * Function to clear memory allocation used in a tree object.
 * @param tree A pointer to a tree object.
*/
void free_tree(struct Tree* tree);

