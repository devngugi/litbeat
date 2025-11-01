#include "EditorPanel.h"

EditorPanel::EditorPanel(wxWindow* parent)
    : wxPanel(parent, wxID_ANY)
{
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);

    wxStaticText* title = new wxStaticText(this, wxID_ANY, "🎚️ Editor Screen");
    wxButton* goHome = new wxButton(this, wxID_ANY, "Go Home");

    sizer->Add(title, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 10);
    sizer->Add(goHome, 0, wxALL | wxEXPAND, 10);

    SetSizer(sizer);
}
