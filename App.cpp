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
  cout<<"1. Sort by best rated"<<endl;
  cout<<"2. Search a particular genre [not implemented]"<<endl;
  cout<<"3. Display Media"<<endl;
  cout<<"4. Sort author [not implemented]"<<endl;
  cout<<"5. Sort name [not implemented]"<<endl;
  cout<<"6. Rate Media [not implemented]"<<endl;
  cout<<"7. Favorite List"<<endl;
  cout<<"8. Similar to"<<endl;
  cout<<"9. Exit"<<endl;

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
      favoriteList();
      break;
    case 8:
      similarTo();
      break;
    case 9:
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
void App :: favoriteList(){
  cout<<"   a. Add to favorites"<<endl;
  cout<<"   b. Delete from favorites"<<endl;
  cout<<"   c. View favorites"<<endl;
  cout<<"   d. Back to menu"<<endl;
  char op;
  cin >> op;
  switch (op){
    case 'a':
      addToFavorites();
      break;
    case 'b':
      deleteFromFavorites();
      break;
    case 'c':
      searchFavorites();
      break;
    case 'd':
      break;
  }
}

void App :: addToFavorites(){
  string str;
  cout<<"Write the name of the media you want to add"<<endl;
  cin>>str;
  media* newFavorite;
  replace(str.begin(), str.end(), ' ', '_');
  for (int i = 0; i < vectorMedia.size()-1; i++) {
    if(vectorMedia[i]->getName()==str){
      newFavorite = vectorMedia[i];
    }
  }
  favoriteMedia.insertion(newFavorite);

}
void App :: deleteFromFavorites(){
  string str;
  cout<<"Write the name of the media you want to delete"<<endl;
  cin>>str;
  media* newFavorite;
  replace(str.begin(), str.end(), ' ', '_');
   for (int i = 0; i < vectorMedia.size()-1; i++) {
    if(vectorMedia[i]->getName()==str){
      newFavorite = vectorMedia[i];
    }
  }
  int index;
  index = favoriteMedia.search(newFavorite);
  favoriteMedia.deleteAt(index);
}
void App :: searchFavorites(){
  cout<<favoriteMedia.toString();
}

//CORRECTION NEEDED TO STOP REC´S FROM REPEATING
// Possible solution: organize the heap with object type <*media> and not only with <float>


void App :: similarTo(){
  priority_queue<float> queueSim;
  float sim;
  string str;
  media* compareMedia;
  cout<<"Write the name of the media you loved"<<endl;
  cin>>str;

  for (int i = 0; i < vectorMedia.size()-1; i++) {
    if(vectorMedia[i]->getName()==str){
      compareMedia = vectorMedia[i];
    }
  }

  for (int i = 0; i < vectorMedia.size()-1; i++) {
    sim=(float)(*vectorMedia[i]%*compareMedia);
    queueSim.push(sim);
    vectorMedia[i]->setSim(sim);
  }
  
  queueSim.pop();
  int j=1;
  cout<<"Some similar media to "<<str<<" are:"<<endl;
  for (int k = 0; k < 3; k++) {
    for (int i = 0; i < vectorMedia.size()-1; i++) {
      if(vectorMedia[i]->getSim()==queueSim.top()){
        cout<<" "<<j<<".-"<<vectorMedia[i]->getName()<<endl;;
        j++;
      }
    } 
    queueSim.pop();
  }
  

}