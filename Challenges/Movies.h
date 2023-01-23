#ifndef _Movies_H_
#define _Movies_H_


#include<iostream>
#include"Movie.h"
#include<vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;



class Movies
{
public:

	
	void ShowAllMovies();
	bool AddMovie(string name,Rating rating,long watched);
	void FindMovie(string name);
	bool AddWatchCount(string name);
	size_t NumberOfMovies();

	Movies();
	Movies(const Movies& movies);
	Movies(Movies&& movies) noexcept;
	//Movies& operator=(const Movies& movies);  Copy asignement for movies not implemented , uses same logic as copy constructor 
	//Movies& operator=(Movies&& movies);  Move Assignement for Movies not implemented, uses same logic as Move constructor
	//bool operator ==(const Movies &movies); comparison operators return true if the lists are identical , use this syntax for other operator overloading .
	//friend Movies operator+(const Movies &movies1 , const Movies &movies2); adding two list into one , decalring a friend of the class to be able to use the members freely. 

	~Movies();

private:
	 vector<Movie *> movies;
};

#endif 
