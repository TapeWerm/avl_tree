// Vincent Vermilya
#include "avl_tree.h"

avl_tree::avl_tree(): root(NULL) {}

avl_tree::avl_tree(const avl_tree& src) {
	if (src.root) {
		root = new avl_node((const avl_node&)src.root);
	} else {
		root = NULL;
	}
}

avl_tree::~avl_tree() {
	if (root) {
		delete root;
	}
}

// Wrapper function
void avl_tree::display() const {
	if (!root) {
		cout << "💢 root is null" << endl;
		return;
	}
	root->display_all(0);
	return;
}

// Wrapper function
bool avl_tree::append(const avl_node& src) {
	if (!root) {
		root = new avl_node(src);
		return true;
	}
	if (src.get_height()) {
		cout << "💢 Can't append node with children" << endl;
		return false;
	}
	root->append(src);
	root->balance(root);
	return true;
}

int main() {
	avl_tree hairy_tree;
	hairy_tree.display();
	hairy_tree.append(avl_node(10));
	hairy_tree.append(avl_node(5));
	hairy_tree.append(avl_node(15));
	hairy_tree.append(avl_node(14));
	hairy_tree.append(avl_node(16));
	hairy_tree.append(avl_node(17));
	hairy_tree.display();
	return 0;
}
