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
	~Movies();

private:
	 vector<Movie *> movies;
};

#endif 
#pragma once
