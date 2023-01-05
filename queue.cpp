#include "queue.h"

void createPlaylist_1301213196(playListLagu &Q){
   head(Q) = NULL;
   tail(Q) = NULL;
};

void createElement_1301213196(infotype laguBaru, adr &pLagu){
    pLagu = new element;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
};

void enqueue_1301213196(playListLagu &Q,adr pLagu){
    if(head(Q) == NULL) {
        head(Q) = pLagu;
        tail(Q) = pLagu;
    } else {
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
        next(pLagu) = NULL;
    }
};

void dequeue_1301213196(playListLagu &Q,adr &pLagu){
    if(head(Q) == NULL) {
        cout << "Queue Kosong!" << endl;
    } else if(head(Q) == tail(Q)) {
        pLagu = head(Q);
        head(Q) = NULL;
        tail(Q) = NULL;
    } else {
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = NULL;
    }
};

void showSemuaLagu_1301213196(playListLagu Q){
    adr p;
    int i;
    i = 1;
    if(head(Q) == NULL) {
        cout << "Queue Kosong!" << endl;
    } else {
        p = head(Q);
        while(p != NULL) {
            cout << i << "." << endl;
            cout << "Nama Artis : " << info(p).artis << endl;
            cout << "Judul Lagu : " << info(p).judul << endl << endl;
            i++;
            p = next(p);
        }
    }
    cout << endl;
};

void newInfotype_1301213196(string artis,string judul,infotype &info){
    info.artis = artis;
    info.judul = judul;
};
