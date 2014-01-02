// Sevenpips.h : Hauptheaderdatei für die Sevenpips-DLL
// xxx yyy

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CSevenpipsApp
// Siehe Sevenpips.cpp für die Implementierung dieser Klasse
//

class CSevenpipsApp : public CWinApp
{
public:
	CSevenpipsApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
