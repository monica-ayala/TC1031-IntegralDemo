#include "media.h"

class book:public media{
  protected:
    int length;
    string author;
  public:
    book();
    book(string _ID, string _name, Genre _genre, float _raiting, int _length, string _author);
    int getLength();
    string getAuthor();
    void setLength(int _length);
    void setAuthor(string _author);
};