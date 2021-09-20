#include "App.h"

App::App(){}
void App :: start(){
  ifstream file("book.txt");
  LoadBooks(file);
  ifstream file2("magazine.txt");
  LoadMagazines(file2);
  ifstream file3("manga.txt");
  LoadManga(file3);
  while (true){
    bool stop;
    stop=menu();
    if (stop == true){
      break;
    }
  }
}
bool App :: menu(){
  cout << endl << "------------MENU------------------"<<endl<<endl;
  cout<<"1. Media by raiting"<<endl;
  cout<<"2. Media by genre"<<endl;
  cout<<"3. Display Media"<<endl;
  cout<<"4. Sort author"<<endl;
  cout<<"5. Sort name"<<endl;
  cout<<"6. Rate Media"<<endl;
  cout<<"7. Exit"<<endl;

  int op;
  cin >> op;
  switch (op){
    case 1:
      sortByRaiting();
      break;
    case 2:
      sortByGenre();
      break;
    case 3:
      displayMedia();
      break;
    case 4:
      sortByAuthor();
      break;
    case 5:
      sortByAlphabeticalOrder();
      break;
    case 6:
      rateMedia();
      break;
    case 7:
      return true;
      break; 
  }
  return false;
}
void App :: LoadBooks(ifstream &file){

  for(int i=0;i<=maxMedia("book.txt");i++){
    string ID;
    string name;
    Genre genre;
    float raiting;
    int length;
    string author;
    file >> ID;
    file >> name;
    genre = readGenre(file);
    file >> raiting;
    file >> length;
    file >> author;
    vectorMedia.push_back(new book(ID,name,genre,raiting,length, author)); 
  }
}
void App :: LoadMagazines(ifstream &file){

  for(int i=0;i<=maxMedia("magazine.txt");i++){
    string ID;
    string name;
    Genre genre;
    float raiting;
    int edition;
    file >> ID;
    file >> name;
    genre = readGenre(file);
    file >> raiting;
    file >> edition;
    vectorMedia.push_back(new magazine(ID,name,genre,raiting,edition)); 
  }
}
void App :: LoadManga(ifstream &file){
  for(int i=0;i<=maxMedia("manga.txt");i++){
    string ID;
    string name;
    Genre genre;
    float raiting;
    int volume;
    string mangaka;
    Status status;

    file >> ID;
    file >> name;
    genre = readGenre(file);
    file >> raiting;
    file >> volume;
    file >> mangaka;
    status = readStatus(file);
    vectorMedia.push_back(new manga(ID,name,genre,raiting,volume, mangaka, status)); 
  }
}
int  App :: maxMedia(const char* file){
  ifstream inFile(file);
  int c = std::count(istreambuf_iterator<char>(inFile),istreambuf_iterator<char>(), '\n');
  return c;
}

Status App :: readStatus(ifstream &input){
  char ch;
  input >> ch;
  switch(ch){
    case 'C':
      return Status :: Complete;
    case 'I':
      return Status :: Incomplete;
    default:
      return Status :: Unknown;
  }
}
Genre App :: readGenre(ifstream &input){
  char ch;
  input >> ch;
  switch(ch) {
    case 'R':
      return Genre::Romance;
    case 'F':
      return Genre::Fantasy;
    case 'N':
      return Genre::NonFiction;
    case 'S':
      return Genre::SciFi;
    case 'A':
      return Genre::Shonen;
    case 'J':
      return Genre::Shoujo;
    case 'Y':
      return Genre::Yaoi;
    case 'H':
      return Genre::Hentai;
    case 'C':
      return Genre::Scientific;
    case 'G':
      return Genre::Gossip;
    case 'D':
      return Genre::Sports;
    case 'M':
      return Genre::Home;
    default:
      return Genre::Unknown;
  }
}

void App :: displayMedia(){
  for(media *i : vectorMedia){
    cout<<i->displayInformation()<<endl;
  }
}

void App::swap(int i, int j) {
	media* aux = vectorMedia[i];
	vectorMedia[i] = vectorMedia[j];
	vectorMedia[j] = aux;
}

void App :: sortByRaiting(){
  int min;
	for (int i = 0; i < vectorMedia.size()-1; i++) {
    min = i;
		for (int j = vectorMedia.size()-1; j >= i+1; j--) {
			if (vectorMedia[j]->getRaiting() < vectorMedia[min]->getRaiting()) {
				min = j;
			}
		}

		if (min != i) {
			swap(min, i);
		}
	}
}
void App :: sortByGenre(){}
void App :: rateMedia(){}
void App :: sortByAlphabeticalOrder(){}
void App :: sortByAuthor(){}