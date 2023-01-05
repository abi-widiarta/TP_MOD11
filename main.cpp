#include "queue.h"
#include <iostream>

using namespace std;

int main()
{
    playListLagu Q;
    string inputArtis;
    string inputJudul;
    infotype info;
    adr pLagu;
    int i;

    cout << "==================================" << endl;
    cout << "TP MOD 11" << endl;
    cout << "Nama        : I Wayan Abi Widiarta" << endl;
    cout << "NIM         : 1301213196" << endl;
    cout << "Kelas       : IF-45-09" << endl;
    cout << "Kode Asprak : SAZ" << endl;
    cout << "==================================" << endl << endl;


    createPlaylist_1301213196(Q);
    i = 1;
    while(i <= 15) {
        cout << i << "." << endl;
        cout << "Masukkan nama artis : ";
        cin >> inputArtis;
        cout << "Masukkan judul lagu : ";
        cin >> inputJudul;
        cout << endl;

        newInfotype_1301213196(inputArtis,inputJudul,info);
        createElement_1301213196(info,pLagu);
        enqueue_1301213196(Q,pLagu);
        i++;
    }

    cout << "=== Menampilkan Semua Lagu ===" << endl;
    showSemuaLagu_1301213196(Q);

    dequeue_1301213196(Q,pLagu);
    dequeue_1301213196(Q,pLagu);
    dequeue_1301213196(Q,pLagu);

    cout << "=== Menampilkan Semua Lagu Setelah Dihapus ===" << endl;
    showSemuaLagu_1301213196(Q);

    return 0;
}
