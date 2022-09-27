/*
 * Class:	CS 3305
 * Date:	2/5/2021
 * Term:	Spring 2021
 * Name:	Tyler Holmes
 * Instructor:	Deepa Muralidhar
 * Assignment: 2
 * */

#include <cstdlib> // provides general functions
#include <assert.h> // provides assert function
#include "sequence1.h" // provides sequence constructor/methods for implementation
using namespace std;

namespace main_savitch_3
{
const sequence::size_type sequence:: CAPACITY;

// Implements constructor and assigns variable values
// Expected output is the size and current index values
sequence::sequence(){
    current_index = 0;
    used = 0;
}

// Provides first item in sequence
// No output since it is void
void sequence::start(){
    current_index= 0;
}

// Advances current index up one
// No output since it is void
void sequence::advance(){
    if (is_item()== true)
    {current_index++;
    }
}

// Inserts a user inputed value into the sequence before the current index
void sequence::insert(const value_type& entry){
    int i;
    assert (size()< CAPACITY);
    if (is_item() == false){
        current_index=0;}
    for (i = used; i > current_index; i--){
        data[i] = data [i-1];}
    data[current_index]= entry;
    used++;
}

// attaches a user inputed value after the current index
 void sequence:: attach(const value_type& entry){
    int i;
    assert (size()< CAPACITY);
    if (is_item() == false){
        data[used-1]= entry;}
    for (i= used; i> current_index; i--){
        data[i]= data[i+1]; 
    }
    data[current_index]= entry;
    used++;
 }
 
// removes the current item is removed from sequence
void sequence::remove_current(){
    int i;
    assert(is_item()== true);
    for (i= current_index + 1; i< used - 1; i++){
        data [i]= data[i+1];
        used--;
    }
}

// returns the size of the sequence
sequence::size_type sequence::size() const {
	return used;
}

// returns whether a current item is valid or not
bool sequence::is_item() const {
    if(current_index< used)	{
        return true;}
}
sequence::value_type sequence:: current() const{
    return data[current_index];}
}