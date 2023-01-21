#include"Movies.h"


void Movies::ShowAllMovies()
{
	cout << "\t" << "name" << "\t" << "rating" << "\t" << "watche count" << endl;
	for (auto var:movies)
	{
		cout << "\t" << (*var).getName() << "\t" << (*var).getRating() << "\t" << (*var).getWatched() << endl;
	}
	cout << "=========================================================";
}

bool Movies::AddMovie(string name, Rating rating, long watched)
{
	for (auto var : movies)
	{
		if ((*var).getName()==name)
		{
			cout << "A movie with the same name already exists" << endl;
			return false;
		}
	}
	Movie* newMovie = new Movie(name, rating, watched);
	this->movies.push_back(newMovie);
	cout << "added Movie " << (*newMovie).getName() << endl;
	newMovie=nullptr;
	return true;
	
}

void Movies::FindMovie(string name)
{
	cout << "\t" << "name" << "\t" << "rating" << "\t" << "watch count" << endl;
	for (auto var : movies)
	{
		if ((*var).getName() == name)
		{
			cout << "\t" << (*var).getName() << "\t" << (*var).getRating() << "\t" << (*var).getWatched() << endl;
			return;
		}
	}
	cout << "=========================================================";
}

bool Movies::AddWatchCount(string name)
{
	for (auto var : movies)
	{
		if ((*var).getName() == name)
		{
			
			cout << "current watch count is : " << (*var).getWatched() << endl;
			(*var).AddWatchCount();
			return true;
		}
	}

	return false;
}

size_t Movies::NumberOfMovies()
{
	return movies.size();
}



Movies::Movies()
{
}

Movies::~Movies()
{
	for (auto var : movies)
	{
		delete var;

	}
	movies.clear();
	
}
