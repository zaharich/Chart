
#include "ShablonStruct.h"                  // ������� 2014_01_13
#ifndef ChartH                              // ������� 2013_07_15
#define ChartH                              // ������� 2013_07_15

//static unsigned int IndexOutChart,NumberFull32;
// char BufGif[sizeof(struct Gif) * 3600 * 24];
// if(IndexOutChart > 0x7fffffff) { NumberFull32++;  IndexOutChart = IndexOutChart  - 0x7fffffff;}
 struct GlobalFlagChart                 // ������� 2013_07_15
 {
 bool RashetLibrary;   // = false ���������� ��������� ���������� ���������
                       // = true                 -"-              ����������
 char NameDllRashetLibrary[1024];               // ���� � ���������� ��������� ����������
 int KParamRashDllOut;                          // ���-�� ���������� ��������� (�� ������������)
 struct DllParRashet *PtrStructDllOut;
 char RashetParPathCompiler[1024];                           // ���� � ����������� ��� ��������� ����������
 char RashetUserLib[1024];                      // ���� � ���������� ��� �������� ��������� ��������� ����������
 char NameFileRashetTxt[1024];                  // ���� � ���������� ����� ��������� ����������  .txt
 char rezerv[1015];
 };

 struct DllParRashet
 {
    char name[16];                    // ������������� ���������� ���������
    void *adres;
    char name1[16];                   // ������������� �������� ���������
    //int ngr;
    char tip;
    char name2[64];                   // ������������ ���������
    void *adrespaspopornpar;              // 2013_05_06    ����� �������� �������� ���������
    void *adrespaspraspar;                // 2013_05_06    ����� �������� ���������� ���������
    char rezerv[148];
 };

extern PACKAGE struct PaspChart *PtrPaspChart;  // ������� 2013_07_15
extern PACKAGE struct IndexBlocFileDatXX IndexBlocFileDatXX; // ������� 2013_07)15
extern PACKAGE struct GlobalFlagChart *PtrGlobalFlagChart;  // ������� 2013_07_15
extern PACKAGE struct Chart_Ini Chart_Ini; //  2013_10_11
extern PACKAGE struct RKChart *PtrRKChart; //  2013_10_11
extern PACKAGE struct ParamXX *PtrParamXX; //  2013_10_11
extern PACKAGE struct TimXX TimXX;         //  2013_10_11
extern PACKAGE struct Global Global;
extern PACKAGE struct Razdel *PtrRazdel;   // 2014_01_
#endif       // ������� 2013_07_15

