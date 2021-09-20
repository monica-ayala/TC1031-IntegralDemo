#include "include/book.h"
#include "include/genre.h"
#include "include/media.h"
#include "include/manga.h"
#include "include/status.h"
#include "include/magazine.h"
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <fstream>
using namespace std;

class App{
  private:
    vector <media*> vectorMedia;
  public:
    App();
    void start();
    bool menu();
    void LoadBooks(ifstream &file);
    void LoadMagazines(ifstream &file);
    void LoadManga(ifstream &file);
    int maxMedia(const char* file);
    Genre readGenre(ifstream &input);
    Status readStatus(ifstream &input);
    void displayMedia();
    void sortByRaiting();
    void sortByGenre();
    void rateMedia();
    void sortByAlphabeticalOrder();
    void sortByAuthor();
    void swap(int i, int j);
};