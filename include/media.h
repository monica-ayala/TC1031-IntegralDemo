#ifndef MEDIA_H
#define MEDIA_H

#include "genre.h"
#include <iostream>

using namespace std;

class media{
  protected:
    string ID;
    string name;
    Genre genre;
    float raiting;
  public:
    media();
    media(string _ID, string _name, Genre _genre, float _raiting);
    string getID();
    string getName();
    Genre getGenre();
    float getRaiting();
    int getLength();
    void setID(string ID);
    void setName(string name);
    void setGenre(Genre genre);
    void setRaiting(float raiting);
};

#endif

