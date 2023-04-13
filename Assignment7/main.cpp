/* Tyler Holmes
 * Deepa Muralidhar
 * CS 3305
 * Assignment 7
 * */

#include <string>
#include "bst.h"
using namespace std;

int rnd() {
    return rand() % 10000;
}

void smallestDepthBST(binary_search_tree<string>& bst, string data[], int first, int last) {
	if (first <= last) {
		int middle = (last + first) / 2;
		bst.insert(data[middle]);
		cout << data[middle] << endl;
		smallestDepthBST(bst, data, first, middle - 1);
		smallestDepthBST(bst, data, middle + 1, last);
	} else { return; }
}


int main() {
	
	string data[] = {"after", "also", "any", "back", "beacuse", "come", "day", "even", "first", "give", "how", "its", "look", "most", "new", "now", "only", "other", "our", "over", "than", "then", "these", "think", "two", "us", "use", "want", "way", "well", "work"};
	binary_search_tree<string> bst;
	int size = 30;
	smallestDepthBST(bst, data, 0, size);
	// Prints the BST
    print(bst.get_root(), 0);
	cout << endl;
	cout << "Tree size: " << tree_size(bst.get_root()) << endl;
    // Prints if BST is balanced or not
    cout << "Balanced? ";
    if (bst.is_balanced() == -2) {
        cout << "No" << endl << endl;
    } else if (bst.is_balanced() == -1) {
        cout << "Tree is empty" << endl << endl;
    } else {
        cout << "Yes, depth is " << bst.is_balanced() << endl << endl;
    }
	
	/*
	binary_search_tree<string> bst;
    cout << bst << endl;
    bst.insert("baker");
    cout << bst << endl;

    // making sure the output operator was working properly.
    bst.get_root()->set_left(new binary_tree_node<string>("able"));
    cout << bst << endl;
    bst.get_root()->set_right(new binary_tree_node<string>("charlie"));
    cout << bst << endl;
    
    bst.insert("arthur");
    print(bst.get_root(), 0);
    cout<<endl;
    
    string data[] = {"able", "baker", "charlie", "dog", "easy", "fox", "george"};
    int size = 7;
    binary_search_tree<string> bst1;
    for (int i = 0; i < size; ++i) {
        bst1.insert(data[i]);
        cout << bst1 << endl;
    }
    cout << "balanced? " << bst1.is_balanced() << endl << endl;

	int size2 = 7;
    string data2[] = {"dog", "baker", "able", "fox", "charlie",  "george", "easy"};
    binary_search_tree<string> bst2;
    for (int i = 0; i < size2; ++i) {
        bst2.insert(data2[i]);
        cout << bst2 << endl;
    }
    print(bst2.get_root(), 0);
    cout << "balanced? " << bst2.is_balanced() << endl << endl;
	
    binary_search_tree<int> bst3;
    for(int i = 0; i < 50; i++ ) {
        bst3.insert(rnd());
    }
    cout << bst3 << endl;
    cout << "balanced? " << bst3.is_balanced() <<  endl << endl;
    
    cout << "remove " << bst2.remove("able") << endl;
    cout << bst2 << endl;
    cout << "remove " << bst2.remove("baker") << endl;
    cout << bst2 << endl;
    cout << "remove " << bst2.remove("fox") << endl;
    cout << bst2 << endl;
    print(bst2.get_root(), 0);
	*/
}
