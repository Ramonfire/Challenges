#include"Movies.h"


void Movies::ShowAllMovies()
{
	cout << "\t" << "name" << "\t" << "rating" << "\t" << "watche count" << endl;
	for (auto var:movies)
	{
		cout << "\t" << (*var).getName() << "\t"; 

		if ((*var).getRating()==PG)
		{
			cout << "PG" << "\t";
		}
		else if ((*var).getRating()== PG_13)
		{
			cout << "PG-13" << "\t";
		}
		else if ((*var).getRating()==G)
		{
			cout << "G" << "\t";
		}else 
		{
			cout << "R" << "\t";
		}
		
		cout<< (*var).getWatched() << endl;
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
			cout << "\t" << (*var).getName() << "\t";

		if ((*var).getRating() == PG)
		{
				cout << "PG" << "\t";
		}
		else if ((*var).getRating() == PG_13)
		{
				cout << "PG-13" << "\t";
		}
		else if ((*var).getRating() == G)
		{
				cout << "G" << "\t";
		}
		else
		{
				cout << "R" << "\t";
		}

			cout << (*var).getWatched() << endl;
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

//deep copy
Movies::Movies(Movies& list)
{
	for  (auto var : list.movies)
	{
		this->movies.push_back(new Movie(*(var)));
	}
	cout << "copied list of size" << list.movies.size() << " into your target" << endl;
}

// Moving object: syntax => Movies* move = new Movies(std::move(*movies));
Movies::Movies(Movies&& list) :movies{list.movies}
{
	for (auto var : list.movies)
	{
		var = nullptr;
	}

	cout << "Moved list of size" << list.movies.size() << " into your target" << endl;
	list.movies.clear();

}

Movies::~Movies()
{
	cout << "freeing Memory and destorying object" << endl;
	for (auto var : movies)
	{
		delete var;

	}
	movies.clear();
	
}
