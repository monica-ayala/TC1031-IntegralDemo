#include "book.h"

book::book(){}
book::book(string _ID, string _name, Genre _genre, float _raiting, int _length, string _author):media(_ID,_name,_genre,_raiting){
  length = _length;
  author = _author;
}

int book::getLength(){
  return length;
}
string book::getAuthor(){
  return author;
}
void book::setLength(int _length){
  length = _length;
}
void book::setAuthor(string _author){
  author = _author;
}

string book :: displayInformation(){
  string info= "---------- "+name+" ------------\n\n";
  info = info + "Name: " + getName()+"\n";
  info = info + "ID: " + getID()+"\n";
  info = info + "Author: " + getAuthor()+"\n";
  info = info + "Genre: " + displayGenre()+"\n";
  info = info + "Length: " + to_string(getLength())+"\n";
  info = info + "Raiting: " + to_string(getRaiting())+"\n";
  return info;
}