#ifndef MULTILIST_H_INCLUDED
#define MULTILIST_H_INCLUDED

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define Nil NULL
#define info(p) (p)->info
#define next(p) (p)->next
#define prev(p) (p)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)

typedef struct{
	char nama_bbm[10];
}infotype1;
typedef struct{
	char nama_petugas[20];
	char id_petugas[10];
	char shift[10];
}infotype2;
typedef struct{
	float pendapatan;
}infotype3;
typedef struct elmList1 *address1;
typedef struct elmList2 *address2;
typedef struct elmList3 *address3;
typedef struct elmList3{
	infotype3 info;
    address3 next;
}elemen_list3;
typedef struct{
	address3 first;
}List3;
typedef struct elmList2{
	infotype2 info;
	address2 next;
	List3 L3;
}elemen_list2;
typedef struct{
	address2 first;
	address2 last;
}List2;
typedef struct elmList1{
	infotype1 info;
	address1 next;
	List3 L3;
	List2 L2;
}elemen_list1;
typedef struct{
	address1 first;
}List1;



void create_list1(List1 *L1);
void create_list2(List2 *L2);
void create_list3(List3 *L);
address1 alokasi1(infotype1 x);
address2 alokasi2(infotype2 x);
address3 alokasi3(infotype3 x);
address1 search_unit_spbu(List1 L, char cari_bbm[20]);
address2 search_petugas(List2 L, address1 P, char nama[20]);
void insert_unit_spbu(List1 *L, address1 p);
void insert_petugas(List1 *L,List2 *M, address1 P, address2 Q);
void insert_struk(List1 *L,List2 *M,List3 *N, address1 P, address2 Q, address3 R);
void view2(List2 L);





#endif // MULTI_H_INCLUDED
