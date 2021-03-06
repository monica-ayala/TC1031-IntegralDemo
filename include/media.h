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
    float sim;
  public:
    media();
    media(string _ID, string _name, Genre _genre, float _raiting);
    string getID();
    string getName();
    Genre getGenre();
    float getRaiting();
    float getSim();
    float operator%(const media& val);
    int getLength();
    void setID(string ID);
    void setName(string name);
    void setGenre(Genre genre);
    void setRaiting(float raiting);
    void setSim(float similarity);
    virtual string displayInformation()=0;
    string displayGenre();
};

#endif

