# Description
AVL tree in C++

This is just a toy program, not a real project. There is no remove function or interactivity. Object files compiled on Ubuntu 18.04.
# Figures
AVL tree balancing algorithms rearrange the nodes when the left or right branch of any node becomes more than one node longer than the other side. They encounter 4 cases:
* [Straight right heavy branch](images/AVL%20shift%20left.png)
* [Bent right heavy branch](images/AVL%20straighten%20right%20bend.png)
* Straight left heavy branch
* Bent left heavy branch

Bent branches are straightened into their straight counterparts. Then the straight branches are shifted to the other side so each branch is the same length.
## Key
Black ink is the imbalanced tree. Blue ink is changes to that tree by the balance function.

The beans are AVL nodes. The left half is the left pointer, and the right half is the right pointer.

The arrows are where the pointers go to. If an arrow is crossed out it has been set to null.

"prev" is the previous pointer to the top node. It could be from another node or the root of the tree, and left and right shifts change the node it points to.
