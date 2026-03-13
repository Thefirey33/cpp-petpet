#include "guiFrame.hpp"
#include "guiApplication.hpp"
#include "wx/event.h"
#include "wx/msgdlg.h"

GuiFrame::GuiFrame() : wxFrame(NULL, wxID_ANY, "petpet generator") {
	wxMenu *fileMenu = new wxMenu;
	fileMenu->Append(petpetID_OpenFile, _T("&Open File...\tCTRL-O"));
	fileMenu->Append(wxID_EXIT);

	wxMenu *fileHelp = new wxMenu;
	fileHelp->Append(wxID_ABOUT);

	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(fileMenu, _T("&File"));
	menuBar->Append(fileHelp, _T("&Help"));

	SetMenuBar(menuBar);

	Bind(wxEVT_MENU, &GuiFrame::OnFileOpen, this, petpetID_OpenFile);
	Bind(wxEVT_MENU, &GuiFrame::OnExit, this, wxID_EXIT);
	Bind(wxEVT_MENU, &GuiFrame::OnAbout, this, wxID_ABOUT);
}

void GuiFrame::OnExit(wxCommandEvent &event) { Close(true); }

void GuiFrame::OnFileOpen(wxCommandEvent &event) {}

void GuiFrame::OnAbout(wxCommandEvent &event) {
	wxMessageBox(_T("made by thefirey33."));
}