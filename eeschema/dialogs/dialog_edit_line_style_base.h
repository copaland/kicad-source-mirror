///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include "dialog_shim.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/bmpcbox.h>
#include <wx/sizer.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class DIALOG_EDIT_LINE_STYLE_BASE
///////////////////////////////////////////////////////////////////////////////
class DIALOG_EDIT_LINE_STYLE_BASE : public DIALOG_SHIM
{
	DECLARE_EVENT_TABLE()
	private:

		// Private event handlers
		void _wxFB_onColorButtonClicked( wxCommandEvent& event ){ onColorButtonClicked( event ); }
		void _wxFB_resetDefaults( wxCommandEvent& event ){ resetDefaults( event ); }


	protected:
		enum
		{
			idColorBtn = 1000
		};

		wxStaticText* m_staticTextWidth;
		wxTextCtrl* m_lineWidth;
		wxStaticText* m_staticWidthUnits;
		wxStaticText* m_staticTextColor;
		wxBitmapButton* m_colorButton;
		wxStaticText* m_staticTextStyle;
		wxBitmapComboBox* m_typeCombo;
		wxStaticLine* m_staticline;
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerApply;
		wxButton* m_sdbSizerCancel;

		// Virtual event handlers, overide them in your derived class
		virtual void onColorButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void resetDefaults( wxCommandEvent& event ) { event.Skip(); }


	public:

		DIALOG_EDIT_LINE_STYLE_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Line Style"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~DIALOG_EDIT_LINE_STYLE_BASE();

};

