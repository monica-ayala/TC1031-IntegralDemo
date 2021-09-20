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