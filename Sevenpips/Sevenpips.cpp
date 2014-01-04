// Sevenpips.cpp : Definiert die Initialisierungsroutinen für die DLL.
// xx

#include "stdafx.h"
#include "FxSocket.h"
#include "Sevenpips.h"
#define _AFXDLL
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#define MT4_EXPFUNC __declspec(dllexport)

//
//TODO: Wenn diese DLL dynamisch mit MFC-DLLs verknüpft ist,
//		muss für alle aus dieser DLL exportierten Funktionen, die in
//		MFC aufgerufen werden, das AFX_MANAGE_STATE-Makro
//		am Anfang der Funktion hinzugefügt werden.
//
//		Beispiel:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// Hier normaler Funktionsrumpf
//		}
//
//		Es ist sehr wichtig, dass dieses Makro in jeder Funktion
//		vor allen MFC-Aufrufen angezeigt wird.  Dies bedeutet,
//		dass es als erste Anweisung innerhalb der 
//		Funktion angezeigt werden muss, sogar vor jeglichen Deklarationen von Objektvariablen,
//		da ihre Konstruktoren Aufrufe in die MFC-DLL generieren
//		könnten.
//
//		Siehe Technische Hinweise für MFC 33 und 58 für weitere
//		Details.
//

// CSevenpipsApp

BEGIN_MESSAGE_MAP(CSevenpipsApp, CWinApp)
END_MESSAGE_MAP()


// CSevenpipsApp-Erstellung

CSevenpipsApp::CSevenpipsApp()
{
	// TODO: Hier Code zur Konstruktion einfügen.
	// Alle wichtigen Initialisierungen in InitInstance positionieren.
}


// Das einzige CSevenpipsApp-Objekt

CSevenpipsApp theApp;


// CSevenpipsApp-Initialisierung

BOOL CSevenpipsApp::InitInstance()
{
	CWinApp::InitInstance();

	if (!AfxSocketInit())
	{
		AfxMessageBox(IDP_SOCKETS_INIT_FAILED);
		return FALSE;
	}

	return TRUE;
}

CString cleanString(CString s)
{
	long i, n;
	n = s.GetLength();

	CString c = "";

	for (i = 0; i<n; i++)
	{
		if (
			((s.GetAt(i) <= 'z') && (s.GetAt(i) >= 'a'))
			||
			((s.GetAt(i) <= 'Z') && (s.GetAt(i) >= 'A'))
			||
			((s.GetAt(i) <= '9') && (s.GetAt(i) >= '0'))
			)
		{
			c = c + s.GetAt(i);
		}
	}

	return c;
}


MT4_EXPFUNC char * __stdcall Sevenpips_Test(char& s)
{
	AfxMessageBox(static_cast<CString>(s));
	return "test";
}

MT4_EXPFUNC char* __stdcall Upload_MT4(char& server, char& args)
{

	CString post, res, buffer;

	post.Format("args=%s", args);

	CFXSocket socket;
	res = socket.UrlGet(static_cast<CString>(server), post);
	
	char *ret = socket.lasterror.GetBuffer(socket.lasterror.GetLength());

	buffer.Format("%s->%s", server, ret);

	return(buffer.GetBuffer(buffer.GetLength()));

}
