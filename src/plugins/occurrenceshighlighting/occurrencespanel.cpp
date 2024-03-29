/*
 * This file is part of the Code::Blocks IDE and licensed under the GNU General Public License, version 3
 * http://www.gnu.org/licenses/gpl-3.0.html
 *
 * $Revision: 10269 $
 * $Id: occurrencespanel.cpp 10269 2015-05-15 10:56:59Z jenslody $
 * $HeadURL: svn://svn.code.sf.net/p/codeblocks/code/branches/release-20.xx/src/plugins/occurrenceshighlighting/occurrencespanel.cpp $
 */

#include "occurrencespanel.h"

//(*InternalHeaders(OccurrencesPanel)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(OccurrencesPanel)
const long OccurrencesPanel::ID_LISTCTRL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(OccurrencesPanel,wxPanel)
    //(*EventTable(OccurrencesPanel)
    //*)
END_EVENT_TABLE()

OccurrencesPanel::OccurrencesPanel(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(OccurrencesPanel)
    wxBoxSizer* BoxSizer1;

    Create(parent, id, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    ListCtrl1 = new wxListCtrl(this, ID_LISTCTRL1, wxDefaultPosition, wxDefaultSize, wxLC_LIST|wxLC_AUTOARRANGE|wxLC_SORT_ASCENDING, wxDefaultValidator, _T("ID_LISTCTRL1"));
    BoxSizer1->Add(ListCtrl1, 1, wxEXPAND, 5);
    SetSizer(BoxSizer1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);
    //*)
}

OccurrencesPanel::~OccurrencesPanel()
{
    //(*Destroy(OccurrencesPanel)
    //*)
}

