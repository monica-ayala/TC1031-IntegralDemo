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