#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(P) P->info
#define next(P) P->next

struct infotype {
    string artis;
    string judul;
};

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct playListLagu {
    adr head;
    adr tail;
};

void createPlaylist_1301213196(playListLagu &Q);
void createElement_1301213196(infotype laguBaru, adr &pLagu);
void enqueue_1301213196(playListLagu &Q,adr pLagu);
void dequeue_1301213196(playListLagu &Q,adr &pLagu);
void showSemuaLagu_1301213196(playListLagu Q);
void newInfotype_1301213196(string artis,string judul,infotype &info);


#endif // QUEUE_H_INCLUDED
