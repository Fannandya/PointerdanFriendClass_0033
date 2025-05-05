#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    string nama;

public:
    friend void setNama(mahasiswa &a, string);
};

void setNama(mahasiswa &a, string b)
{
    a.nama = b; // mengisi namanya tidak langsung ke "a", tetapi melalui "b"
    cout << a.nama;
}