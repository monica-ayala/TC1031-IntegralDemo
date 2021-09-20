#include "media.h"

media::media(){}
media::media(string _ID, string _name, Genre _genre, float _raiting){
  ID = _ID;
  name = _name;
  genre = _genre;
  raiting = _raiting;
}

string media::getID(){
  return ID;
}
string media::getName(){
  return name;
}
Genre media::getGenre(){
  return genre;
}
float media::getRaiting(){
  return raiting;
}
void media::setID(string ID){
}
void media::setName(string name){}
void media::setGenre(Genre genre){}
void media::setRaiting(float raiting){}
