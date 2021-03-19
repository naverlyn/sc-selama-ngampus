#include "include/wx/wx.h"

class wasd : public wxApp
{
public:
	bool OnInit()
	{
		wxFrame* window = new wxFrame(NULL, -1, "Title");
		wxButton *ex = new wxButton(window, -1, "wasd");
		ex->Bind(wxEVT_BUTTON, &window_front::on_button_clicked, this);
		window->Show();
		return true;

		void button_clicked(wxCommandEvent&);
		{
			wxMessageBox("Button");
		}
	}
};