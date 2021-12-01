#include "App.h"

int main() {
  App app;
  app.start();
  return 0;
}

/** Al correr el programa se requiere el input del usuario, un ejemplo de correr el programa es:

 clang++-7 -pthread -std=c++17 -o main App.cpp include/book.cpp include/magazine.cpp include/manga.cpp include/media.cpp main.cpp
 ./main

------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
8. Exit
7
   a. Add to favorites
   b. Delete from favorites
   c. View favorites
   d. Back to menu
a
Write the name of the show you want to add
Momo

------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
7. Favorite List [not implemented]
8. Exit
7
   a. Add to favorites
   b. Delete from favorites
   c. View favorites
   d. Back to menu
c
-------------------------------------------- Momo ------------

Name: Momo
ID: 02
Author: Michele_Ende
Genre: Fantasy
Length: 120
Raiting: 3.000000
---------------------------------
------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
7. Favorite List [not implemented]
8. Exit
7
   a. Add to favorites
   b. Delete from favorites
   c. View favorites
   d. Back to menu
b
Write the name of the show you want to delete
Momo

------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
7. Favorite List [not implemented]
8. Exit
7
   a. Add to favorites
   b. Delete from favorites
   c. View favorites
   d. Back to menu
c
-------------------------------------------------------------------
------------MENU------------------
clang++-7 -pthread -std=c++17 -o main App.cpp include/book.cpp include/magazine.cpp include/manga.cpp include/media.cpp main.cpp
 ./main

------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
7. Favorite List
8. Similar to
9. Exit
8
Write the name of the media you loved
Momo
Some similar media to Momo are:
 1.-Sports_Illustrated
 2.-Nudist_Beach_ni_Shuugaku_Ryokou_de
 3.-Sports_Illustrated
 4.-Nudist_Beach_ni_Shuugaku_Ryokou_de
 5.-People

------------MENU------------------

1. Sort by best rated
2. Search a particular genre [not implemented]
3. Display Media
4. Sort author [not implemented]
5. Sort name [not implemented]
6. Rate Media [not implemented]
7. Favorite List
8. Similar to
9. Exit

**/
