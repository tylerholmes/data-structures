#include <cstdlib>

class chore {
public:
	typedef char value_type;
	size_t capacity;
	
	// constructor
	chore();
	// Insert
	// Precondition: input is the correct var type 
	// Postcondition: input inserted into list
	void insertion(const value_type& input);
	
	// Size 
	// Precondition: size exists
	// Postcondition: size is returned 
	size_t size() const;
	
	// Prints contents
	// Precondition: list exists 
	// Postcondition: contents of list printed
	void print();
	
	// Deleted input
	// Precondition: inputted string exists in list
	// Postcondition: inputted string deleted
	bool deletion(const value_type& input);
	
	// Destructor
	~chore();
	
	// Private Variable and pointer
private:
	value_type *data;
	size_t used;
};