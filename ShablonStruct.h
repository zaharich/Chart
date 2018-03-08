//               DATA=2011.01.02     ������ ��������� ���������
#ifndef ShablonStructH                              // ������� 2014_01_13
#define ShablonStructH                              // ������� 2014_01_13
#define KSISTEM 3                  // 2014_01_13
#define CHART_LSCREEN 2000        // ���-�� �������� �� ������� �� �����������    // 2014_01_13
#define KGRMAX 11
#define SINXROCLOVO 0x55555555  //  ����������� � ����� ������ ������� XX
struct SisTable                 // ��������� ��������� �������
      {
       int    IndexSisTable;    // ������ ��������� SisTable
       int    IndexPotok;       // ������ ��������� Potok
       int    IndexPotokS;      // ������ ��������� Potok
       int    IndexRazdel;      // ������ ��������� Razdel
       int    IndexPasp;        // ������ ��������� Pasp
       int    IndexTipPar;      // ������ ��������� TipPar
       int    IndexBufNPasp2;   // ������ ������ � ���������
       int    IndexRK;          // ������ ��������� RK
       int    IndexDDK;         // ������ ��������� RK
       int    IndexIndex;       // ������ ���������� �����
       int    IndexNakopitel;   // ������ ��������� Nakopitel
       int    LSisTable;        // �����  ��������� �������
       int    LPotok;           // �����  ��������� �������
       int    LPotokS;          // �����  ��������� �������
       int    LRazdel;          // �����  ��������� ��������
       int    LPasp;            // �����  ��������� ���������
       int    LTipPar;          // �����  ��������� �����
       int    LBlokTar;         // �����  ����� ���������=0
       int    LRK;              // ����� ���������  RK
       int    LDDK;             // ����� ���������  DDK
       int    LIndex;           // �����  ������� ���������� �����
       int    LNakopitel;       // �����  ��������� Nakopitel
       int    LBufNPasp;        // �����  ������ � ���������
       int    LFileStruct;      // ������ ����� ��������
       int    MasIndexBlok[256];// ������ ������� ��������� ������ �� NBxod
short  int    NSistem[256];     // ������ ������ �� �������
short  int    MasPozKadr[256];  // ������ c�������� ������� ������� ����� (��� �������� �������)
short  int    KParTip[64];      // �-�� ��������� �� ����� ���������
short  int    KParGR[KGRMAX];   // ���-�� ���������� � ������� (8 7 6 5 4 3 2 1 0)
short  int    KParTape[KGRMAX]; // ���-�� ���������� � Tape  (8 7 6 5 4 3 2 1 0)
short  int    LTape[KGRMAX];    // ����� Tape(� ������)      (8 7 6 5 4 3 2 1 0)
short  int    KNakopitel;       // �-��  Nakopitel
short  int    NProgGamma;       // �-��  Nakopitel
short  int    KPotS;            // �-��  ���� �������
short  int    KPot;             // �-�� ������� ������������
short  int    KRazdel;          // �-�� ��������
short  int    KPasp;            // �-�� ���������
short  int    KTipPar;          // �-�� ������ ����������
short  int    KIndex;           // �-��
short  int    KRK;              // ����� ����������  RK
short  int    KDDK;             // ����� ����������  DDK
short  int    NPasp1;           // ����� ������� �������� ������� ������
short  int    NPaspTime[16];    // ������ ��������� �������
short  int    KPaspTime;        // �-�� ��������� �������
      char    Zakaz[16];        // �����
      char    ProgramBaza[64];  // ����� ���������� ����������� �������� �� ����
      };

         struct Nakopitel                  // ��������� �����������
      {
        char  NameNak[32];        // ������������ ����������
        char  TipNak[32];         // ��� ���������� (��1��,��1��,�����,Irig... )
short    int  NNak;              // �����  ����������
short    int  NStrPotS[32];      // ������ � �������� �������S
short    int  KStrPotS;          // �-�� �������S � ����������
      };

struct Potok                     // ��������� ����������� ��������������� �������
      {
        char  Potok[16];         // ������������ ������
        char  TipPot[16];         // ������������ ������ (Arinc,Kadr, Time)
        char  FormatKadr[16];    //������ ����� (Arinc,�����,Mcrpa,Irig)
short    int  KSisPot;           // �-�� ������ � ������
short    int  NSis[4];           // ����� ������� (1,2,3,4)
short    int  NStrPotS[4];       // ������ �������� � ������ S
short    int  NStrNak[4];        // ������ �������� ����������� � ������� �������� ������
short    int  NBxod[4];           // �   �����
short    int  NBxodKTF[4];        // �   ����� ���
short    int  Lkc;                // ����� ��������� ����� ��� ������ Irig
short    int  KCikl;              // �-�� ������ ��� ������ Irig
short    int  NProgGamma;         // � ��������� �����
short    int  LKadr;             // ����� �����
short    int  KKadr;             // �-�� ������ � ��� (��� �������� ����������)
short    int  NPasp1;            // ����� ������� �������� � ������
short    int  NPasp2;            // N �������a �������� ����������
short    int  KPaspPot;          // �-�� ��������� � ������
short    int  NPotS;             // � c��������� ������ �� ��������
short    int  NPotNak;           // � c��������� ������ �� ����������
         int  IndexBlok;         // ��������� ����
         int  Inform;            // ��������������� ������
      };

struct PotokS                     // ��������� ���� �������
      {
        bool  Status;            //  1-����� ��������������  0-���
        char  Potok[16];         // ������������ ������
        char  TipPot[16];        // ��� ������ (Arinc,Kadr.. )
        char  FormatKadr[16];    // ��� ������ (Arinc,Kadr.. )
        char  Nakopitel[16];     // ���������� (��1��,��1��,Irig,�����,�����...)
short   int  Blok;
short   int  Plata;
short   int  Kan;
short   int  NNak;              // ����� ��������� ���������� (0,1,2,3)
short   int  NTH;               // ����� ����������
short   int  NSis;              // ����� �������
short   int  NBxod;             // ����� ����� � ����������(� 1 ��  64)
short   int  NBxodKTF;          // ����� ����� � ���(� 1 ��  256)
short   int  Fmax;              // ������������ ������� ���������� � ������
      };

      struct Razdel                    // C��������  ��������
      {
        bool  Status;            //  1-������� ��������������  0-���
        char  NSis[8];           // ���������� ������ ������ (1,2,3,4)
        char  Razdel[32];        // ������ �������
short    int  NPasp1;            // ����� ������� �������� �������
short    int  NPasp2;            // N �������a ���������� �������
short    int  KPaspRazd;         // �-�� ��������� �������
      };

struct Pasp                       // ��������� ���������
        {
        bool Status;              //  1-������� ��������������  0-���
        char Potok[16];           // ������������ ������
        char TipPotok[16];        // ��� ������
        char Ident[16];           // ������������� ���������
        char Zamer[16];           // �����
        char Adrec8[8];           // ����� 8
        char Dathik[16];          // ������
        char Tipr;                // float-f,int-i,...
        char Razm[16];            // �����������
        char Tips[16];            // TAR,ARING,RK,satelit...
        char Data[12];            // ����
        char Name[128];           // ������������ ���������
        char NC_NCL[64];          // ���������� ���� NC_NCL ����
short   int  KSis;                // �-�� ������ ���������
short   int  KPoz;                // �-�� ���� (�������) ���������
short   int  Kcl;                 // �-�� ���� ��������� �� ������� k����
short   int  NPot;                // N ������ � ��������� POTOK
short   int  NClova;              // N �������� ����� � ��������
short   int  NSis[4];             // ������ ������ (1,2,3,4 � ����� ������������������)
short   int  Poz1[4];             // ������� ��������� (Sek:   Poz1[0]-������)
                                  //
                                  // ������ ������� ��� ������ Arinc
        int   Kod[4];             // ���� ��������� �� ������� �����
      float   Fiz[4];             // ���������� �������� ����������
short   int  NRazd;               // N ������� �������
short   int  Servis;              // ������� ������
short   int  Adrec10;             // ����� 10
short   int  Tip;                 // ����� TAR,ARING,RK,satelit...(������������ ���������� TipPar)
short   int  F;                   // ������� ������ ��������� � ���
short   int  f;                   // ������� ������ ��������� � �����
short   int  Ngr;                 // ����� ������
short   int  NRK1;                // ����� ������ RK
short   int  KRK;                 // �-�� ������� ������ RK
short   int  N_pasp_sat;          // �  �������� �������� (����������  ���� ��� max ��� �ar)
        int  N_pasp_sat1;         //NGr=Arinc   NGr  � ������� ������� ������ ����.N_pasp_sat1=-2
                                  //NGr=KanTemp NGr ��������� � ������ ����������  N_pasp_sat1=-3
                                  //NGr=HET     NGr ���,���������� � ������ ����   N_pasp_sat1=-4
                                  //NGr=IdentNGr    NGr ����� � ���� Sat  N_pasp_sat1=NPasp
                                  // �  �������� ������� ������ ��� ����. �������
short   int  N_pasp_sat2;         // �  �������� ��������� ���� ��� ����3
unsigned short   int  N_pasps;             // N  ����������  �������� � ������
unsigned short   int  N_pasps_sis;         // N  ����������  �������� � ������� (�������)
unsigned short   int  N_pasps_pot;         // N  ����������  �������� � ������
unsigned short   int  N_pasps_inf;         // N  ����������  �������� �� ����������
unsigned short   int  K_pasps_inf;         // �-�� ��������� �� ����������
         float  Min;                       // ����������� �������� ���������
                                           // MIN ������� ������� ������ �� ���� SEK
         float  Max;                       // ������������ �������� ���������
                                           // MAX ������� ������� ������ �� ���� SEK
         float  Corect;                    // �������� �������� ���������
         void  *AdresPar;                  //
         void  *AdresKod;                  //
         class  DehifrClass *adres_class_dehifr; // ����� ���������� ������ ����������� ���������
// ������ ������������ ����
  short int r[3];                  // Tar - ������� �����������
  short int d;                     // �������� ��������� 180 ���� 360
  short int ng;                    // ����� �����
  short int nmrg;                  // ����� �������� ������� ������
  short int NDiap;                 // ����� ��������� ����3, � ����� ��� ���������������� �������
  short int model;                 // N ������ TIME
  short int pok;                   // ���������� ������� �������
  short int m;                     // ������������ ����������
  short int kz;                    // ����. �����������, �-�� ����� ���������������� �������
  short int KodSt;                 // ��� ���������� ��� Tenzo
  short int SPol;                  // ������� �������� ��� TAR (1-5) ���� �-�� ����� ��� Inter
       char var;                   // r-cr s-cs z-cz ������� ���� �������
     double cr;                    // ����  �������� �������, �������� ��� APFT
     double kapr[6];               // ������������ ������������� ��� TAR,TENZO
                                   // �apr[0]- ����� ������������ ����. ������� Sek
                                   // kapr[1,2,3,4,5]-�����.���������. ��� ������ ������ ����. ������� Sek
                                   // kapr[0] - �������� � �������� �������� �������  -������ ��� �������� ������� ������� � �������� ���� double
        };

struct TipPar                      // ��������� ����� ���������
      {
         short int  Tip;           //  ����� ������ ����������
         short int  modif;         //  ������ ������
              char  TipS[16];      //  ��� ���������� ����������
         short int  LPar;          //  ����� ��������� � ����� ��� � 16� ������
         short int  maska;         //  ����� � ����� ��� 0 ���� 1
         short int  LMinimax;      //  ����� ��������� � ����� MINIMAX
              char  TipPar;        //  ��� ���������(f,i,l)
         short int  KPar;          //  �-�� ���������� ������� �����
      };

 struct RK                     // ������ ��������� RK � ArincRK
     {
          char Potok[16];     // �����
          char Ident[16];     // ����� ������������� ������� RK
          char Name [128];     // ������������ RK
     short int NRazRK;        // ����� ������� RK
     short int Adrec;         // ����� RK
     short int EXTR;          // ������� ������������� �������
     short int NRK_SL;        // � ��������� ��������� RK c ���������� ���������������
     };

struct DDK                    // ��������� DDK  r18.3=cs
                              // ��������� DDK  r18=cs (�� ���������=.4)
     {
     short int R;             // ����� ������� �������
     short int KRazTet;       // �-�� �������� �������
         float cr;            // ����  ������� �������
     };


// ��������� ����� 48FM  �� 10.07.2010
//====================================
   struct  Tim
        {
        unsigned int TInt  :32;
        unsigned int NFaz  :12;
        unsigned int Tip   :4;
        };


struct  Arinc
        {
        unsigned int Kod   :24;
        unsigned int Adrec :8;
        unsigned int NBxod :12;
        unsigned int Tip   :4;
        };

struct  Kadr
        {
        unsigned int Kod1  :16;
        unsigned int Kod2  :16;
        unsigned int NBxod :12;
        unsigned int Tip   :4;
        };



// ���������  32-���������� ����� ���������� �����
//================================================
struct  Index
        {
         unsigned int NSis :4;       // ����� ������� ��� Arinc
          unsigned int NCl :4;       // Status=0 - ������� ������������ � ������� �� ������ Ncl
        unsigned int KPasp :8;       // ���������� ��������� �� ����� ������� �����
unsigned int IndexBufNPasp :16;      // ������ ������ � ���������
        };
// ���������  32-���������� ����� �������� ���� ������
//====================================================
struct  AdrecDamen
        {
        unsigned int Tip    :6;  // ��� ��������� 26-31
        unsigned int End    :2;  //  24-25 ������: 24=1-����� ���� 25=1- ����� �����
        unsigned int NBlok  :3;  // 21-23 ������:� �����
        unsigned int NPlata :5;  // 16-19 ������:� �����
        unsigned int Adrec  :8;  // 8-15  ������:����� ����������
        unsigned int MSB    :3;  //   5   ������: 1-MSB  2=LSB
        unsigned int NKan   :5;  // 0-2   ������:  � ������
        };

// ������ ��������� �����
// ���������:
       // ���������                                 struct IndexBlocFileDatVer3
       // ��� ������                                                  char[256]
       // ������ MinimaxWin                                           char[256]
// ������ � ������� 3 ������ MinimaxWin
 struct PotokKadr
  {
 int IndexMas;         // ������� � �����(� ������) ������� ������� ���������
                       // ���������� � �������� ������
 short int KWord;
 short int NVxodKTF;   // ����� ����� � �������� �����
 short int NStrNak;    // ����� ��������� ����������

  };

struct IndexBlocFileDatVer3
{
 int IndexBeginData;   // ������� � �����(� ������) ������ ������
 int IndexBazaMdb;     // ������� � �����(� ������) ������ ���� ������ .mdb
 int LBazaMdb;         // ������ (� ������) ���� ������ .mdb
 int IndexBazaBaz;     // ������� � �����(� ������) ������ ���� ������ .baz
 int LBazaBaz;         // ������ (� ������) ���� ������ .baz
 int IndexOldHeadTN1;  // ������� � �����(� ������) ������ ������� ��������� ��1
 int LOldHeadTN1;      // ������ (� ������)  ������� ��������� ��1
 int TimeBegin;        //  ������� ����� ���������
 int TimeEnd;          //       -||-     ��������
 int FTime;            //  ������� ���������� ����� �������
 int DeltaTime;        //  TimeEnd - TimeBegin
 int TimeHAEBegin;     //  ���     ����� ���������
 int TimeHAEEnd;       //       -||-     ��������
 int FTimeHAE;         //  ������� ���������� ����� ������� ���
 int DeltaTimeHAE;     //  TimeHAEEnd - TimeHAEBegin
 short int KRealPotokKadr;  // �������� ���-�� �������� �������
 struct PotokKadr PotokKadr[4];
 char NameBaza[64];          // �������� ��� ���� ��� ���������� � ����������     // �� ������ 15650 2014_11_11
 char Rezerv[90];     // 154                                                      // �� ������ 15650 2014_11_11
// char Rezerv[154];     //  //                                                   // �� ������ 15650 2014_11_11
// char Rezerv[186];     // 196
// char Rezerv[196];     // 228
// char Rezerv[228];     // 228
};





/*IndexBlocFileDatVer3,*PtrIndex;
char TipData[256];     // ��� ������
                       // "�����"
                       // "IRIC"
                       // "��1��"
                       // "��1��"
char Ver[256];         // ������
// ��� �������� �������(�� �������� ������ ������� ���������)         char[256]
*/

//------------------------------------------------------------------------------

// ������ ����� ������ 48��

struct IndexBlocFileDatXX
{
char TipData[256];                  // ��� ������
                                                  // "48FM"
                                                  // "48XX"
                                                  // "���������"
char Ver[128];                           // ������
char Samolet[128];                    // "��-214 411"
char Nakopitel[32];                 //  ������������ ����������
char DatePolet[64];                    // ���� ������
 int IndexBeginData;                  // ������� � ����� (� ������) ������ ������
 int IndexBazaMdb;                   // ������� � ����� (� ������) ������ ���� ������ .mdb
 int LBazaMdb;                          // ������ (� ������) ���� ������ .mdb
 int IndexBazaBaz;                    // ������� � �����(� ������) ������ ���� ������ .baz
 int LBazaBaz;                           // ������ (� ������) ���� ������ .baz
 int IndexStructPaspChart;         // ������� � �����(� ������) ������ �������� ��������� ��� ����� ���������������� CHART
 int KStructPaspChart;                // ���-�� ��������� ��� ����� ���������������� CHART
 int IndexStructRKChart;            // ������� � �����(� ������) ������ ������� ������� �������� RK
 int KStructRKChart;                 // ���-�� �������� RK
 int TimeBegin;                       //  ����� ������ ������
 int TimeEnd;                          //  ����� ����� ������
 int DeltaTime;                        //  TimeEnd - TimeBegin
 int FTime;                                  //  ������� ���������� ����� �������
 int    F;                                        // ������� ���
 int IndexStructGif;                       // ������� � �����(� ������) ������ Gif
 int LGif;                                     // ������ (� ������) Gif
// int NStructPaspTimeChart;       // ���������� ����� ��������� ( � ������� �������� ��������� ) �������� ������� ��� ����� ���������������� CHART
// short int KRealPotokKadr;         // �������� ���-�� �������� �������  2014_01_28
// struct PotokKadr PotokKadr[4];          // 2014_01_28
 int IndexBeginPackData;                  // ������� � ����� (� ������) ������ ����������� ������
 int LPackData;                           // ����� (� ������) ����������� ������
 short int KSecPiksel;                    // ���-�� ������ � ������� ( ������� ������ ������)
 bool FlagPackData;                       // = false , ����  ����������� ������ � ����� ������ �����������
                                          // = true                -"-                         ������������
 short int KRealSecPackData;                  // ���-�� �������� ������ � ����������� ������
 int IndexStructRazdel;                   //  ������� � �����(� ������) ������ �������� ��������
 int KStructRazdel;                       //  ���-��  �������� ��������
 char NameBaza[64];          // �������� ��� ���� ��� ���������� � ����������     // �� ������ 15650 2014_11_11
 char Rezerv[1291];                                                               // �� ������ 15650 2014_11_11
// char Rezerv[1355];                                                             // �� ������ 15650 2014_11_11
// char Rezerv[1313];                     // 2014_01_28
// char Rezerv[1321];                     // 1404
};

//------------------------------------------------------------------------------

struct  PaspChart                          // ���������   ��������� ����������
 {
  char   Razdel[32];
  char   Ident[16];
  char   Zamer[16];                      // ����� ������
  char    Name[128];                     //  ������������ ���������
  char    Razm[16];                       // �����������
  char   TipS[16];                         //  ��� ��������� :   Kod16, Kod32,RK, Float, Double, �����
  short int   Tip;                         //  ��� ��������� :   ���� ��� ��������� ����� 16�(Kod16) Tip =0
                                           //                      -"-              ����� 32�(Kod32 Arinc) Tip =1
                                           //                      -"-              ������������ Float Tip = 2
                                           //                      -"-              ������������ Double Tip = 3
  short   int    F;                            //  ������� �����������
  float    Min;                               // Min �������� ��������� � �������
  float    Max;                              // M�� �������� ��������� � �������
  short   int    NStrRK1;              //  � ������ ��������� RK
  short   int    KRK;                     // �-��  ������� ������ � �����
  short   int  NSis[4];                   // ������ ������ (1,2,3,4)
  int   NPasp;                            // ����� �������� �� ����
   float Fiz[4];                       //    // 2014_01_13
   unsigned int Kod[4];                     // 2014_01_13
  unsigned short   int  N_pasps_razdel;   // N  ����������  �������� � �������
   short int   NRazdel;                   // ����� ��������� �������      // 2014_04_08
   char   Rezerv[224];                    // ������     // 2014_04_08
//   char   Rezerv[226];                 // ������     // 2014_04_08
//   char   Rezerv[228];                 // ������     // 2014_01_13
//    char   Rezerv[260];                   // ������    // 2014_01_13
 };

struct  RKChart                      // ���������   RK
 {
 char Ident[16];                     // ����� ������������� ������� ����������
 char   NameRK[128];                 // ������������ RK
 short   int    NRazRK;              //  � �������
 short     int   NRK_SL;             // � ��������� ��������� RK c ���������� ���������������
 char Rezerv[108];                   // ������   124
 };

 struct Gif                  // 2014_01_13
  {
  unsigned  int Time;        // ������� �������
  unsigned int TimeHAE;      // ����� ������ 32 ����. �����
  unsigned int Poz;          // ������� � ������ (� ����� ������) ����� ������� � ����� ��������
  };

struct MinMax                  // 2014_01_13
   {
    union Min
     {
     float F;
     int   L;
     short int I[2];
     }Min;
    union Max
     {
     float F;
     int   L;
     short int I[2];
     }Max;
   };             // 8 ����
//=============================================================================
struct  TimXX
        {
        unsigned short int LFaz;       // ����� ���� � ������
        LONGLONG TInt;                 // 64-��������� (��� long) ������� ������� ���� � 100-������������� ����������.
        };
        
struct  TimXXS
        {
        unsigned int Sinxroclovo;
        struct  TimXX TimXX;
        };
/*
struct  TimXX
        {
        unsigned int TInt  :32;
        unsigned int KParFaz  :16;       // ���-�� ���� � ���� ��� ���� ��� �������
        };
*/
/*
struct  ParamXX                           // 2014_01_13
        {
        unsigned int LDat :3;             // ���-�� ����(16�) ������ ��� ���������
        unsigned int NPasp :13;           // ����� ��������
        };
*/

struct  ParamXXAnalog                           // 2014_01_13    ��� ��������������� (����2,����3,���,...������������ ���������� � ������ 48��)
        {
        unsigned int Kod :12;              // ��� ��������� ��������� (�����,IRIG, ...)
        unsigned int NSlov :4;             // ����� ����� (1,2,...)
        };
struct  ParamXX                           // 2014_01_13
        {
        unsigned short int NSis_NClov :2;       // ����� ������� ��� ������� �������, ����� ����� ��������� ��� ����������������� �������
        unsigned short int NPasp :14;           // ����� ��������
        };

//=============================================================================

struct  ParamXXChart                     // 2014_01_13
        {
          union KodFizika
          {
          unsigned short int i[2];
          unsigned int L;
          float F;
          }KodFizika;
        unsigned short int NSisNClov :2;
        unsigned short int NPasp :14;
        };
/*
struct  ParamXXChart                     // 2014_01_13
        {
          union KodFizika
          {
          unsigned short int i[2];
          unsigned int L;
          float F;
          }KodFizika;
        unsigned int NPasp :14;
        unsigned int NSisNClov :2;
        };
  */

#endif       // ������� 2014_01_13

