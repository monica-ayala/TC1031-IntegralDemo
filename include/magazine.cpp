#include "magazine.h"

magazine::magazine(){}
magazine::magazine(string _ID, string _name, Genre _genre, float _raiting, int _edition):media( _ID, _name, _genre, _raiting){
  edition = _edition;
}
int magazine::getEdition(){
  return edition;
}
void magazine::setEdition(int _edition){
  edition = _edition;
}

string magazine :: displayInformation(){
  string info= "---------- "+name+" ------------\n\n";
  info = info + "Name: " + getName()+"\n";
  info = info + "ID: " + getID()+"\n";
  info = info + "Edition: " + to_string(getEdition())+"\n";
  info = info + "Genre: " + displayGenre()+"\n";
  info = info + "Raiting: " + to_string(getRaiting())+"\n";
  return info;
}