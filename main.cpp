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
2. Search a particular genre
3. Display Media
4. Sort author
5. Sort name
6. Rate Media
7. Exit
1

------------MENU------------------

1. Sort by best rated
2. Search a particular genre
3. Display Media
4. Sort author
5. Sort name
6. Rate Media
7. Exit
3
---------- Nudist_Beach_ni_Shuugaku_Ryokou_de ------------

Name: Nudist_Beach_ni_Shuugaku_Ryokou_de
ID: id
Mangaka: Shiwazu_no_Okina
Status: Complete
Volume: 1
Genre: Hentai
Raiting: 1.000000

---------- Sports_Illustrated ------------

Name: Sports_Illustrated
ID: id
Edition: 15
Genre: Sports
Raiting: 1.000000

---------- Nisekoi ------------

Name: Nisekoi
ID: id
Mangaka: Naoshi_Komi
Status: Complete
Volume: 13
Genre: Shoujo
Raiting: 3.000000

---------- People ------------

Name: People
ID: id
Edition: 45
Genre: Gossip
Raiting: 3.000000

---------- Momo ------------

Name: Momo
ID: id
Author: Michele_Ende
Genre: Fantasy
Length: 120
Raiting: 3.000000

---------- National_Geographic ------------

Name: National_Geographic
ID: id
Edition: 1
Genre: Scientific
Raiting: 4.000000

---------- Elledecor ------------

Name: Elledecor
ID: id
Edition: 12
Genre: Home
Raiting: 4.000000

---------- Dragon_Slayer ------------

Name: Dragon_Slayer
ID: id
Mangaka: Koyoharu_Gotoge
Status: Complete
Volume: 2
Genre: Shonen
Raiting: 4.000000

---------- What_To_Say_Next ------------

Name: What_To_Say_Next
ID: id
Author: Julie_Buxbaum
Genre: Romance
Length: 289
Raiting: 5.000000

---------- Yuri_on_Ice ------------

Name: Yuri_on_Ice
ID: id
Mangaka: Sayo_Yamamoto
Status: Complete
Volume: 3
Genre: Yaoi
Raiting: 5.000000

---------- Carrie ------------

Name: Carrie
ID: id
Author: Stephen_King
Genre: Hentai
Length: 167
Raiting: 5.000000 **/
