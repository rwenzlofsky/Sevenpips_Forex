﻿========================================================================
    MICROSOFT FOUNDATION CLASS-BIBLIOTHEK: Sevenpips-Projektübersicht
========================================================================


Diese Sevenpips-DLL wurde vom Anwendungs-Assistenten für Sie erstellt. Diese DLL zeigt nicht nur die Grundlagen der Verwendung von
Microsoft Foundation Classes, sondern dient auch als Ausgangspunkt für das
Schreiben Ihrer DLL.

Diese Datei enthält eine Zusammenfassung dessen, was sich in den Dateien befindet, aus denen Ihre Sevenpips–DLL besteht.

Sevenpips.vcxproj
    Dies ist die Hauptprojektdatei für VC++-Projekte, die mit dem Anwendungs-Assistenten generiert werden. Sie enthält Informationen über die Version von Visual C++, mit der die Datei generiert wurde, sowie über die Plattformen, Konfigurationen und Projektfunktionen, die im Anwendungs-Assistenten ausgewählt wurden.

Sevenpips.vcxproj.filters
    Dies ist die Filterdatei für VC++-Projekte, die mithilfe eines Anwendungs-Assistenten erstellt werden. Sie enthält Informationen über die Zuordnung zwischen den Dateien im Projekt und den Filtern. Diese Zuordnung wird in der IDE zur Darstellung der Gruppierung von Dateien mit ähnlichen Erweiterungen unter einem bestimmten Knoten verwendet (z. B. sind CPP-Dateien dem Filter "Quelldateien" zugeordnet).

Sevenpips.h
    Dies ist die Hauptheaderdatei für die DLL. Sie deklariert die CSevenpipsApp-Klasse.

Sevenpips.cpp
    Dies ist die Hauptquelldatei der DLL. Sie enthält die CSevenpipsApp-Klasse.

Sevenpips.rc
    Dies ist eine Auflistung aller vom Programm verwendeten Microsoft Windows-Ressourcen. Sie enthält die Symbole, Bitmaps und Cursor, die im Unterverzeichnis "RES" gespeichert werden. Diese Datei kann direkt in Microsoft Visual C++ bearbeitet werden.

res\Sevenpips.rc2
    Diese Datei enthält Ressourcen, die nicht von Microsoft Visual C++ bearbeitet werden. Sie sollten alle Ressourcen, die nicht mit dem Ressourcen-Editor bearbeitet werden können, in dieser Datei platzieren.

Sevenpips.def
    Diese Datei enthält Informationen zur DLL, die zum Ausführen von Microsoft Windows erforderlich sind. Sie definiert Parameter, beispielsweise den Namen und die Beschreibung der DLL. Außerdem exportiert sie Funktionen aus der DLL.

/////////////////////////////////////////////////////////////////////////////
Andere Standarddateien:

StdAfx.h, StdAfx.cpp
    Mit diesen Dateien werden eine vorkompilierte Headerdatei (PCH) mit dem Namen Sevenpips.pch und eine vorkompilierte Typendatei mit dem Namen StdAfx.obj erstellt.

Resource.h
    Dies ist die Standardheaderdatei, die neue Ressourcen-IDs definiert. Die Datei wird mit Microsoft Visual C++ gelesen und aktualisiert.

/////////////////////////////////////////////////////////////////////////////
Weitere Hinweise:

Der Anwendungs-Assistent weist Sie mit "TODO:" auf Teile des Quellcodes hin, die Sie ergänzen oder anpassen sollten.

/////////////////////////////////////////////////////////////////////////////
