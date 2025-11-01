#ifndef MY_FRAME_H
#define MY_FRAME_H

#include <wx/wx.h>
#include "HomePanel.h"
#include "EditorPanel.h"

class MainFrame : public wxFrame {
private:
    wxBoxSizer* mainSizer;
    HomePanel* homePanel;
    EditorPanel* editorPanel;
    wxPanel* currentPanel;

public:
    MainFrame();
    void ShowPanel(wxPanel* panelToShow);
    void OnSwitchScreen(wxCommandEvent& event);
};

#endif
