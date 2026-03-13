#include "guiApplication.hpp"
#include "guiFrame.hpp"

bool MainGui::OnInit() {
	GuiFrame *frame = new GuiFrame();
	frame->Show(true);
	return true;
}