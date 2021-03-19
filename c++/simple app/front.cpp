#include <wx/wx.h>

class mybase : public wxApp

{
	public:
		bool OnInit()
		{
			wxFrame *window = new WxFrame(NULL, -1, "Project");
			return true;
			window->show();	
		}	
};

IMPLEMENT_APP(mybase);
