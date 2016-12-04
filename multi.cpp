#include <iostream>
#include <stdlib.h>
#include <stdbool.h>
#include "multi.h"

using namespace std;

void create_list1(List1 *L) {
    first(*L) = Nil;
}

void create_list2(List2 *L) {
    first(*L) = Nil;
}

void create_list3(List3 *L) {
    first(*L) = Nil;
}

address1 alokasi1(infotype1 x) {
     address1 p = (address1)malloc(sizeof(elmList1));
    if(p != Nil)
    {
        info(p) = x;
        first(p->L2) = Nil;
        first(p->L3) = Nil;
        next(p) = Nil;
    }
    return p;
}

address2 alokasi2(infotype2 x) {
    address2 p = (address2)malloc(sizeof(elmList2));
    if(p != Nil)
    {
        info(p) = x;
        first(p->L3) = Nil;
        next(p) = Nil;
    }
    return p;
}


address3 alokasi3(infotype3 x) {
    address3 p = (address3)malloc(sizeof(elmList3));
    if(p != Nil)
    {
        info(p) = x;
        next(p) = Nil;
    }
    return p;
}

address1 search_unit_spbu(List1 L, char cari_bbm[20]){
    address1 result = Nil, temp = first(L);
    while(temp != Nil)
    {
        if(strcmp(info(temp).nama_bbm, cari_bbm) == 0)
        {
            result = temp;
            break;
        }
        temp = next(temp);
    }
    return result;
}

address2 search_petugas(List2 L, address1 P, char nama[20])
{
    address2 result = Nil, temp = first(L);
    while(temp != Nil)
    {
        if(strcmp(info(temp).nama_petugas, nama) == 0)
        {
            result = temp;
            break;
        }
        temp = next(temp);
    }
    return result;
}



void insert_unit_spbu(List1 *L, address1 p) {
  if(first(*L) == Nil)
    {
        first(*L) = p;
    }
    else
    {
        next(p) = first(*L);
        first(*L) = p;
    }
}

void insert_petugas(List1 *L,List2 *M, address1 P, address2 Q){
    search_unit_spbu(*L,info(P).nama_bbm);
    if(first(*M) == Nil)
    {
        first(*M) = Q;
    }
    else
    {
        next(Q) = first(*M);
        first(*M) = Q;
    }
}

void insert_struk(List1 *L,List2 *M,List3 *N, address1 P, address2 Q, address3 R){
    search_unit_spbu(*L,info(P).nama_bbm);
    search_petugas(*M,P,info(Q).nama_petugas);
    if(first(*N) == Nil)
    {
        first(*N) = R;
    }
    else
    {
        next(R) = first(*N);
        first(*N) = R;
    }
}

void view2(List2 L) {
        int n=1;
        if(first(L)==Nil) {
            cout << "Data petugas kosong.\n";
        } else {
            address2 current = first(L);
                cout << "============================="<<endl;
                cout << "      Data Petugas SPBU"<<endl;
                cout << "============================="<<endl;
            while(current != Nil) {
                cout <<n<<". Nama Petugas : ";
                cout << info(current).nama_petugas;
                cout << "\n   No induk pegawai : ";
                cout << info(current).id_petugas;
                cout << "\n   Jadwal bertugas : ";
                cout << info(current).shift;
                cout <<"\n"<<endl;
                current = next(current);
                n=n+1;
            }
       }
    }



















