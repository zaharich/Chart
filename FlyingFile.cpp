//---------------------------------------------------------------------------
#pragma hdrstop

#include "FlyingFile.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)

//==============================================================================
//   Instance()
//==============================================================================
FlyingFile& FlyingFile::Instance()
{
 static FlyingFile* f = new FlyingFile();
 return *f;
}

//==============================================================================
//    initFlyingFile
//==============================================================================
void FlyingFile::initFlyingFile(const String& pathToFlyingFile)
{
 // �������� �������� ������ �� ����� *.48��
 strData = fopen(pathToFlyingFile.c_str(), "rb");
 if(strData == NULL){
   ShowMessage("��������� ����� \"" + pathToFlyingFile + "\" �� ������� ��� ���������� ������� \n" +
               + "��������� ������������ ������������ ����� ��� ���������� � ������������");
   return;
 }

 // read structurs
 fread(&IndexBlocFileDatXX, sizeof(IndexBlocFileDatXX), 1, strData);
 kStructRazd = IndexBlocFileDatXX.KStructRazdel;
 kPasp = IndexBlocFileDatXX.KStructPaspChart;
 kStructRK = IndexBlocFileDatXX.KStructRKChart;

 PtrRazdel = new struct Razdel[kStructRazd];
 fread(PtrRazdel, sizeof(Razdel), kStructRazd, strData);

 PtrPaspChart = new struct PaspChart[kPasp];
 fread(PtrPaspChart, sizeof(PaspChart), kPasp, strData);

 PtrRKChart = new struct RKChart[kStructRK];
 fread(PtrRKChart, sizeof(RKChart), kStructRK, strData);

 // setTimes
 sourceMinTime = IndexBlocFileDatXX.TimeBegin;
 sourceMaxTime = IndexBlocFileDatXX.TimeEnd;
}

//==============================================================================
//   findPaspByIdent
//==============================================================================
int FlyingFile::findPaspByIdent(const String& ident)
{
 if(strData == NULL)
    return -1;
 int j = 0;
 while( strcmp((PtrPaspChart + j)->Ident, ident.c_str()) )
 {
    ++j;
    if(j >= kPasp)
    {
       ShowMessage("�������� " + ident + " �� ���������");
       return -1;
    }
 }
 return j;
}

//==============================================================================
//   findPaspRKByIdent
//==============================================================================
int FlyingFile::findPaspRKByIdent(const String& ident)
{
 if(strData == NULL)
    return -1;
 int r=0;              // � ��������_RK
 while( strcmp((PtrRKChart + r)->Ident, ident.c_str()) ){
    ++r;
    if(r >= kStructRK){
       ShowMessage("�������� RK" + (String)((PtrRKChart+r)->Ident) + " �� ���������");
       return -1;
    }
 }
 return r;
}

//==============================================================================
//   findNStructRKByIdentNRK
//==============================================================================
int FlyingFile::findNStructRKByIdentNRK(const String& ident, const int nRK)
{
 for(int i = 0; i < kStructRK; ++i)
    if(! strcmp( (PtrRKChart + i)->Ident, ident.c_str()))
       if( (PtrRKChart + i)->NRazRK == nRK)
          return i;

 ShowMessage("�������� RK " + ident + " �� ���������. (FF.fsrk)");
 return -1;
}





