// ��� ����������� ��������� ������ ���� ������� �� �����  Minimax ShablonStruct.h � ������ ���� ������ ���� ��������� � �����  Minimax ShablonStruct.h
#ifndef Chart_MinimaxH                              // ������� 2013_07_15
#define Chart_MinimaxH                              // ������� 2013_07_15
#define KSISTEM 3
#define CHART_LSCREEN 2000        // ���-�� �������� �� ������� �� �����������
// ������ ����� ������ 48��
/*
struct IndexBlocFileDatXX
   {
   char TipData[256];                  // ��� ������
                                                  // "48FM"
                                                  // "48XX"
                                                  // "���������"
   char Ver[128];                      // ������
   char Samolet[128];                  // "��-214 411"
   char Nakopitel[32];                 //  ������������ ����������
   char DatePolet[64];                 // ���� ������
   int IndexBeginData;                 // ������� � ����� (� ������) ������ ������
   int IndexBazaMdb;                   // ������� � ����� (� ������) ������ ���� ������ .mdb
   int LBazaMdb;                       // ������ (� ������) ���� ������ .mdb
   int IndexBazaBaz;                   // ������� � �����(� ������) ������ ���� ������ .baz
   int LBazaBaz;                       // ������ (� ������) ���� ������ .baz
   int IndexStructPaspChart;           // ������� � �����(� ������) ������ �������� ��������� ��� ����� ���������������� CHART
   int KStructPaspChart;               // ���-�� ��������� ��� ����� ���������������� CHART
   int IndexStructRKChart;             // ������� � �����(� ������) ������ ������� ������� �������� RK
   int KStructRKChart;                 // ���-�� �������� RK
   int TimeBegin;                      //  ����� ������ ������
   int TimeEnd;                        //  ����� ����� ������
   int DeltaTime;                      //  TimeEnd - TimeBegin
   int FTime;                          //  ������� ���������� ����� �������
   int    F;                           // ������� ���
   int IndexStructGif;                 // ������� � �����(� ������) ������ Gif
   int LGif;                           // ������ (� ������) Gif
   // int NStructPaspTimeChart;        // ���������� ����� ��������� ( � ������� �������� ��������� ) �������� ������� ��� ����� ���������������� CHART
   char Rezerv[1376];                  // 1404
   // char Rezerv[1404];               // 2048
   };
*/
 struct PotokKadr            // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ��������� ��������� ����� � ����� "ShablonStruct.h" ���������� �����������.
  {
 int IndexMas;         // ������� � �����(� ������) ������� ������� ���������
                       // ���������� � �������� ������
 short int KWord;
 short int NVxodKTF;   // ����� ����� � �������� �����
 short int NStrNak;    // ����� ��������� ����������

  };

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
 short int KRealPotokKadr;         // �������� ���-�� �������� �������
 struct PotokKadr PotokKadr[4];
 int IndexBeginPackData;                  // ������� � ����� (� ������) ������ ����������� ������
 int LPackData;                           // ����� (� ������) ����������� ������
 short int KSecPiksel;                    // ���-�� ������ � ������� ( ������� ������ ������)
 bool FlagPackData;                       // = false , ����  ����������� ������ � ����� ������ �����������
                                          // = true                -"-                         ������������
 short int KRealSecPackData;                  // ���-�� �������� ������ � ����������� ������
 char Rezerv[1321];                     // 1404

// char Rezerv[1323];                     // 1404
// char Rezerv[1334];                     // 1404
// char Rezerv[1376];                     // 1404
// char Rezerv[1404];                    // 2048
};



struct  PaspChart                      // ���������   ��������� ����������
   {
   char   Razdel[32];
   char   Ident[16];
   char   Zamer[16];                   // ����� ������
   char    Name[128];                  //  ������������ ���������
   char    Razm[16];                   // �����������
   char   TipS[16];                    //  ��� ��������� :   Kod16, Kod32,RK, Float, Double, �����
   short int   Tip;                    //  ��� ��������� :   ���� ��� ��������� ����� 16�(Kod16) Tip =0
                                       //                      -"-              ����� 32�(Kod32 Arinc) Tip =1
                                       //                      -"-              ������������ Float Tip = 2
                                       //                      -"-              ������������ Double Tip = 3
   short   int    F;                   //  ������� �����������
   float    Min;                       // Min �������� ��������� � �������
   float    Max;                       // M�� �������� ��������� � �������
   short   int    NStrRK1;             //  � ������ ��������� RK
   short   int    KRK;                 // �-��  ������� ������ � �����
   short   int  NSis[4];               // ������ ������ (1,2,3,4)
   int   NPasp;                        // ����� �������� �� ����
   float Fiz[4];                       //
   unsigned int Kod[4];
   char   Rezerv[228];                 // ������
   };

struct  RKChart                        // ���������   RK
   {
   char Ident[16];                     // ����� ������������� ������� ����������
   char   NameRK[128];                 // ������������ RK
   short   int    NRazRK;              //  � �������
   short     int   NRK_SL;             // � ��������� ��������� RK c ���������� ���������������
   char Rezerv[108];                   // ������   124
   };


struct  TimXX
   {
   unsigned int TInt  :32;
   unsigned int KParFaz  :16;          // ���-�� ���� � ���� ��� ���� ��� �������
   };


struct  ParamXX
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




 struct Gif
  {
  unsigned  int Time;         // ������� �������
  unsigned int TimeHAE;      // ����� ������ 32 ����. �����
  unsigned int Poz;          // ������� � ������ (� ����� ������) ����� ������� � ����� ��������
  };

struct MinMax
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

#endif       // ������� 2013_07_15

