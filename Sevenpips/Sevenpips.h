// Sevenpips.h : Hauptheaderdatei f�r die Sevenpips-DLL
// xxx yyy

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei f�r PCH einschlie�en"
#endif

#include "resource.h"		// Hauptsymbole


// CSevenpipsApp
// Siehe Sevenpips.cpp f�r die Implementierung dieser Klasse
//

class CSevenpipsApp : public CWinApp
{
public:
	CSevenpipsApp();

// �berschreibungen
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
