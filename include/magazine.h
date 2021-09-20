//ID name genre raiting edition
#include "media.h"
class magazine : public media{
  protected:
    int edition;
  public:
    magazine();
    magazine(string _ID, string _name, Genre _genre, float _raiting, int _edition);
    int getEdition();
    void setEdition(int _edition);
    string displayInformation() override;
};
