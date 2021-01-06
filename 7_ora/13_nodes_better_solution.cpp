nclude <iostream>
struct Node
{
    int val;
    Node *left, *right;
    Node( int i )
    {
        val = i;
        left = right = 0;
    }
};

void insert( Node*& n, int v )
{
    if ( n ) // n != 0
    {
        insert( v < n->val ? n->left : n->right, v );
    }
    else
    {
        n = new Node( v );
    }
}

void dealloc( Node* n )
{
    if ( n )
    {
        dealloc( n->left );
        dealloc( n->right );
        delete n;
    }
}

void print( const Node* n )
{
    if ( n )
    {
        print( n->left ); // (*n).left
        std::cout << n->val << ' ';
        print( n->right );
    }
}

int main()
{
    Node* root = 0;
    int i;
    while( std::cin >> i )
    {
        insert( root, i );
    }
    print( root );
    std::endl( std::cout );
    dealloc( root );
}