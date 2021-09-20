#include "media.h"
#include "status.h"

//ID name genre raiting volume mangaka status

class manga : public media{
  protected:
    int volume;
    string mangaka;
    Status status;
  public:
    manga();
    manga(string _ID, string _name, Genre _genre, float _raiting, int _volume, string _mangaka, Status _status);
    int getVolume();
    string getMangaka();
    Status getStatus();
    void setVolume(int _volume);
    void setMangaka(string _mangaka);
    void setStatus(Status _status);
};

