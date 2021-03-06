 /*
  * wxRovio - WOWWEE ROVIO PC Control Application
  * Copyright (C) 2013  GCY <http://gcyrobot.blogspot.tw/>.
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

#ifndef __ADD_USER_DIALOG__
#define __ADD_USER_DIALOG__

#include <wx/wx.h>

enum{
	ID_ADD_USERNAME = 500,
	ID_ADD_PASSWORD,
	ID_PRIVILEGE,
	ID_ADD_RESET
};

class AddUserDialog:public wxDialog
{
public:
	AddUserDialog();

	AddUserDialog(wxWindow *parent,
		wxWindowID id = wxID_ANY,
		const wxString &caption = wxT("Add User"),
	    const wxPoint &pos = wxDefaultPosition,
	    const wxSize &size = wxDefaultSize,
	    long style = wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU);

	bool Create(wxWindow *parent,
		wxWindowID id = wxID_ANY,
	    const wxString &caption = wxT("Add User"),
	    const wxPoint &pos = wxDefaultPosition,
	    const wxSize &size = wxDefaultSize,
	    long style = wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU);

	void Init();
	void CreateControls();

	void OnReset(wxCommandEvent &event);

	bool TransferDataToWindow();
	bool TransferDataFromWindow();

	wxString GetUsername(){return username;}
	wxString GetPassword(){return password;}
	bool GetPrivilege(){return privilege;}
private:
	   wxString username;
	   wxString password;
	   bool privilege;

      DECLARE_CLASS(AddUserDialog)
      DECLARE_EVENT_TABLE()
};

#endif