#include"Movie.h"





//constructor

Movie::Movie(string newName, Rating newRating, long newWatched) :name{ newName }, rating{ newRating }, watched{ newWatched }
{
	std::cout << "creating movie : " << this->name << " watched :" << this->watched << " times , rated : " << this->rating << std::endl;
}


//copy

Movie::Movie(Movie& movie) :name{ movie.name }, rating{ movie.rating }, watched{ movie.watched }
{
	std::cout << "Copying movie : " << this->name << " watched :" << this->watched << " times , rated : " << this->rating << std::endl;
}


//deconstructor-destroyer
Movie::~Movie()
{
	std::cout << "Destorying movie : " << this->name << " watched :" << this->watched << " times" << std::endl;
}