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
float media::getSim(){
  return sim;
}


float media :: operator%(const media& val){
  float similarity=0;
  if(genre==val.genre){
    similarity = similarity + 50;
  }
  else if(genre!=val.genre){
    similarity = similarity + 10;
  }
  if(raiting==val.raiting){
    similarity = similarity + 49;
  }
  else if(raiting!=val.raiting){
    float d = raiting - val.raiting;
    similarity = similarity + 50 - d*10;
  }
  return similarity/100;
}

void media::setID(string ID){
}
void media::setSim(float similarity){
  sim = similarity;
}
void media::setName(string name){}
void media::setGenre(Genre genre){}
void media::setRaiting(float raiting){}

//{Romance, Fantasy, NonFiction, SciFi, Shonen, Shoujo, Yaoi, Hentai, Scientific, Gossip, Sports, Home, Unknown};

string media::displayGenre(){
  Genre ch = genre;
  string aux = "";
  if(ch==Genre::Romance){aux = "Romance";}
  else if(ch==Genre::Fantasy){aux = "Fantasy";}
  else if(ch==Genre::NonFiction){aux = "NonFiction";}
  else if(ch==Genre::SciFi){aux = "SciFi";}
  else if(ch==Genre::Shonen){aux = "Shonen";}
  else if(ch==Genre::Shoujo){aux = "Shoujo";}
  else if(ch==Genre::Yaoi){aux = "Yaoi";}
  else if(ch==Genre::Hentai){aux = "Hentai";}
  else if(ch==Genre::Scientific){aux = "Scientific";}
  else if(ch==Genre::Gossip){aux = "Gossip";}
  else if(ch==Genre::Sports){aux = "Sports";}
  else if(ch==Genre::Home){aux = "Home";}
  else if(ch==Genre::Unknown){aux = "Unknown";}
  return aux;
}
