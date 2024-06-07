#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int val; // value of the node
    ListNode* next; // pointer to the next node

    // constructors
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

int main() {
    // creating nodes
    ListNode* node1 = new ListNode(1);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(3);

    // linking nodes
    node1->next = node2;
    node2->next = node3;

    // accessing values
    cout << "Node 1 value: " << node1->val << endl;
    cout << "Node 2 value: " << node1->next->val << endl;
    cout << "Node 3 value: " << node1->next->next->val << endl;

    // freeing memory
    delete node1;
    delete node2;
    delete node3;

    return 0;
}