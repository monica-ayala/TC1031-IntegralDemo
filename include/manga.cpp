#include "manga.h"

manga::manga(){}
manga::manga(string _ID, string _name, Genre _genre, float _raiting, int _volume, string _mangaka, Status _status):media(_ID,_name,_genre,_raiting){
  volume = _volume;
  mangaka = _mangaka;
  status = _status;
}
int manga::getVolume(){
  return volume;
}
string manga::getMangaka(){
  return mangaka;
}
Status manga::getStatus(){
  return status;
}
void manga::setVolume(int _volume){
  volume = _volume;
}
void manga::setMangaka(string _mangaka){
  mangaka = _mangaka;
}
void manga::setStatus(Status _status){
  status = _status;
}
string manga::displayStatus(){
  Status ch = status;
  string aux = "";
  if(ch==Status::Complete){aux = "Complete";}
  else if(ch==Status::Incomplete){aux = "Incomplete";}
  else if(ch==Status::Unknown){aux = "Unknown";}
  return aux;
}

string manga :: displayInformation(){
  string info= "---------- "+name+" ------------\n\n";
  info = info + "Name: " + getName()+"\n";
  info = info + "ID: " + getID()+"\n";
  info = info + "Mangaka: " + getMangaka()+"\n";
  info = info + "Status: " + displayStatus()+"\n";
  info = info + "Volume: " + to_string(getVolume())+"\n";
  info = info + "Genre: " + displayGenre()+"\n";
  info = info + "Raiting: " + to_string(getRaiting())+"\n";
  return info;
}