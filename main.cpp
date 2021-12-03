#include "App.h"

int main() {
  App app;
  app.start();
  return 0;
}

/***********CASO DE PRUEBA 1******************

Output:
    ------------MENU------------------

    1. Sort by best rated
    2. Display Media
    3. Favorite List
    4. Similar to
    5. Exit

Input: 1

Output: 
    ---------- Nudist_Beach_ni_Shuugaku_Ryokou_de ------------

    Name: Nudist_Beach_ni_Shuugaku_Ryokou_de
    ID: 09
    Mangaka: Shiwazu_no_Okina
    Status: Complete
    Volume: 1
    Genre: Hentai
    Raiting: 1.000000

    ---------- Sports_Illustrated ------------

    Name: Sports_Illustrated
    ID: 05
    Edition: 15
    Genre: Sports
    Raiting: 1.000000

    ---------- Nisekoi ------------

    Name: Nisekoi
    ID: 11
    Mangaka: Naoshi_Komi
    Status: Complete
    Volume: 13
    Genre: Shoujo
    Raiting: 3.000000

    ---------- People ------------

    Name: People
    ID: 06
    Edition: 45
    Genre: Gossip
    Raiting: 3.000000

    ---------- Momo ------------

    Name: Momo
    ID: 02
    Author: Michele_Ende
    Genre: Fantasy
    Length: 120
    Raiting: 3.000000

    ---------- National_Geographic ------------

    Name: National_Geographic
    ID: 04
    Edition: 1
    Genre: Scientific
    Raiting: 4.000000

    ---------- Elledecor ------------

    Name: Elledecor
    ID: 07
    Edition: 12
    Genre: Home
    Raiting: 4.000000

    ---------- Dragon_Slayer ------------

    Name: Dragon_Slayer
    ID: 08
    Mangaka: Koyoharu_Gotoge
    Status: Complete
    Volume: 2
    Genre: Shonen
    Raiting: 4.000000

    ---------- What_To_Say_Next ------------

    Name: What_To_Say_Next
    ID: 01
    Author: Julie_Buxbaum
    Genre: Romance
    Length: 289
    Raiting: 5.000000

    ---------- Yuri_on_Ice ------------

    Name: Yuri_on_Ice
    ID: 10
    Mangaka: Sayo_Yamamoto
    Status: Complete
    Volume: 3
    Genre: Yaoi
    Raiting: 5.000000

    ---------- Carrie ------------

    Name: Carrie
    ID: 03
    Author: Stephen_King
    Genre: Hentai
    Length: 167
    Raiting: 5.000000



**************CASO DE PRUEBA 2*************

Output:
    ------------MENU------------------

    1. Sort by best rated
    2. Display Media
    3. Favorite List
    4. Similar to
    5. Exit

Input: 2

Output: 

  ---------- What_To_Say_Next ------------

  Name: What_To_Say_Next
  ID: 01
  Author: Julie_Buxbaum
  Genre: Romance
  Length: 289
  Raiting: 5.000000

  ---------- Momo ------------

  Name: Momo
  ID: 02
  Author: Michele_Ende
  Genre: Fantasy
  Length: 120
  Raiting: 3.000000

  ---------- Carrie ------------

  Name: Carrie
  ID: 03
  Author: Stephen_King
  Genre: Hentai
  Length: 167
  Raiting: 5.000000

  ---------- National_Geographic ------------

  Name: National_Geographic
  ID: 04
  Edition: 1
  Genre: Scientific
  Raiting: 4.000000

  ---------- Sports_Illustrated ------------

  Name: Sports_Illustrated
  ID: 05
  Edition: 15
  Genre: Sports
  Raiting: 1.000000

  ---------- People ------------

  Name: People
  ID: 06
  Edition: 45
  Genre: Gossip
  Raiting: 3.000000

  ---------- Elledecor ------------

  Name: Elledecor
  ID: 07
  Edition: 12
  Genre: Home
  Raiting: 4.000000

  ---------- Dragon_Slayer ------------

  Name: Dragon_Slayer
  ID: 08
  Mangaka: Koyoharu_Gotoge
  Status: Complete
  Volume: 2
  Genre: Shonen
  Raiting: 4.000000

  ---------- Nudist_Beach_ni_Shuugaku_Ryokou_de ------------

  Name: Nudist_Beach_ni_Shuugaku_Ryokou_de
  ID: 09
  Mangaka: Shiwazu_no_Okina
  Status: Complete
  Volume: 1
  Genre: Hentai
  Raiting: 1.000000

  ---------- Yuri_on_Ice ------------

  Name: Yuri_on_Ice
  ID: 10
  Mangaka: Sayo_Yamamoto
  Status: Complete
  Volume: 3
  Genre: Yaoi
  Raiting: 5.000000

  ---------- Nisekoi ------------

  Name: Nisekoi
  ID: 11
  Mangaka: Naoshi_Komi
  Status: Complete
  Volume: 13
  Genre: Shoujo
  Raiting: 3.000000


**********CASO DE PRUEBA 3***********
Output:
------------MENU------------------

1. Sort by best rated
2. Display Media
3. Favorite List
4. Similar to
5. Exit

Input: 3

Output: 

      a. Add to favorites
      b. Delete from favorites
      c. View favorites
      d. Back to menu
Input: a

Output:
    Write the name of the media you want to add

Input: Momo

Output:

    ------------MENU------------------

    1. Sort by worst rated
    2. Display Media
    3. Favorite List
    4. Similar to
    5. Exit
    3
      a. Add to favorites
      b. Delete from favorites
      c. View favorites
      d. Back to menu
Input: c

Output:
    -------------------------------------------- Momo ------------

    Name: Momo
    ID: 02
    Author: Michele_Ende
    Genre: Fantasy
    Length: 120
    Raiting: 3.000000
    ---------------------------------

CASO DE PRUEBA 4

Output:
------------MENU------------------

1. Sort by best rated
2. Display Media
3. Favorite List
4. Similar to
5. Exit

Input: 4

Output: Write the name of the media you loved

Input: Momo

Output:
    Some similar media to Momo are:
    1.-Sports_Illustrated
    2.-Nudist_Beach_ni_Shuugaku_Ryokou_de
    3.-Sports_Illustrated
    4.-Nudist_Beach_ni_Shuugaku_Ryokou_de
    5.-People

*/
