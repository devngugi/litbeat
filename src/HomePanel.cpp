#include "HomePanel.h"

HomePanel::HomePanel(wxWindow* parent)
    : wxPanel(parent, wxID_ANY)
{
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText* title = new wxStaticText(this, wxID_ANY, "🎵 Home Screen");
    wxButton* goEditor = new wxButton(this, wxID_ANY, "Go to Editor");

    sizer->Add(title, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 10);
    sizer->Add(goEditor, 0, wxALL | wxEXPAND, 10);

    SetSizer(sizer);
}
