#ifndef FileMinimaxGlobalValueH
#define FileMinimaxGlobalValueH
//---------------------------------------------------------------------------
#include <fstream.h>
#define KPOLEIMAX     16           //���-�� ����� ��� ������ � �������
#define KPASPTIME 32               // ���-��  ��������� �������
#define KHANDLE 100                // ������������ ���-��  ���� ������������
#define KSISTEMMAX  4              // ������������ ���-�� ������
struct FlagPotokVizual
{
bool DriverOpen;             // = true ������� ����� ������ � ����� �������  // 2007_10_31
int     TipWindows;          // ��� ����  =0 ��������_������ =1
int     TipPotoka;           // =0 �� ������
                             // =1 ���� "������"
                             // =5 "File"
                             // =10 ���� "����"
char    NameTipPotoka[64];
//int     CloseDisminVizualPotok; //=1 ������ �� �������� �������
                                // ISRDismin,ISRVizual
int     TipBort;             // 0 - ������� 1 - ��( �������� 6 ��������� ���)
//int	FileFormat;	     // =1 ������ ���� �������
                             // =2 ����� ����� ���������,��������� ��� ������
                             //  ����������� ���� ChartMinimax
int	FileDat;	     // =1 ������ ���� ������
int     TipFileIni;          // ��� ����� ���������
                             // =0 ���� ��������� ������
                             // =1 ������� ����� ���� ���������
                             // =2 ������ �� �������� ����
                             // =3 ������ �� �������� ������

int     NVxodIni;            // 0 - ������ ���� � ����� ����� ����� ���������
                             // 1- �� ������ ����
//int     ControlPlat;         // =1 ������ �� �������� ����
//int     ControlSistem;       // =1 ������ �� �������� ������
int     FlagFileOut;         // =0 ��� ��������� �����
                             // =1 ���� ����� � �������� ����
bool    FileOutNoWrite;      // = 1 �������� ����� � �������� ����
                             // (��� ���������� ������� � ���������� ������������)
int     Baza;
int TipBaza;                 // ������ ������� ���� =0 �� ���� =1 �� ����� ������
char NameTipBaza[32];        // ������ ������� ����    "�� ����" "�� ����� ������"
bool FlagEditionBaza;        // ���� �������������� ����  = false �� �������������
int     DllOpen;             // =1 ��������� ������������ ����������
                             // =0 ���
//int     Instal;             // =0 ��������� ��� ������������ �� ���������
                             // =1         =|=                   ���������
int     FlagGrafik;           // =1 ���� ����� � ����������� ����
int     Graphics;            // =0 ��� ��������
                             // =1 ���� ����� ��������
int     TablRight;           // =1 ���� ����� ������ � ������ �������
                             // =0 ���
int     TablDown;            // =1 ���� ����� ������ � ������ �������
                             // =0 ���
int     ControlBort;         // =1 ���� ����� � ���� �������� �����
                             // =0 ���
//int     Nastroika0;          // =0 ���������� ��������� ���������
                             // �.�. ���� ���� ���������� �������� ����
                             // ���� ����� �������,...
int     PageEndStop;            // ������� ��������� ����� ������
                                // ���� �� ����� �������� ���� �������������
                                // =0 ��� ���������
int     EndVvodDat;          // ��� ����������� ���������� ������ "Dismin"
                             // ������� ���������� ����� ������ ������
                             // ���� �� ����� ��������,���� �������������
                             // =1 ������ ��������
//int     NastroikaChart;      // =1 ���� ������� ������ ,����� ��������� ...
//int     KadrObrab;           // =1 ���� ���������, =2 ���� � ���������
                             // ���������
//int     PageBegin;           // ������� �������� �� ����� ����.��������
int     TablDownBegin;       // ������� �������� �� ����� �������
//short int     *KadrDisminInp; // ����� �������� ����� ��� ���������
int     BortOffOn;            // =1 ���� � ����� �������
int     Test;                 // =1 ������������ ���������(��������� ���������
                              //    ������� ����� )
unsigned int Vivod;           // 32 ��������� �����
                              // 0� =1 ���� ����� ���������� �� ������ ��� �������
                              // 1� =1 ���� ����� � ���� BortControl
                              // ...
unsigned int VivodTek;        // �������� ���������� ������  ����������
                              // �������� �����  Vivod
int ChangeFormat;             // ������� ����� ��������; =1 �� ����� �����������
                              // �������( ����,�����,������� ������� ...) � ����������
int FlagDismin;
bool NoParam;                 // = true ���� �������� � ������ �� ������ � ����
bool Reper;
bool Printer;                 // = true - ����� ������� �� ������� = false �� �������
bool EditFormat;              // = true ����� ��� �������
int ArincIric;                // = 0 ��� �������� ������ Arinc
                              // = 1 ��� �������� ������ Iric
HWND HandleFormUser[KHANDLE];
HANDLE HandleMainFormMinimax;
int KWindowsUser;             // ���-�� ���� ������������
//int  CountWindowsUser;      //
int KFormControlSistem;
int KFormGrafic;
int KFormFileOut;
int KFormKonvert;
int MasFormControlSistem[KHANDLE];       // MasFormControlSistem[i] = -1 ,���� ���� � ������� i �� ����������
int MasFormGrafic[KHANDLE];              // MasFormGrafic[i] = -1 ,���� ���� � ������� i �� ����������
int MasFormFileOut[KHANDLE];             // MasFormFile[i] = -1 ,���� ���� � ������� i �� ����������
int MasFormKonvert[KHANDLE];             // MasFormKonvert[i] = -1 ,���� ���� � ������� i �� ����������
int MasHANDLE[KHANDLE];       // MasHANDLE[i] = -1 ,���� ���� � ������� i �� ����������
int KClassSpisok;
int KClassFormat;
struct Ini * PtrIniBegin;     // ����� ��������� ��� ������� ����
struct Ini * PtrIniEnd;       // ����� ��������� ��� ���������� ����
char FileNameBaza[256];       // ��� ����� ���� ������
char FileNameLibrary[256];    // ��� ����� ����������( ��� ��������� ���������� )
char FileNameDataInp[256];        // ��� ����� ������
char FileNameDataOut[256];        // ��� ����� �������� ������
int WindowsUserTek;               // ������� ���� ������������
int NumberWindowsControlSistem;   // ����� �������� ����
int NumberWindowsGrafic;          // ����� �������� ����
int NumberWindowsFileOut;          // ����� �������� ����
int NumberWindowsKonvert;          // ����� �������� ����
int NumberClassFormat;       // ���������� ����� ���������� ������ FormatClass
int NumberClassSpisok;
bool Interfeis;                 // = true ������ ��� ���� ���� =false ���������� ��� ������� ����
char MinimaxWinDir[256];        // ��� ��������� �����
bool ChangeNastroiki;           // ���� ��������� ���������
int FlagOnPaintGrafic;                // < 2 - ���������� SplitterRightLeftPaint
                                // �� ��������
int FlagTenzo;                  // ���� = 1 ��������� ���������� �����  // 2008_01_22
                                // ���� = 2 ��������� ������� ���������� �����
bool RegimBortFileOut;          // == false,       � ������      // 2008_02_16
                                // == true, ������ � ������ �������� �������� ����
char IPAdresServer[32];         // 2009_07_08
char IPAdresClient[32];         // 2009_07_08
int NumberNakTN1PK;             // ����� ���������� ��1�� (0,1 ...)                   
};
//------------------------------------------------------------------
//#define KKADRBUFINP 4 //16
#define KKADRBUFINP 16
#define KGRMAX 11
#define KFAZMAX 1024
struct WinSistTab //
	{
unsigned short int ScreenWidthMax;          // ������ ������ ������� � ��������
int *BitNPodkadr;                           // ����� ������� ����� ��������{�� ������ ����]
unsigned short int NumberPixelBegin;        // ����� ������� ������ ����� �� �������
unsigned short int NumberPixelEnd;          // ����� ������� ��������� ����� �� �������
unsigned short int ChangeStepIntervalTime;  // ������� ��������� ���� ��-��,
                                            // ���������,����� ������ ���������
                                            // �������
int NBitReper;         // ����� ������� ������ (�� ����� ������� �����)
//unsigned short int  *AdresKadrIntegrator;
//unsigned short int  LKadrIntegrator;
unsigned short int     *BufKadrIrigWrite; // ����� ������ ����� IRIC  �������
unsigned short int      SizeBufKadrIrigWrite; // ������ ������ ����� IRIC ( � short int ) �������
unsigned char          *BufTN1PKWrite;
unsigned int            SizeBufTN1PKWrite;
short int NvxodIrig;        // ����� ����� ��� IRIG    ��������
unsigned short int     *BufInpKadr;       // ����� ������ �������� ����� ����� �������
unsigned short int     *BufInp; // ����� �������� ������
unsigned short int     *KadrInp; // ����� �������� ����� ��� ���������
//unsigned short int     *KadrDehifrInp; // ����� �������� ����� ��� ���������
unsigned short int     LKadrInp; // ����� �������� ����� ��� ���������
unsigned int           SizeBufInpKadr;  // ����� ������ �������� ����� �������
unsigned int           BufInpKadrIndex; //  ������(����� �����) � ������  �������
unsigned int           KKadrIric;       // ���-�� ����� Iric � ����� ������
int                    NKadrTekIric;     // ����� �������� ����� � ����� ������
int                    NKadrTekDehifr;       // ����� �������� ���� � ����� ������ ��� �����������
int                    NKadrBeginPage;  // ����� ����� � ����� ������ � ������ ��������
      unsigned int KKadrBufInp; // ���-�� ������ � ������
      int NKadrBufInpEppTek; // ����� ���������� ����������� ����� EPP
      int NKadrBufInpFileWriteTek; // ����� �������� ������������� �����
      int NKadrBufInpDehifrTek; // ����� ���������� �������. �����
//      short int *MarkerKadrBufInp;  // ����� ������� ��������
                                    // ������=1 ���� ��������� ������������
                                    // ���������� ����������
                                    // =2 ������� � ����
unsigned short int NGrMax;         // ����� ������� ������ � �����
unsigned short int KFazMax;        // ������������ ���-�� ��� � �����
unsigned short int KKadrSek;       // ���-�� ������ � �������
unsigned short int KFazSek;        // ���-�� ��� � �������
//unsigned short int LTimeFaz_1024;  // ������������ ���� � ����� �� 1024
unsigned short int StepFrame;      // ����� ������� ���� �����������
                                   // ���������� ����������� �������� (��� Iric)
unsigned short int StepFrameBaza;
int InformFrame;                   // �������� ��������������� � ������
unsigned short int NFazTek;
unsigned short int NGrTek;
unsigned short int NFazTekDehifr;
unsigned short int NGrTekDehifr;
//short int          NPaspTime[KPASPTIME]; // ������ ������� ��������� ������� � ���������
short int          NPaspTime[32]; // ������ ������� ��������� ������� � ���������
short int          KPaspTimeReal;        // �������� ���-�� ��������
short int          NPaspTimeTek;            // ����� �������� �������� ������� � ��������� Pasp
float *AdresTimeBort;
//float *AdresTimeDehifr;                 // ��������� ��� ��������� �������, ������ � ������������� �������
float *AdresTimeKadr;
float TimePage;                      // ���-�� ������ �� ��������
float TimeTekBort;
float TimeTekDehifr;                 // ��������� ��� ��������� �������, ������ � ������������� ������� 2010_02_15
float TimeBegin;                     // ��������� ����� � ������
float TimeEnd;                       // ����������� ����� � ������
float TimeTekBortOldDehifr;          // ��� ���������� ������ �������
float TimeTekBortOldVizual;          // ��� ���������� ������ �������
float TimeTekKadr;
float TimeTekBeginPage;
float TimeTekEndPage;
float TimeBeginTN1PK;                // ����� ������ ������ � ����� ��1��
float TimeEndTN1PK;
int FlagDehifr;
//unsigned short int  *AdresGr0InpDehifr; // ����� ������� ������
                                        // �������� ����� ��� ���������
float              LTimeKadr;           // ������������ ����� � ���
float              LTimeFaz;            // ������������ ���� � ���
unsigned short int StepFazDehifr;       // ��� ���������� � �����                 // ���-�� ������� �� �������   2013_01_14
unsigned short int StepFazVizual;       // ��� ������������ � �����
float              StepTimeDehifr;      // ��� ���������� � ��������
float              StepTimeVizual;      // ��� ������. � ��������
short int          StepKadrFaz;         // =0 ��������� �� �����
                                        // =1 ��������� �� ������ ( ��� ��-��
                                        // ������ ������������ �����)
unsigned short int IndexBufInp;                   //
unsigned short int IndexBufInpDehifr;
unsigned int       CountFazDehifr;      // ������� ��� ��� ���������� ��������� �������
unsigned int       CountFazEpp;         // ������� ��� ��� ��� ������ � �����
FILE *StreamInp;
FILE *StreamOut;
char FileNameOut[128];
char FileNameInp[128];
int FileWriteCount;      // ������� ������
unsigned int StepWrite;     // ��� ������������ ������
unsigned int FlagWrite;              // =0 ��� ������ =1 ������
unsigned int WriteOffOn;    // =1 ������ ��������� =0 ���������
                            // ���� ����� ������ �� ���������� (ISRFileWrite)
unsigned int FileSizeTek;   // ������ ����� �����
unsigned int CountFileWrite; // ������� ���������� ������
unsigned int CountFileWriteStep; // ������� ������ ��� ������ ��� ������������
unsigned int CountCloseFile;   // ������� ���������� �������� �����
unsigned int CountPrerVizual;
/*short int *MasNstrNPasp;    // ��������� �� ������ ������� struct Pasp �� �������� ���������������
short int *MasNstrNPaspZamer;    // ��������� �� ������ ������� struct Pasp �� �������� ����� �������
short int *MasNstrNSistem;  // ��������� �� ������ ������� struct Sistem �� ��������
short int *MasNstrNSistemNPasp;// ������� �� �������� ��������� �� ��������
                               // ������ ������
short int *MasNstrNPotok;  // ��������� �� ������ ������� struct Potok �� ��������
short int *MasNstrNPotokNPasp;// ������ �� �������� ��������� �� ��������
                               // ������ �������
short int *MasNstrNRazdel;  // ��������� �� ������ ������� struct Razdel �� ��������
short int *MasNstrNRazdelNPasp;// ������� �� �������� ��������� �� ��������
                               // ������ ��������
                               */
short int KBlok;               // ���-�� ������ � ������� �����
struct Blok *AStructBlok;
struct Plata *AStructPlat;
struct Kanal *AStructKanal;
short int KFormatPlat;         // ����� ���-�� �������� �� ������
short int NFormatPlat;         // ����� �������� ������� �� ������
bool FlagNoDehifrTime;         // =false ������� �����(��������) �� ������.
                               // ��� ���� ����� �� ���� �������� ������� �������
                               // =true �����  ������.
bool FlagPiritTimeKadr0;       // ( ��� ����������� ������� ������� ��� �����������)
                               // = false ������� ������ ������� ����� ����������
void *AdresParamProperty;      // �����  ��������� ��� ����������� ��� �������
int KParamDllInp;              // ���-�� ������� ���������� ��� DLL (��������� ������������)
int KParamDllOut;              // ���-�� �������� ���������� ��� DLL (�� ��������� ������������)
struct DllPar *PtrStructDllInp; // ����� ���������� ������ ��� �������� ������� ����������
struct DllPar *PtrStructDllOut; // ����� ���������� ������ ��� �������� �������� ����������
bool ReperTimePirit;
unsigned short int *AdresKadrMcrpa;
int PageTop;
int PageBottom;
int PageLeft;
int PageRight;
int WidthLineSetka;           // ����.������� ����� ����� ��� ��������        //2010_10_25
int WidthLine;                // ����.������� ����� ��� ��������        //2007_11_01
int WidthLineDouble;          //  ����.������� ����� ��� �������� ��� ������� ���. ��� ��=1  //2007_11_01
bool FlagPotokNotKadr;          // =false ���� ����� �������� =true ���� ����������
int NPaspTimeMarker_1;          // �������� ���� � ���� ����������� ����� �������
short int KPoleiTablParam;     // ����� ���-�� ����� � FormParam
short int NColNPole[KPOLEIMAX];// ����� �������,����� ����
short int NPoleNCol[KPOLEIMAX];// ����� ����,����� �������
                                // 1-�������������
                                // 2-���
                                // 3-�������
String   NPoleNamePole[KPOLEIMAX];
//   {"�������������","���","�������","�����","���","�������",
//    "���","������","����� ������","\0","\0","\0","\0","\0","\0","\0"};
	};

#define KTIP 16
#include "ShablonStruct.h"
union TAK
{
struct     Arinc Arinc;
struct      Kadr Kadr;
struct       Tim Tim;
};
/*      struct TipPar TipPar[]=
                     {
                      {0,0,"0",0},
                      {1,0,"Tar",1},
                      {2,0,"Bcpi2",2},
                      {3,0,"Bcpi3",1},
                      {4,0,"Sat",1},
                      {5,0,"-",1},
                      {6,0,"-",1},
                      {7,0,"RK",1},
                      {8,0,"Pchi",2},
                      {9,0,"Cno",2},
                      {10,0,"Tenzo",1},
                      {20,0,"Arinc",2},
                      {21,0,"ArincRK",2},
                      {22,0,"ArincSat",2},
                      {23,0,"ArincTar",2},
                      {30,0,"Time",3},  //�����  ����������
                     };

  */

struct Blok
{
char name[16];
short int nblok;
short int NCombo;           // ����� � ������ ComboBox
short int KPlat;
struct Plata *AdresPlat;
};
struct Plata
{
char name[16];
short int nplat;
short int KKan;
short int NCombo;           // ����� � ������ ComboBox
struct Kanal *AdrKan;
short int NFormat;     // ��� ����� ���(����������)
};
struct Kanal
{
short int NFormat;   // ����� �������� ��� ������������
short int NKan;    // ����� ������ � ����� ��������� struct Kanal ����� �� ���������
short int NCombo;           // ����� � ������ ComboBox
};


// ������������� ��������� "Ini" ���������
// ����������� ������� ����� ���� ������ � ����� ���������, ����� ����� "rezerv"
// �������� ��� ���� ������ ���� "rezerv" �� ���-�� ����, ����������� ���
// ����� ��������� ����
struct Ini
{
bool Interfeis;                 // = true ������ ��� ���� ���� = false ���������� ��� ������� ����
int TipWindows;   // ��� ����  =0 ��������_������ =1
char NameTipWindows[64];   // ��� ���� ����  ("��������_������" � �.�.)
HWND Handle;
int NumberWindows;           // ���������� ����� ���� ��� ������ ���������
int NumberFormTip;           // ���������� ����� ���� ������� ����
int NumberClassFormat;       // ���������� ����� ���������� ������ FormatClass
//int NumberClassTabl;         // ���������� ����� ���������� ������ TablClass
struct Ini * AdresPred;
struct Ini * AdresNext;
int  TipDataInp;             // ��� ������� ������
                             // =0  ������ �����������
                             // =1 ���� "������"
                             // =2 "����� IRIC_334_5"
                             // =3 "����� �����"
                             // =5 "����� ��1��"
                             // =10 ���� "����"

char NameTipDataInp[32];     // ��� ���� ������ �������� ������
//char TipBortInp[32];       // ��� ������ � ������  (���� ������)
char FileNameDataInp[256];   // ��� ����� �������� ������
char FileNameBaza[256];      // ��� ����� ���� ������
char FileNameFormatka[256];  // ��� ����� ��������
int TipBaza;                 // ������ ������� ���� =0 �� ���� =1 �� ����� ������
char NameTipBaza[32];        // ������ ������� ����    "�� ����" "�� ����� ������"
bool FlagEditionBaza;        // ���� �������������� ����  = false �� �������������
int  TipDataOut;             // =0 ��� ��������� ����� =1 ��������� =2 AVIONIX
char NameTipDataOut[32];         // ��� ���� ��������� �����
char FileNameDataOut[256];   // ��� ��������� ����� ������
char FileNameSpisok[256];    // ��� ����� ������ ��������� ����������
char FileNameLibrary[256];   // ��� ����� ����������( ��� ��������� ���������� )
bool EditNameFileOut;        // = false ��� ��������� ����� ���������� �������������
float Top;
float Left;
float Width;
float Height;
int ArincIric;                // = 0 ��� �������� ������ Arinc
                              // = 1 ��� �������� ������ Iric

char rezerv[6433];
};

struct DllPar
{
char name[16];                    // ������������� ���������� ���������
void *adres;
char name1[16];                   // ������������� �������� ���������
//int ngr;
char tip;
char name2[64];                   // ������������ ���������
void *adrespaspopornpar;              // 2013_05_06    ����� �������� �������� ���������
void *adrespaspraspar;                // 2013_05_06    ����� �������� ���������� ���������
};

#define KPotokAringMax 64
#define KPrerInit 100      // ���-�� ���������� ��� ����������� ���-�� �������
#define SinxrWord1 0xd99
#define SinxrWord2 0x87d
#define MaskFrame 0x00f8
struct Test
{
int   KPrerInitMax;
unsigned short int *AringKadrAdres[KPotokAringMax];// ��������� �� ������ ������� ������
unsigned short int *GammaKadrAdres[4];              // ��������� �� ������ ������� ������
unsigned short int *MsrpaKadrAdres[2];              // ��������� �� ������ ������� ������
/*int IrigCountKadr[2];      // ���-�� �������� ������
int IrigLKadr[2];          // ����� ����� � ������
int IrigKFrame[2];         // ���-�� ������
int IrigLFrame[2];         // ����� �����
int IrigSboiKadr[2];       // ���-�� ������� ������
int IrigInform[2];         // ���������������
int IrigDlitKadr[2];       // ������������ �����
*/
int *AringAdresCount[KPotokAringMax];  // ��������� �� ������ ������� ���������
                                       //
int AringInform[KPotokAringMax];
};
//-------------------------------------
    struct PotokBort
    {
    bool AringTime;
    short int NCanal;
    short int TipPotoka;
    short int NumberWord;
    int NumberTimeIntegrator;  // ����� ������� ������� ����� ������� ��1�� � �����������
    union                      // ����� ARINC
     {
     unsigned int l;
     unsigned short int i[2];
     }un;
    };
//-------------------------------------

struct Irig
{
unsigned short int *AdresKadr;          // ��������� �� ����� �������� �����
bool PriznakPotoka;            //0-false-����� �����������, 1-true-������������
unsigned short int Kadr;          //������� ������ �����
unsigned short int Kadr0;          //=1 ������� ������ ������� �����
unsigned short int LKadr;
unsigned short int LFrame;
               int Inform;         // ��������������� � ������
         short int KKadr;          // ���-�� ������ � ���
unsigned short int NumberWord;      //������� ���-�� ���� � �����
unsigned short int NumberWordKadr;  //������� ���-�� ���� � �����
unsigned short int CountSinxrWord1;
unsigned int CountSboiWord;          // ���-�� ������� ���� � ������
unsigned int CountSboiKadr;          // ���-�� ����� �������� ������ � ������
unsigned short int CountSinxrWord2;
bool SinxrWordsSearch;
unsigned short int KFrame;           //���-�� ������ � �����
unsigned short int NumberFrame;      // ������� ����� �����
int CountKadr;            //������� ������ � �����
int KondihKadr;
int SboiKadr;
//unsigned int AdresSboi[KSboiMax];
short int NumberSboi;
};
//-------------------------------------

struct Gamma
{
unsigned short int *AdresKadr;          // ��������� �� ����� �������� �����
bool PriznakPotoka;            //0-false-����� �����������, 1-true-������������
unsigned short int Kadr;          //������� ������ �����
unsigned short int Kadr0;          //=1 ������� ������ ������� �����
unsigned short int LKadr;
unsigned short int LFrame;
               int Inform;         // ��������������� � ������
         short int KKadr;          // ���-�� ������ � ���
unsigned short int NumberWord;      //������� ���-�� ���� � �����
unsigned short int NumberWordKadr;  //������� ���-�� ���� � �����
unsigned short int CountSinxrWord1;
unsigned int CountSboiWord;          // ���-�� ������� ���� � ������
unsigned int CountSboiKadr;          // ���-�� ����� �������� ������ � ������
unsigned short int CountSinxrWord2;
bool SinxrWordsSearch;
unsigned short int KFrame;           //���-�� ������ � �����
unsigned short int NumberFrame;      // ������� ����� �����
int CountKadr;            //������� ������ � �����
int KondihKadr;
int SboiKadr;
//unsigned int AdresSboi[KSboiMax];
short int NumberSboi;
};
#define KPOTOKARING 64
#define KPOTOKIRIG 2
#define LKADRARING  256
struct AringTest
{
unsigned short int *AdresKadr; // ��������� �� ����� �������� �����
int *AdresCount;      // ����� ��������� ��������������� ����������
bool PriznakPotoka;            //0-false-����� �����������, 1-true-������������
unsigned short int NumberWord;      //������� ���-�� ���� � �����
unsigned int CountSboiWord;          // ���-�� ������� ���� � ������
int CountWord;
int KondihKadr;
int SboiKadr;
unsigned short int AdresTek;         //����� �������� ������
};
struct TimeTest
{
bool PriznakPotoka;            //0-false-����� �����������, 1-true-������������
unsigned int TimeWord;          // ���-�� ���� � ������
unsigned int CountWord;
unsigned int KondihKadr;
unsigned int SboiKadr;
};
// ���������  48-���������� ����� �������
//=======================================

/*
struct  TimDehifr
        {
        unsigned int TInt :32;
        unsigned int Rez   :12;
        unsigned int Rez1   :1;
        unsigned int Tip   :3;
        };
*/
struct  TimDehifr
        {
        unsigned int TInt :32;
        unsigned int Faza :12;
        unsigned int Tip   :4;
        };
/*struct StBit1
     {
      unsigned int maker :3;
      unsigned int adres :21;
      unsigned int  :8;
     };

struct StBit2Gamma
     {
      unsigned int  :8;
      unsigned int ml :12;
      unsigned int st :12;
     };
struct StBit2
     {
      unsigned int  :8;
      unsigned int kod :24;
     }; */
extern PACKAGE struct FlagPotokVizual *PtrFlagPotokVizual;
extern PACKAGE struct WinSistTab *PtrWinSistTab;
extern PACKAGE struct Test *PtrTest;
extern PACKAGE struct SisTable *PtrSisTable; // ��������� ��������� �������
//extern PACKAGE struct Cbi       *PtrCbi;
//extern PACKAGE struct Table     *PtrTable;
extern PACKAGE struct TipPar    *PtrTipPar;
extern PACKAGE char  *PtrBlok_tar;    // ���� ������������ ����������
extern PACKAGE struct RK  *PtrBlokRK;       // ���� ������� ������� ������
extern PACKAGE struct DDK  *PtrBlokDDK;       // ���� ������� �������-���������� ����������
//extern PACKAGE unsigned short int  *PtrBlokArinc;    // ���� ������� ���������� ����  Arinc � �����������
//extern PACKAGE unsigned short int  *PtrBlokIndex;    // ���� ������� ���������� ����  �� Arinc � �����������
//extern PACKAGE unsigned short int  *PtrBlokIndex;    // ���� ������� ���������� ����  �� Arinc � �����������
extern PACKAGE unsigned int  *PtrBlokIndex;    // ���� ������� ���������� ����  �� Arinc � �����������
extern PACKAGE struct Upr *PtrUpr;          // ����������� ������
extern PACKAGE struct Potok *PtrPotok;
extern PACKAGE struct PotokS *PtrPotokS;
//extern PACKAGE struct Sistem *PtrSistem;
extern PACKAGE struct Razdel *PtrRazdel;
extern PACKAGE struct Pasp *PtrPasp;
extern PACKAGE struct Nakopitel *PtrNakopitel;
//extern PACKAGE struct Integrator  *PtrIntegrator;
//extern PACKAGE struct Potok  StructPotok,*PtrStructPotok;
extern PACKAGE struct Irig  StructIrig[2],*PtrStructIrig;
extern PACKAGE struct TimeTest  StructTimeTest,*PtrStructTimeTest;
extern PACKAGE struct Gamma  StructGamma,*PtrStructGamma;
extern PACKAGE struct AringTest  StructAringTest[KPOTOKARING],*PtrStructAringTest;
extern PACKAGE unsigned short int LTape[KGRMAX];
extern PACKAGE unsigned short  int MasGrFaz[KFAZMAX];
extern PACKAGE struct PotokBort  StructPotokBort,*PtrStructPotokBort;
extern PACKAGE unsigned short  int *BufIndexBufNPasp2;     // ����� � ���������   2010_05_20

//extern PACKAGE struct Ini       *PtrIni,*PtrIniOld;
#endif

