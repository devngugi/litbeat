#include "MyFrame.h"

MyFrame::MyFrame()
    : wxFrame(nullptr, wxID_ANY, "Audio Editor", wxDefaultPosition, wxSize(500, 400))
{
    mainSizer = new wxBoxSizer(wxVERTICAL);

    homePanel = new HomePanel(this);
    editorPanel = new EditorPanel(this);

    mainSizer->Add(homePanel, 1, wxEXPAND);
    mainSizer->Add(editorPanel, 1, wxEXPAND);

    editorPanel->Hide();
    currentPanel = homePanel;

    SetSizer(mainSizer);

    // Catch button events globally
    Bind(wxEVT_BUTTON, &MyFrame::OnSwitchScreen, this);
}

void MyFrame::OnSwitchScreen(wxCommandEvent& event) {
    wxButton* btn = dynamic_cast<wxButton*>(event.GetEventObject());
    if (!btn) return;

    wxString label = btn->GetLabel();

    if (label == "Go to Editor") {
        ShowPanel(editorPanel);
    } else if (label == "Go Home") {
        ShowPanel(homePanel);
    }
}

void MyFrame::ShowPanel(wxPanel* panelToShow) {
    if (currentPanel == panelToShow) return;
    currentPanel->Hide();
    panelToShow->Show();
    currentPanel = panelToShow;
    Layout();
}
