#ifndef _Movie_H_
#define _Movie_H_


#include<iostream>

using std::string;


//a type that only accept the names decalred inside the scope.

enum Rating
{
	PG,PG_13,R,G
};


class Movie
{
public:

	string getName() const {
		return this->name;
	}
	Rating getRating() const {
		return this->rating;
	}
	long getWatched() const {
		return this->watched;
	}
	void AddWatchCount() {
		watched++;
	}

	Movie(string name, Rating rating=R, long watched=0);
	Movie(Movie &movie);
	//Movie(Movie&& movie);
	~Movie();

private:
	string name;
	Rating rating;
	long watched;
};

#endif 
