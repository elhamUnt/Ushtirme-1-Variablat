#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Ushtrime 1- Variablat!\n\n";
    cout << string(50, '-') << endl; // Funksioni vendos 50 karaktera të përsëritshme me '-' dhe në fund një rresht të ri

    // Variablat Integer
    cout << "Variablat Integer!\n\n";
    int numri_plote = 5; // Variabla integer që pranon numra të plotë Pozitiv dhe negativ
    cout << "Numri i plotë integer është: " << numri_plote;

    cout << "\n\nVendosni numrin e ri integer: ";
    // Le të vendosim një numër të ri në variablen integer
    cin >> numri_plote;
    cout << "Tani numri i plotë integer është: " << numri_plote;

    /* Shpjegimi:
       Në kodin e mësipërm, në memorie rezervohen 4 byte ose 32 bit ku vendoset një numër integer.
       Më pas ri-vendoset numri i plotë integer që e japim me anë të hyrjes (tastierës).
    */
    cout << "\n\n" << string(50, '-') << endl;

    // Variablat Decimale
    cout << "\nVariablat Decimale!\n\n";
    double numri_decimal = 5.5; // Variabla decimale pranon numra me pikë dhjetore
    cout << "Numri decimal është: " << numri_decimal;

    cout << "\n\nVendosni numrin e ri decimal: ";
    // Le të vendosim një numër të ri në variablen decimale
    cin >> numri_decimal;
    cout << "Tani numri decimal është: " << numri_decimal;

    /* Shpjegimi:
       Në memorie rezervohen 8 byte ose 64 bit për një numër decimal. Ky numër mund të ndryshohet
       me anë të hyrjes nga tastiera dhe të shfaqet në ekran.
    */
    cout << "\n\n" << string(50, '-') << endl;

    // Variablat Boolean (logjike)
    bool logjike = true; // Variabla boolean pranon true ose false (1 ose 0)
    cout << "\nVariablat Booleane!\n\n";
    cout << "Vlera fillestare booleane është: " << logjike;

    cout << "\n\nTani ndryshojmë vlerën booleane në false!\n\n";
    logjike = false;
    cout << "Vlera booleane është: " << logjike;

    cout << "\n\n" << string(50, '-') << endl;

    // Variablat String
    string emri = "Dren"; // Variabla string pranon tekst
    cout << "\nVariablat String!\n\n";
    cout << "Emri është: " << emri;

    cout << "\n Le të marrim karakterin me indeksin 1 të emrit:!\n\n";
    cout << "Karakteri në indeksin 1 është: " << emri[1];
    cout << "\n\n" << string(50, '-') << endl;

    // Variabla Karaktere (char)
    char inicial = 'A'; // Variabla char pranon vetëm një karakter
    cout << "\nVariablat Karakter!\n\n";
    cout << "Iniciali është: " << inicial;

    cout << "\n\nVendosni një karakter të ri: ";
    // Vendosim një karakter të ri
    cin >> inicial;
    cout << "Iniciali i ri është: " << inicial;

    cout << "\n\n" << string(50, '-') << endl;

    // Variablat Float
    float numri_float = 3.14f; // Variabla float pranon numra me presje dhjetore, por më pak precizë se double
    cout << "\nVariablat Float!\n\n";
    cout << "Numri float është: " << numri_float;

    cout << "\n\nVendosni një numër të ri float: ";
    cin >> numri_float;
    cout << "Tani numri float është: " << numri_float;

    cout << "\n\n" << string(50, '-') << endl;

    // Variablat Long
    long numri_i_gjate = 1234567890; // Variabla long për numra shumë të mëdhenj
    cout << "\nVariablat Long!\n\n";
    cout << "Numri long është: " << numri_i_gjate;

    cout << "\n\nVendosni një numër të ri long: ";
    cin >> numri_i_gjate;
    cout << "Tani numri long është: " << numri_i_gjate;

    cout << "\n\n" << string(50, '-') << endl;

    return 0;
}
