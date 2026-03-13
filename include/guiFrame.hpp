#ifndef CPP_PETPET_GUIFRAME_H
#define CPP_PETPET_GUIFRAME_H

#include "sharedIncludes.h"

class GuiFrame : public wxFrame {
  public:
	GuiFrame();

  private:
	void OnFileOpen(wxCommandEvent &event);
	void OnExit(wxCommandEvent &event);
	void OnAbout(wxCommandEvent &event);
};

#endif
