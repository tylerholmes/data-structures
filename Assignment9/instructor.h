#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <cstdlib>
#include <string>

struct Instructor {
	std::string instructorID;
	std::string firstName;
	std::string lastName;
	std::string courseName;
	std::string courseID;
	
	// we need these  comparison operators for the hash table
	bool operator==(Instructor& other)
	{
		return instructorID == other.instructorID and courseID == other.courseID;
	}
	
	bool operator!=(Instructor& other)
	{
		return instructorID != other.instructorID or courseID != other.courseID;
	}
};

#endif