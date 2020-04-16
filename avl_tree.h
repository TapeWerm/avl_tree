// Vincent Vermilya
#include <iostream>
using namespace std;

class avl_node {
	public:
		avl_node();
		avl_node(int src_burritos);
		avl_node(const avl_node& src);
		~avl_node();
		void display() const;
		void display_all(int depth) const;
		int get_height() const;
		int get_balance() const;
		avl_node* tail_left();
		avl_node* tail_right();
		void set_burritos(int src);
		void append(const avl_node& src);
		// No remove function
		void balance(avl_node*& prev);
	protected:
		int burritos;
		avl_node* left;
		avl_node* right;
};

class avl_tree {
	public:
		avl_tree();
		avl_tree(const avl_tree& src);
		~avl_tree();
		void display() const;
		bool append(const avl_node& src);
	protected:
		avl_node* root;
};
