#ifndef CPPPETPET_GUIAPPLICATION_H
#define CPPPETPET_GUIAPPLICATION_H

#include "sharedIncludes.h"

class MainGui : public wxApp {
  public:
	virtual bool OnInit();
};

enum { petpetID_OpenFile };

#endif
