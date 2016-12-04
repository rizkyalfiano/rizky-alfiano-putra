#include "multi.h"

using namespace std;


int main()
{
    List1 A;List2 B1,B2,B3;List3 C1,C2,C3;
    int menu1,menu1_2,menu2,menu2_1,menu3_1,menu3_2,menu3_3;
    infotype1 i;
    infotype2 j;
    infotype3 k;
    address1 l;
    address2 m;
    address3 n;
    char cari_petugas[20];
    float premium,pertamax,solar;
    float rp_premium,rp_pertamax,rp_solar;
    float kapasitas_pertamax=100;
    float kapasitas_solar=100;
    float kapasitas_premium=100;
    float p_premium=0;
    float p_pertamax=0;
    float p_solar=0;
    float n_premium=0;
    float n_pertamax=0;
    float n_solar=0;
    create_list1(&A);
        strcpy(i.nama_bbm,"Premium");
        address1 x=alokasi1(i);
        insert_unit_spbu(&A,x);
        strcpy(i.nama_bbm,"Pertamax");
        address1 y=alokasi1(i);
        insert_unit_spbu(&A,y);
        strcpy(i.nama_bbm,"Solar");
        address1 z=alokasi1(i);
        insert_unit_spbu(&A,z);
    create_list2(&B1);create_list2(&B2);create_list2(&B3);
    create_list3(&C1);create_list3(&C2);create_list3(&C3);
    start:
     do{
        system("cls");
        cout<<"\n    MENU SPBU\n"<<endl;
        cout<<"=====================\n"<<endl;
        cout<<" 1. DATA REKAP SPBU"<<endl;
        cout<<" 2. PENGISIAN BBM"<<endl;
        cout<<" 3. EXIT"<<endl;
        cout<<"\n====================="<<endl;
        cout<<"\nMASUKKAN PILIHAN : ";
        cin>>menu1;
        switch(menu1){
            case 2 : {
                do{
                    system("cls");
                    cout<<"\n   MENU PENGISIAN"<<endl;
                    cout<<"========================"<<endl;
                    cout<<"     1. PREMIUM"<<endl;
                    cout<<"     2. PERTAMAX"<<endl;
                    cout<<"     3. SOLAR"<<endl;
                    cout<<"     4. HOME"<<endl;
                    cout<<"========================"<<endl;
                    cout<<"MASUKKAN PILIHAN : ";
                    cin>>menu1_2;
                    switch(menu1_2){
                        case 1:{
                                cout<<"\nMasukkan nama petugas = ";
                                cin>>cari_petugas;
                                m=search_petugas(B1,l,cari_petugas);
                                if(m==Nil){
                                        cout<<"\ndata yang dicari tidak ditemukan.\n";
                                }
                                else{
                                    do{
                                    system("cls");
                                    cout<<"\nAnda sedang dilayani oleh "<<cari_petugas;
                                    cout<<"\n\nPremium yang tersedia = "<<kapasitas_premium<<" Liter \n";
                                    cout<<"\n========================================\n";
                                    cout<<"          MENU PENGISIAN PREMIUM  ";
                                    cout<<"\n========================================\n";
                                    cout<<"\n1. Pengisian Premium Berdasarkan Liter"<<endl;
                                    cout<<"2. Pengisian Premium Berdasarkan Rupiah"<<endl;
                                    cout<<"3. HOME"<<endl;
                                    cout<<"MASUKKAN PILIHAN : ";
                                    cin>>menu3_1;
                                        switch(menu3_1){
                                        case 1:{
                                                cout<<"Masukkan banyak liter :";
                                                cin>>premium;
                                                if (premium>=kapasitas_premium){
                                                    cout<<"\nMaaf, kapasitas premium tidak cukup.";
                                                    getch();
                                                }else{
                                                rp_premium=1;
                                                rp_premium=premium*6500;
                                                cout<<"Harga = "<<rp_premium<<endl;
                                                p_premium=p_premium+rp_premium;
                                                n_premium=n_premium+1;
                                                kapasitas_premium=kapasitas_premium-premium;
                                                l=search_unit_spbu(A,"Premium");
                                                k.pendapatan=rp_premium;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B1,&C1,l,m,n);
                                                getch();}
                                                break;}
                                        case 2:{
                                                cout<<"Masukkan rupiah :";
                                                cin>>rp_premium;
                                                premium=rp_premium/6500;
                                                if (premium>=kapasitas_premium){
                                                    cout<<"\nMaaf, kapasitas premium tidak cukup.";
                                                    getch();
                                                }else{
                                                cout<<"Banyak liter yang didapat = "<<premium<<" liter"<<endl;
                                                kapasitas_premium=kapasitas_premium-premium;
                                                p_premium=p_premium+rp_premium;
                                                n_premium=n_premium+1;
                                                k.pendapatan=rp_premium;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B1,&C1,l,m,n);
                                                getch();}
                                                break;}
                                        case 3:{
                                                goto start;
                                                break;
                                                }
                                        }

                                    }while(menu3_1!=3);
                                getch();
                            	break;
                                    }
                            }

                        case 2:{
                                cout<<"\nMasukkan nama petugas = ";
                                cin>>cari_petugas;
                                m=search_petugas(B2,l,cari_petugas);
                                if(m==Nil){
                                        cout<<"\ndata yang dicari tidak ditemukan.\n";
                                }
                                else{
                                    do{
                                    system("cls");
                                    cout<<"\nAnda sedang dilayani oleh "<<cari_petugas;
                                    cout<<"\nPertamax yang tersedia = "<<kapasitas_pertamax<<" Liter \n";
                                    cout<<"\n======================================\n";
                                    cout<<"        MENU PENGISIAN PERTAMAX  ";
                                    cout<<"\n======================================\n";
                                    cout<<"1. Pengisian Pertamax Berdasarkan Liter"<<endl;
                                    cout<<"2. Pengisian Pertamax Berdasarkan Rupiah"<<endl;
                                    cout<<"3. HOME"<<endl;
                                    cout<<"MASUKKAN PILIHAN : ";
                                    cin>>menu3_2;
                                        switch(menu3_2){
                                        case 1:{
                                                cout<<"Masukkan banyak liter :";
                                                cin>>pertamax;
                                                if (pertamax>=kapasitas_pertamax){
                                                    cout<<"\nMaaf, kapasitas pertamax tidak cukup.";
                                                    getch();
                                                }else{
                                                rp_pertamax=1;
                                                rp_pertamax=pertamax*10500;
                                                cout<<"Harga = "<<rp_pertamax<<endl;
                                                kapasitas_pertamax=kapasitas_pertamax-pertamax;
                                                p_pertamax=p_pertamax+rp_pertamax;
                                                n_pertamax=n_pertamax+1;
                                                search_petugas(B2,l,cari_petugas);
                                                k.pendapatan=rp_pertamax;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B2,&C2,l,m,n);
                                                getch();}
                                                break;}
                                        case 2:{
                                                cout<<"Masukkan rupiah :";
                                                cin>>rp_pertamax;
                                                pertamax=rp_pertamax/10500;
                                                if (pertamax>=kapasitas_pertamax){
                                                    cout<<"\nMaaf, kapasitas pertamax tidak cukup.";
                                                    getch();
                                                }else{
                                                cout<<"Banyak liter yang didapat = "<<pertamax<<" liter"<<endl;
                                                kapasitas_pertamax=kapasitas_pertamax-pertamax;
                                                p_pertamax=p_pertamax+rp_pertamax;
                                                n_pertamax=n_pertamax+1;
                                                search_petugas(B2,l,cari_petugas);
                                                k.pendapatan=rp_pertamax;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B2,&C2,l,m,n);
                                                getch();}
                                                break;}
                                        case 3:{
                                                goto start;
                                                break;}
                                        }

                                }while(menu3_2!=3);
                                getch();
                                break;
                            }}
                        case 3:{
                                cout<<"\nMasukkan nama petugas = ";
                                cin>>cari_petugas;
                                m=search_petugas(B3,l,cari_petugas);
                                if(m==Nil){
                                        cout<<"\ndata yang dicari tidak ditemukan.\n";
                                }
                                else{
                                    do{
                                    system("cls");
                                    cout<<"\nAnda sedang dilayani oleh "<<cari_petugas;
                                    cout<<"\nSolar yang tersedia = "<<kapasitas_solar<<" Liter \n";
                                    cout<<"\n===================================\n";
                                    cout<<"        MENU PENGISIAN PREMIUM  ";
                                    cout<<"\n===================================\n";
                                    cout<<"1. Pengisian Solar Berdasarkan Liter"<<endl;
                                    cout<<"2. Pengisian Solar Berdasarkan Rupiah"<<endl;
                                    cout<<"3. HOME"<<endl;
                                    cout<<"MASUKKAN PILIHAN : ";
                                    cin>>menu3_3;
                                        switch(menu3_3){
                                        case 1:{
                                                cout<<"Masukkan banyak liter :";
                                                cin>>solar;
                                                if (solar>=kapasitas_solar){
                                                    cout<<"\nMaaf, kapasitas solar tidak cukup.";
                                                    getch();
                                                }else{
                                                rp_solar=1;
                                                rp_solar=solar*5500;
                                                cout<<"Harga = "<<rp_solar<<endl;
                                                kapasitas_solar=kapasitas_solar-solar;
                                                p_solar=p_solar+rp_solar;
                                                n_solar=n_solar+1;
                                                k.pendapatan=rp_solar;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B3,&C3,l,m,n);
                                                getch();}

                                                break;}
                                        case 2:{
                                                cout<<"Masukkan rupiah :";
                                                cin>>rp_solar;
                                                solar=rp_solar/5500;
                                                if (solar>=kapasitas_solar){
                                                    cout<<"\nMaaf, kapasitas solar tidak cukup.";
                                                    getch();
                                                }else{
                                                cout<<"Banyak liter yang didapat = "<<solar<<" liter"<<endl;
                                                kapasitas_solar=kapasitas_solar-solar;
                                                p_solar=p_solar+rp_solar;
                                                n_solar=n_solar+1;
                                                k.pendapatan=rp_pertamax;
                                                n=alokasi3(k);
                                                insert_struk(&A,&B3,&C3,l,m,n);
                                                getch();}
                                                break;}
                                        case 3:{
                                                goto start;
                                                break;}
                                        }
                                    }while(menu3_3!=3);
                                    break;
                                }}

                        case 4:{
                            system("cls");
                            goto start;
                            break;
                        }

                    }
                }while (menu1_2!=3);
                getch();
                break;}
            case 1 : {
                 do{
                    system("cls");
                    cout<<"\n        MENU REKAP DATA "<<endl;
                    cout<<"======================================"<<endl;
                    cout<<"     1. Data Pegawai"<<endl;
                    cout<<"     2. Data Pendapatan SPBU per hari"<<endl;
                    cout<<"     3. HOME"<<endl;
                    cout<<"======================================"<<endl;
                    cout<<"MASUKKAN PILIHAN : ";
                    cin>>menu2;
                    switch(menu2){
                    case 1:{
                        system("cls");
                        cout<<" \n       Data Pegawai SPBU "<<endl;
                        cout<<"======================================"<<endl;
                        cout<<"      1. Input Data Pegawai\n";
                        cout<<"      2. Lihat Data Pegawai\n";
                        cout<<"      3. HOME\n";
                        cout<<"======================================"<<endl;
                        cout<<"Pilihan :";
                        cin>>menu2_1;
                        switch(menu2_1){
                            case 1:{
                                char cari[20];
                                cout<<"\nMasukkan unit BBM tempat bertugas(Premium/Pertamax/Solar) = ";
                                cin>>cari;
                                l=search_unit_spbu(A,cari);
                                if(l==Nil){
                                    cout<<"\ndata yang dicari tidak ditemukan.\n";
                                }
                                else{
                                    cout<<"\nMasukkan Nama petugas : ";
                                    cin>>j.nama_petugas;
                                    cout<<"Masukkan ID Petugas : ";
                                    cin>>j.id_petugas;
                                    cout<<"Masukkan Shift :";
                                    cin>>j.shift;
                                    m=alokasi2(j);
                                    if (strcmp(cari,"Premium")==0){insert_petugas(&A,&B1,l,m);}
                                    if (strcmp(cari,"Pertamax")==0){insert_petugas(&A,&B2,l,m);}
                                    if (strcmp(cari,"Solar")==0){insert_petugas(&A,&B3,l,m);}
                                    break;}
                            case 2:{
                                char cari[20];
                                cout<<"\nMasukkan unit BBM tempat bertugas = ";
                                cin>>cari;
                                l = Nil;
                                l=search_unit_spbu(A,cari);
                                if(l==Nil){
                                cout<<"data yang dicari tidak ditemukan";
                                }
                                else
                                    if (strcmp(cari,"Premium")==0){view2(B1);}
                                    if (strcmp(cari,"Pertamax")==0){view2(B2);}
                                    if (strcmp(cari,"Solar")==0){view2(B3);}
                                }
                                getch();
                                break;
                                }

                            case 3:{
                                system("cls");
                                goto start;
                                break;
                                }
                        }
                        getch();
                        break;
                    }
                    case 2 :{
                        cout<<"     DATA PENDAPATAN DAN PEMBELIAN DI SPBU   \n";
                        cout<<"================================================\n";
                        cout<<" Banyak pembeli premium adalah "<<n_premium<<" orang"<<endl;
                        cout<<" Banyak pembeli pertamax adalah "<<n_pertamax<<" orang"<<endl;
                        cout<<" Banyak pembeli solar adalah "<<n_solar<<" orang"<<endl;
                        cout<<" Total pembeli bbm adalah "<<n_premium+n_pertamax+n_solar<<endl;
                        cout<<"================================================\n";
                        cout<<" Pendapatan dari premium adalah Rp "<<p_premium<<",00"<<endl;
                        cout<<" Pendapatan dari pertamax adalah Rp "<<p_pertamax<<",00"<<endl;
                        cout<<" Pendapatan dari solar adalah Rp "<<p_solar<<",00"<<endl;
                        cout<<" Total Pendapatan  adalah Rp "<<p_premium+p_pertamax+p_solar<<",00"<<endl;
                        getch();
                        break;
                        }
                    case 3:{
                        goto start;
                        break;
                        }

                    }

                 }while (menu2!=3);

                getch();
                break;}
            case 3 : {
                return 0;
                break;}
        }
    }while(menu1!=3);
    getch();
    return 0;
}


