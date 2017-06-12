#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class A
    {
    //private:
        int o;
    protected:
        int a;
    };

class B: public A
    {
    //private:
        int p;
    protected:
        int b;
    public:
//        B(int _b, int _p);
//        B(void): b (0), p(0) {};
int wart_a() {return a;};
int wart_b() {return b;};
int wart_p() {return p;};
        string nazwa;
        int modyfikuj_obiekt();
        void show();
        int utworz_B(string _nazwa, int _a, int _b, int _p)
        {
            nazwa=_nazwa;
            b=_b;
            p=_p;
            a=_a;
        }
        //~B();
    };

int B::modyfikuj_obiekt()
{
    string _nazwa;
    int _a, _b, _p;
    cout<<endl<<"Podaj dane:"<<endl<<"Nazwa:";
    cin>>_nazwa;
    cout<<endl<<"Podaj dane: (wartosci liczbowe ---> int)"<<endl;
    cout<<"a=";
    cin>>_a;
    cout<<"b=";
    cin>>_b;
    cout<<"p=";
    cin>>_p;
    nazwa=_nazwa;
    b=_b;
    p=_p;
    a=_a;
}

class C: public A
    {
    //private:
        int q;
    protected:
        int c;
    };

class D: public A
    {
    //private:
        int r;
    protected:
        int d;
    };

class G: public C
    {
    //private:
        int s;
    protected:
        int g;
    public:
        int wart_a() {return a;};
        int wart_c() {return c;};
        int wart_g() {return g;};
        int wart_s() {return s;};

        string nazwa;
        int modyfikuj_obiekt();
        void show();
        int utworz_G(string _nazwa, int _a, int _c, int _g, int _s)
        {
            nazwa=_nazwa;
			 a=_a;
			 c=_c;
			 g=_g;
			 s=_s;
        }

    };

 int G::modyfikuj_obiekt()
{
    string _nazwa;
    int _a, _c, _g, _s;
    cout<<endl<<"Podaj dane:"<<endl<<"Nazwa:";
    cin>>_nazwa;
    cout<<"Podaj dane: (wartosci liczbowe ---> int)"<<endl;
    cout<<"a=";
    cin>>_a;
    cout<<"c=";
    cin>>_c;
    cout<<"g=";
    cin>>_g;
    cout<<"s=";
    cin>>_s;
 nazwa=_nazwa;
 a=_a;
 c=_c;
 g=_g;
 s=_s;
}

class H: public C
    {
        int t;
    protected:
        int h;
    public:
         int wart_a() {return a;};
        int wart_c() {return c;};
        int wart_h() {return h;};
        int wart_t() {return t;};

        string nazwa;
        int modyfikuj_obiekt();
        void show();
        int utworz_H(string _nazwa, int _a, int _c, int _h, int _t)
        {
        nazwa=_nazwa;
		 a=_a;
		 c=_c;
		 h=_h;
		 t=_t;
        }

    };

int H::modyfikuj_obiekt()
{
     string _nazwa;
    int _a, _c, _h, _t;
    cout<<endl<<"Podaj dane:"<<endl<<"Nazwa:";
    cin>>_nazwa;
    cout<<"Podaj dane: (wartosci liczbowe ---> int)"<<endl;
    cout<<"a=";
    cin>>_a;
    cout<<"c=";
    cin>>_c;
    cout<<"h=";
    cin>>_h;
    cout<<"t=";
    cin>>_t;
 nazwa=_nazwa;
 a=_a;
 c=_c;
 h=_h;
 t=_t;
}

class I: public D
    {
        int u;
    protected:
        int i;
    };

class J: public D
    {
        int v;
    protected:
        int j;
    public:
         int wart_a(){return a;};
        int wart_d() {return d;};
        int wart_j() {return j;};
        int wart_v() {return v;};

        string nazwa;
        int modyfikuj_obiekt();
        void show();
        int utworz_J(string _nazwa, int _a, int _d, int _j, int _v)
        {
        	nazwa= _nazwa;
			 a=_a;
			 d=_d;
			 j=_j;
			 v=_v;
        }

    };

int J::modyfikuj_obiekt()
{
    string _nazwa;
                            int _a, _d, _j, _v;
    cout<<endl<<"Podaj dane:"<<endl<<"Nazwa:";
       cin>>_nazwa;
       cout<<"Podaj dane: (wartosci liczbowe ---> int)"<<endl;
       cout<<"a=";
       cin>>_a;
       cout<<"d=";
       cin>>_d;
       cout<<"j=";
       cin>>_j;
       cout<<"v=";
       cin>>_v;
 nazwa= _nazwa;
 a=_a;
 d=_d;
 j=_j;
 v=_v;
}

class K: public I
    {
        int w;
    protected:
        int k;
    public:
        int wart_a(){return a;};
        int wart_d() {return d;};
        int wart_i() {return i;};
        int wart_k() {return k;};
        int wart_w() {return w;};

        string nazwa;
        int modyfikuj_obiekt();
        void show ();
        int utworz_K(string _nazwa, int _a, int _d, int _i, int _k, int _w)
        {
        	nazwa=_nazwa;
			 a=_a;
			 d=_d;
			 i=_i;
			 k=_k;
			 w=_w;
        }

    };


int K::modyfikuj_obiekt()
{
    string _nazwa;
    int _a, _d, _i, _k, _w;
    cout<<endl<<"Podaj dane:"<<endl<<"Nazwa:";
        cin>>_nazwa;
        cout<<"Podaj dane: (wartosci liczbowe ---> int)"<<endl;
        cout<<"a=";
        cin>>_a;
        cout<<"d=";
        cin>>_d;
        cout<<"i=";
        cin>>_i;
        cout<<"k=";
        cin>>_k;
                            cout<<endl<<"w=";
                            cin>>_w;
 nazwa=_nazwa;
 a=_a;
 d=_d;
 i=_i;
 k=_k;
 w=_w;
}


void B::show()
{
    cout<<endl<<"NAZWA OBIEKTU:"<<nazwa<<" "<<"a="<<a<<" "<<"b="<<b<<" "<<"p="<<p<<endl;
}

void G::show()
{
    cout<<endl<<"NAZWA OBIEKTU:"<<nazwa<<" "<<"a="<<a<<" "<<"c="<<c<<" "<<"g="<<g<<"s="<<s<<endl;
}

void H::show()
{
    cout<<endl<<"NAZWA OBIEKTU:"<<nazwa<<" "<<"a="<<a<<" "<<"c="<<c<<" "<<"h="<<h<<"t="<<t<<endl;
}

void J::show()
{
    cout<<endl<<"NAZWA OBIEKTU:"<<nazwa<<" "<<"a="<<a<<" "<<"d="<<d<<" "<<"j="<<j<<"v="<<v<<endl;
}

void K::show()
{
    cout<<endl<<"NAZWA OBIEKTU:"<<nazwa<<" "<<"a="<<a<<" "<<"d="<<d<<" "<<"i="<<i<<"k="<<k<<"w="<<w<<endl;
}


int main()
{
        vector <B> lista_elem_B;
        vector <G> lista_elem_G;
        vector <H> lista_elem_H;
        vector <J> lista_elem_J;
        vector <K> lista_elem_K;

    string wybor;
    while(wybor!="END")
    {
        cout <<endl<<"Wybierz opcje"<<endl;
        cout <<"CD   - zmiana wezla w strukturze \nMO   - utworz obiekt \nDO   - usun obiekt \nMDO  - modyfikuj obiekt \nDIR  - wyswietl informacje o obiektach dziedziczacych \nSHOW - wyswietl informacje o danym obiekcie \nSAVE - zapisz do pliku \nREAD - odczytaj z pliku \nTREE - wyswietl cale drzewo \nEND  - koniec programu\n"<<endl;
        cout << "Wybrana opcja to: ";
        cin>>wybor;
        char wezel;

        if (wybor=="CD")
                {
                    cout<<"Podaj wezel, do ktorego chcesz przejsc: (do wyboru A, B, C, D, G, H, I, J, K)"<<endl;
                    cin>>wezel;
                    //break;
                } // zamkniecie case 1

        else if (wybor=="MO")
                {
                cout<<endl<< "Wybrano opcje utworzenia obiektu. Program utworzy obiekt klasy "<<wezel<< endl;
                switch(wezel)
                    {
                    case 'A':
                        {
                           cout<<"Nie mozna utworzyc obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'B':
                        {
                            B obiekt;
                            obiekt.modyfikuj_obiekt();
                            lista_elem_B.push_back(obiekt);
                            break;
                        }
                    case 'C':
                        {
                            cout<<"Nie mozna utworzyc obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'D':
                        {
                            cout<<"Nie mozna utworzyc obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'G':
                        {
                            G obiekt;
                            obiekt.modyfikuj_obiekt();
                            lista_elem_G.push_back(obiekt);
                            break;
                        }
                    case 'H':
                        {
                            H obiekt;
                            obiekt.modyfikuj_obiekt();
                            lista_elem_H.push_back(obiekt);
                            break;
                        }
                    case 'I':
                        {
                            cout<<"Nie mozna utworzyc obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'J':
                        {
                            J obiekt;
                            obiekt.modyfikuj_obiekt();
                            lista_elem_J.push_back(obiekt);
                            break;
                        }
                    case 'K':
                        {
                            K obiekt;
                            obiekt.modyfikuj_obiekt();
                            lista_elem_K.push_back(obiekt);
                            break;
                        }
                    default:
                        {
                            cout<<"Nie wybrano klasy lub wybrana klasy nie istnieje. Wybierz opcje przejscia do wezla w menu."<<endl<<endl;
                        }
                    } // nawias od switcha(wezel)


                    //break;
                } // zamkniêcie case 2

            else if (wybor=="DO") // usuwanie
                {
                cout<<endl<< "Wybrano opcje usuwania obiektu. Program usunie obiekt klasy "<<wezel<< endl;
                int licz=0;
                switch(wezel)
                    {
                    case 'A':
                        {
                           cout<<"Ta klasa nie posiada obiektow. Nie mozna usunac obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'B':
                        {
                            string _nazwa_do_usu;
                            cout<<"Podaj nazwe obiektu do usuniecia: ";
                            cin>>_nazwa_do_usu;
                            int i;
                            for (i=0; i<lista_elem_B.size(); i++)
                            {
                                if (lista_elem_B[i].nazwa==_nazwa_do_usu)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        for (int a=i; a<lista_elem_B.size();a++)
                                        {
                                            if ((a+1)<lista_elem_B.size()){
                                            lista_elem_B[a]=lista_elem_B[a+1];}
                                        licz++;
                                        }
                                        lista_elem_B.pop_back();
                                        cout<<"Usunieto obiekt "<<_nazwa_do_usu<<"."<<endl;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}

                            break;
                        }
                    case 'C':
                        {
                            cout<<"Ta klasa nie posiada obiektow. Nie mozna usunac obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'D':
                        {
                            cout<<"Ta klasa nie posiada obiektow. Nie mozna usunac obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'G':
                        {
                            string _nazwa_do_usu;
                            cout<<"Podaj nazwe obiektu do usuniecia: ";
                            cin>>_nazwa_do_usu;
                            int i;
                            for (i=0; i<lista_elem_G.size(); i++)
                            {
                                if (lista_elem_G[i].nazwa==_nazwa_do_usu)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        for (int a=i; a<lista_elem_G.size();a++)
                                        {
                                            if ((a+1)<lista_elem_G.size()){
                                            lista_elem_G[a]=lista_elem_G[a+1];}
                                        licz++;
                                        }
                                        lista_elem_G.pop_back();
                                        cout<<"Usunieto obiekt "<<_nazwa_do_usu<<"."<<endl;

                                	}
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'H':
                        {
                            string _nazwa_do_usu;
                            cout<<"Podaj nazwe obiektu do usuniecia: ";
                            cin>>_nazwa_do_usu;
                            int i;
                            for (i=0; i<lista_elem_H.size(); i++)
                            {
                                if (lista_elem_H[i].nazwa==_nazwa_do_usu)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        for (int a=i; a<lista_elem_H.size();a++)
                                        {
                                            if ((a+1)<lista_elem_H.size()){
                                            lista_elem_H[a]=lista_elem_H[a+1];}
                                        licz++;
                                        }
                                        lista_elem_H.pop_back();
                                        cout<<"Usunieto obiekt "<<_nazwa_do_usu<<"."<<endl;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'I':
                        {
                            cout<<"Ta klasa nie posiada obiektow. Nie mozna usunac obiektu tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'J':
                        {
                            string _nazwa_do_usu;
                            cout<<"Podaj nazwe obiektu do usuniecia: ";
                            cin>>_nazwa_do_usu;
                            int i;
                            for (i=0; i<lista_elem_J.size(); i++)
                            {
                                if (lista_elem_J[i].nazwa==_nazwa_do_usu)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        for (int a=i; a<lista_elem_J.size();a++)
                                        {
                                            if ((a+1)<lista_elem_J.size()){
                                            lista_elem_J[a]=lista_elem_J[a+1];}
                                        licz++;
                                        }
                                        lista_elem_J.pop_back();
                                        cout<<"Usunieto obiekt "<<_nazwa_do_usu<<"."<<endl;

                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'K':
                        {
                            string _nazwa_do_usu;
                            cout<<"Podaj nazwe obiektu do usuniecia: ";
                            cin>>_nazwa_do_usu;
                            int i;
                            for (i=0; i<lista_elem_K.size(); i++)
                            {
                                if (lista_elem_K[i].nazwa==_nazwa_do_usu)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        for (int a=i; a<lista_elem_K.size();a++)
                                        {
                                            if ((a+1)<lista_elem_K.size()){
                                            lista_elem_K[a]=lista_elem_K[a+1];}
                                        licz++;
                                        }
                                        lista_elem_K.pop_back();
                                        cout<<"Usunieto obiekt "<<_nazwa_do_usu<<"."<<endl;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    default:
                        {
                            cout<<"Nie wybrano klasy lub wybrana klasy nie istnieje. Wybierz opcje przejscia do innego wezla w menu."<<endl<<endl;
                        }
                    } // nawias od switcha(wezel)
                    //break;
                } // zamkniêcie case 3

           else if (wybor=="MDO") // modyfikacja
                {
                    cout<<endl<< "Wybrano opcje modyfikacji obiektu. Program zmodyfikuje obiekt klasy "<<wezel<< endl;
                switch(wezel)
                    {
                    case 'A':
                        {
                           cout<<"Nie istnieja obiekty tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'B':
                        {
                        	int licz=0;
                            string _nazwa_do_mod;
                            cout<<"Podaj nazwe obiektu do modyfikacji: ";
                            cin>>_nazwa_do_mod;
                            int i;
                            for (i=0; i<lista_elem_B.size(); i++)
                            {
                                if (lista_elem_B[i].nazwa==_nazwa_do_mod)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        lista_elem_B[i].modyfikuj_obiekt();
                                        licz++;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}

                            break;
                        }
                    case 'C':
                        {
                            cout<<"Nie istnieja obiekty tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'D':
                        {
                            cout<<"Nie istnieja obiekty tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'G':
                        {
                        	int licz=0;
                            string _nazwa_do_mod;
                            cout<<"Podaj nazwe obiektu do modyfikacji: ";
                            cin>>_nazwa_do_mod;
                            int i;
                            for (i=0; i<lista_elem_G.size(); i++)
                            {
                                if (lista_elem_G[i].nazwa==_nazwa_do_mod)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        lista_elem_G[i].modyfikuj_obiekt();
                                        licz++;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}

                            break;
                        }
                    case 'H':
                        {
                        	int licz=0;
                            string _nazwa_do_mod;
                            cout<<"Podaj nazwe obiektu do modyfikacji: ";
                            cin>>_nazwa_do_mod;
                            int i;
                            for (i=0; i<lista_elem_H.size(); i++)
                            {
                                if (lista_elem_H[i].nazwa==_nazwa_do_mod)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        lista_elem_H[i].modyfikuj_obiekt();
                                        licz++;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'I':
                        {
                            cout<<"Nie istnieja obiekty tej klasy. Zmien wezel."<<endl;
                            break;
                        }
                    case 'J':
                        {
                        	int licz=0;
                            string _nazwa_do_mod;
                            cout<<"Podaj nazwe obiektu do modyfikacji: ";
                            cin>>_nazwa_do_mod;
                            int i;
                            for (i=0; i<lista_elem_J.size(); i++)
                            {
                                if (lista_elem_J[i].nazwa==_nazwa_do_mod)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        lista_elem_J[i].modyfikuj_obiekt();
                                        licz++;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'K':
                        {
                        	int licz=0;
                            string _nazwa_do_mod;
                            cout<<"Podaj nazwe obiektu do modyfikacji: ";
                            cin>>_nazwa_do_mod;
                            int i;
                            for (i=0; i<lista_elem_K.size(); i++)
                            {
                                if (lista_elem_K[i].nazwa==_nazwa_do_mod)
                                    {
                                        cout<<"Znaleziono obiekt o podanej nazwie."<<endl;
                                        lista_elem_K[i].modyfikuj_obiekt();
                                        licz++;
                                    }
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    default:
                        {
                            cout<<"Nie wybrano klasy lub wybrana klasy nie istnieje. Wybierz opcje przejscia do wezla w menu."<<endl<<endl;
                        }
                    } // nawias od switcha(wezel)
                    //break;
                } // zamkniêcie case 4

            else if (wybor=="DIR") // info o dziedziczacych
                {
                    switch(wezel)
                    {
                    case 'A':
                        {
                           cout<<"Obiekty klas dziedziczacych z klasy A:"<<endl;
                           cout<<"Obiekty klasy B:"<<endl;
                           for (int i=0; i<lista_elem_B.size(); i++)
                           {
                               cout<<lista_elem_B[i].nazwa<<endl;
                           }
                           cout<<endl<<"lista elementow klasy G:"<<endl;
                           for (int i=0; i<lista_elem_G.size(); i++)
                           {
                               cout<<lista_elem_G[i].nazwa<<endl;
                           }
                           cout<<endl<<"lista elementow klasy H:"<<endl;
                           for (int i=0; i<lista_elem_H.size(); i++)
                           {
                               cout<<lista_elem_H[i].nazwa<<endl;;
                           }
                           cout<<endl<<"lista elementow klasy J:"<<endl;
                           for (int i=0; i<lista_elem_J.size(); i++)
                           {
                               cout<<lista_elem_J[i].nazwa<<endl;
                           }
                           cout<<endl<<"lista elementow klasy K:"<<endl;
                           for (int i=0; i<lista_elem_G.size(); i++)
                           {
                               cout<<lista_elem_K[i].nazwa<<endl;
                           }
                            break;
                        }
                    case 'B':
                        {
                            cout<<"Klasa B jest lisciem.:"<<endl;
                           cout<<"Obiekty klasy B:"<<endl;
                           for (int i=0; i<lista_elem_B.size(); i++)
                           {
                               cout<<lista_elem_B[i].nazwa<<endl;
                           }
                           break;
                        }
                    case 'C':
                        {
                           cout<<"Obiekty klas dziedziczacych z klasy C:"<<endl;

                           cout<<endl<<"lista elementow klasy G:"<<endl;
                           for (int i=0; i<lista_elem_G.size(); i++)
                           {
                               cout<<lista_elem_G[i].nazwa<<endl;
                           }
                           cout<<endl<<"lista elementow klasy H:"<<endl;
                           for (int i=0; i<lista_elem_H.size(); i++)
                           {
                               cout<<lista_elem_H[i].nazwa<<endl;
                           }
                           break;
                        }
                    case 'D':
                        {
                           cout<<"Obiekty klas dziedziczacych z klasy D:"<<endl;

                           cout<<endl<<"lista elementow klasy J:"<<endl;
                           for (int i=0; i<lista_elem_J.size(); i++)
                           {
                               cout<<lista_elem_J[i].nazwa<<endl;
                           }
                           cout<<endl<<"lista elementow klasy K:"<<endl;
                           for (int i=0; i<lista_elem_K.size(); i++)
                           {
                               cout<<lista_elem_K[i].nazwa<<endl;
                           }                            break;
                        }
                    case 'G':
                        {
                           cout<<"Klasa G jest lisciem. :"<<endl;
                           cout<<"lista elementow klasy G"<<endl;
                           for (int i=0; i<lista_elem_G.size(); i++)
                           {
                               cout<<lista_elem_G[i].nazwa<<endl;
                           }

                            break;
                        }
                    case 'H':
                        {
                           cout<<"Klasa H jest lisciem. :"<<endl;
                           cout<<"lista elementow klasy H"<<endl;
                           for (int i=0; i<lista_elem_H.size(); i++)
                           {
                               cout<<lista_elem_H[i].nazwa<<endl;
                           }
                           break;
                        }
                    case 'I':
                        {
                           cout<<"Obiekty klas dziedziczacych z klasy I:"<<endl;

                           cout<<endl<<"lista elementow klasy K:"<<endl;
                           for (int i=0; i<lista_elem_K.size(); i++)
                           {
                               cout<<lista_elem_K[i].nazwa<<endl;
                           }
                           break;
                        }
                    case 'J':
                        {
                           cout<<"Klasa J jest lisciem. :"<<endl;
                           cout<<"lista elementow klasy J"<<endl;
                           for (int i=0; i<lista_elem_J.size(); i++)
                           {
                               cout<<lista_elem_J[i].nazwa<<endl;
                           }
                           break;
                        }
                    case 'K':
                        {
                           cout<<"Klasa K jest lisciem. :"<<endl;
                           cout<<"lista elementow klasy H"<<endl;
                           for (int i=0; i<lista_elem_K.size(); i++)
                           {
                               cout<<lista_elem_K[i].nazwa<<endl;
                           }
                            break;
                        }
                    default:
                        {
                            cout<<"Nie wybrano klasy lub wybrana klasy nie istnieje. Wybierz opcje przejscia do innego wezla w menu."<<endl<<endl;
                        }
                    break;
                    } // zamkniecie switcha


                    //break;
                } // zamkniêcie case 5

            else if (wybor=="SHOW") // show
                {
                cout<<endl<< "Wybrano opcje wyswietlania danych obiektu. Program wyswietli obiekt klasy "<<wezel<< endl;
                cout<<"Podaj nazwe obiektu, ktory chcesz wyswietlic: ";
                string nazwa_do_wyswietlenia;
                cin>> nazwa_do_wyswietlenia;
                int licz=0;

                switch(wezel)
                    {
                    case 'A':
                        {
                           cout<<"Nie istnieja obiekty klasy A, nie mozna wyswietlic. Zmien wezel."<<endl;
                            break;
                        }
                    case 'B':
                        {
                            int i;
                            for (i=0; i<lista_elem_B.size(); i++)
                            {
                                if (lista_elem_B[i].nazwa==nazwa_do_wyswietlenia)
                                    {
                                    lista_elem_B[i].show();
                                    licz++;}
                            }

                            if (licz==0)
                                {cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}

                            break;
                        }
                    case 'C':
                        {
                            cout<<"Nie istnieja obiekty klasy C, nie mozna wyswietlic. Zmien wezel."<<endl;
                            break;
                        }
                    case 'D':
                        {
                            cout<<"Nie istnieja obiekty klasy D, nie mozna wyswietlic. Zmien wezel."<<endl;
                            break;
                        }
                    case 'G':
                        {
                            int i;
                            for (i=0; i<lista_elem_G.size(); i++)
                            {
                                if (lista_elem_G[i].nazwa==nazwa_do_wyswietlenia)
                                    {
                                    lista_elem_G[i].show();
                                    licz++;}
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'H':
                        {
                            int i;
                            for (i=0; i<lista_elem_H.size(); i++)
                            {
                                if (lista_elem_H[i].nazwa==nazwa_do_wyswietlenia)
                                    {
                                    lista_elem_H[i].show();
                                    licz++;}
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'I':
                        {
                            cout<<"Nie istnieja obiekty klasy I, nie mozna wyswietlic. Zmien wezel."<<endl;
                            break;
                        }
                    case 'J':
                        {
                            int i;
                            for (i=0; i<lista_elem_J.size(); i++)
                            {
                                if (lista_elem_J[i].nazwa==nazwa_do_wyswietlenia)
                                    {
                                    lista_elem_J[i].show();
                                    licz++;}
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    case 'K':
                        {
                            int i;
                            for (i=0; i<lista_elem_K.size(); i++)
                            {
                                if (lista_elem_K[i].nazwa==nazwa_do_wyswietlenia)
                                    {
                                    lista_elem_K[i].show();
                                    licz++;}
                            }

                            if (licz==0)
                                {
                                cout<<"Nie istnieje obiekt o podanej nazwie."<<endl<<endl;}
                            break;
                        }
                    default:
                        {
                            cout<<"Nie wybrano klasy lub wybrana klasy nie istnieje. Wybierz opcje przejscia do innego wezla w menu."<<endl<<endl;
                        }

                    //break;
                    } // zamkniecie switcha
                   // break;
                } // zamkniecie case 6
            else if (wybor=="SAVE") // zapisz do pliku
                {
                    cout<<"Podaj nazwe pliku, w ktorym chcesz zapisac dane. \n Jesli nie istnieje plik o takiej nazwie, to zostanie utworzony. \n W przeciwnym wypadku istniejacy juz plik zostanie zmodyfikowany."<<endl;
                    string nazwa;
                    cin>>nazwa;

                    fstream moj_plik;
                    moj_plik.open(nazwa.c_str(), ios::app | ios::out);

                if (moj_plik.is_open()){
                    //moj_plik<<"class B:"<<endl; // niepotrzebne
                    for(int i=0; i<lista_elem_B.size(); i++) {
                        moj_plik<<"B"<<" "<<lista_elem_B[i].nazwa<<" "<<lista_elem_B[i].wart_a()<<" "<<lista_elem_B[i].wart_b()<<" "<<lista_elem_B[i].wart_p()<<endl;
                        }
                   // moj_plik<< "class G:"<<endl; //niepotrzebne
                    for(int i=0; i<lista_elem_G.size(); i++) {
                        moj_plik<<"G"<<" "<<lista_elem_G[i].nazwa<<" "<<lista_elem_G[i].wart_a()<<" "<<lista_elem_G[i].wart_c()<<" "<<lista_elem_G[i].wart_g()<<" "<<lista_elem_G[i].wart_s()<<endl;
                        }
                    //moj_plik<< "class H:"<<endl; //niepotrzebne
                    for(int i=0; i<lista_elem_H.size(); i++) {
                        moj_plik<<"H"<<" "<<lista_elem_H[i].nazwa<<" "<<lista_elem_H[i].wart_a()<<" "<<lista_elem_H[i].wart_c()<<" "<<lista_elem_H[i].wart_h()<<" "<<lista_elem_H[i].wart_t()<<endl;
                        }
                   // moj_plik<<"class J:"<<endl; // niepotrzebne
                    for(int i=0; i<lista_elem_J.size(); i++) {
                        moj_plik<<"J"<<" "<<lista_elem_J[i].nazwa<<" "<<lista_elem_J[i].wart_a()<<" "<<lista_elem_J[i].wart_d()<<" "<<lista_elem_J[i].wart_j()<<" "<<lista_elem_J[i].wart_v()<<endl;
                        }
                    //moj_plik<<"class K:"<<endl; // niepotrzebne
                    for(int i=0; i<lista_elem_K.size(); i++) {
                        moj_plik<<"K"<<" "<<lista_elem_K[i].nazwa<<" "<<lista_elem_K[i].wart_a()<<" "<<lista_elem_K[i].wart_d()<<" "<<lista_elem_K[i].wart_i()<<" "<<lista_elem_K[i].wart_k()<<" "<<lista_elem_K[i].wart_w()<<endl;
                        }
                    moj_plik.close();
                    cout<<"Poprawnie zapisano dane do pliku "<<nazwa<<".txt"<<endl;
                }
                else cout<<"Nie udalo sie utworzyc pliku."<<endl<<endl;
                    //break;
                } // zamkniecie case 7
            else if (wybor=="READ") // odczytaj z pliku
                {
                    string nazwa;
                    cout<<"\nPodaj nazwe pliku, ktory chcesz otworzyc.\n (bez rozszerzenia np. [file] zamiast [file.txt]) \nNAZWA PLIKU: "<<endl;
                    cin>>nazwa;
                    ifstream moj_plik (nazwa.c_str());
                    if (moj_plik.is_open())
                    {
                        string nazwa_obiektu;
                        char nazwa_klasy;
                        int a, b, c, d, g, h, i, j, k, p, s, t, v, w;
                        while(moj_plik>>nazwa_klasy){
                        switch(nazwa_klasy)
                        {
                    case 'B':
                        {
                            moj_plik>>nazwa_obiektu>>a>>b>>p;
                            B obiekt;
                            obiekt.utworz_B(nazwa_obiektu, a, b, p);
                            lista_elem_B.push_back(obiekt);
                            break;
                        }
                    case 'G':
                        {
                        	moj_plik>>nazwa_obiektu>>a>>c>>g>>s;
                            G obiekt;
                            obiekt.utworz_G(nazwa_obiektu, a, c, g, s);
                            lista_elem_G.push_back(obiekt);
                            break;
                        }
                    case 'H':
                        {
                        	moj_plik>>nazwa_obiektu>>a>>c>>h>>t;
                            H obiekt;
                            obiekt.utworz_H(nazwa_obiektu, a, c, h, t);
                            lista_elem_H.push_back(obiekt);
                            break;
                        }
                    case 'J':
                        {
                        	moj_plik>>nazwa_obiektu>>a>>d>>j>>v;
                            J obiekt;
                            obiekt.utworz_J(nazwa_obiektu, a, d, j, v);
                            lista_elem_J.push_back(obiekt);
                            break;
                        }
                    case 'K':
                        {
                        	moj_plik>>nazwa_obiektu>>a>>d>>i>>k>>w;
                            K obiekt;
                            obiekt.utworz_K(nazwa_obiektu, a, d, i, k, w);
                            lista_elem_K.push_back(obiekt);
                            break;
                        }
                        }
                        }
					cout<<"\nWczytano dane z pliku."<<endl;
                    }
                    else cout<<"Nie udalo sie otworzyc pliku. Sprawdz czy podana nazwa jest prawidlowa"<<endl;

                    //break;
                }
            else if (wybor=="TREE") // wyswietl cale drzewo - TREE
                {
            cout<<endl<<"         SPOSOB DZIEDZICZENIA KLAS"<<endl;
            cout<<"              (tree - drzewo)"<<endl<<endl;
            cout<<"\t\t  A "<<endl;
            cout<<"\t\t  | "<<endl;
            cout<<"  ------------------------------------  "<<endl;
            cout<<"  |               |                  |"<<endl;
            cout<<"  v               v                  v"<<endl<<endl;
            cout<<"  B               C                  D"<<endl<<endl;
            cout<<"                  |                  |"<<endl;
            cout<<"               -------               |------ "<<endl;
            cout<<"               |     |               |     | "<<endl;
            cout<<"               v     v               v     v "<<endl<<endl;
            cout<<"               G     H               I     J"<<endl<<endl;
            cout<<"                                     |"<<endl;
            cout<<"                                     |"<<endl;
            cout<<"                                     v"<<endl<<endl;
            cout<<"                                     K"<<endl<<endl;
                   // break;
                }

    else if (wybor=="END")
    {
        cout<<"Program zostanie zakonczony..."<<endl;
    }
    else
    {
        cout<<"Nie ma takiej opcji w MENU, wpisz ponownie"<<endl;
    }
   // } // zamkniêcie switcha
    } // zamkniecie while'a
return 0;
}
