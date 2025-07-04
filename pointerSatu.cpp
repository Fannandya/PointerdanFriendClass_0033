#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "no induk = " << nim << endl;
    }
}

int
main()
{
    mahasiswa mhs{1}; // object mhs
    mhs.showNim();    // member access operator

    mahasiswa &refMhs = mhs;
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3; // arrow pointer
    pMhs->showNim();
    return 0;
}
