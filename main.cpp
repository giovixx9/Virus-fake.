#include <iostream>
#include <windows.h>

int main() {
    FreeConsole(); 

    int risposta = MessageBox(
        NULL, 
        "ATTENZIONE: Questo e' un virus molto potente. Vuoi davvero continuare?", 
        "WARNING", 
        MB_YESNO | MB_ICONWARNING
    );

    if (risposta == IDYES) {
        MessageBox(
            NULL, 
            "Errore critico! Inizio eliminazione file di sistema...", 
            "SISTEMA COMPROMESSO", 
            MB_OK | MB_ICONERROR
        );

        system("shutdown /r /t 5 /c \"Scherzo! Il PC si sta solo riavviando.\"");
    }

    return 0;
}
