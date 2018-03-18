//---------------------------------------------------------------------------
/*     Class "Parametr"                                                     */
/*     Zakharchuk Andrew                                                    */
//---------------------------------------------------------------------------
#ifndef Parametr_H
#define Parametr_H
//---------------------------------------------------------------------------
#include <Series.hpp>
#include <list>
#include "FlyingFile.h"
/*
1) normalize name
*/

class Parametr
{
 protected:
   virtual void SetMinMaxAxis() = 0;   // ��������� ���, ����, ���������� ���   SetMinMaxIncrementAxis
   int CountOfSystem();                // ������� ���-�� ������ � ���������   CountSystem
   int ChoiseSistem();                 // ������ ������ �������               ChoiseSystem
   int FindPosition();                 // TODO - ������ ����� �� ���������    FindPosition

   struct PaspChart* tekPaspChart;     // ��������� �� ������� ������� ( � ��������� ��������� )
   TColor currentColor;                // ���������� ���� (���� ���� �������� ���������)

 public:
   TChartAxis *Axis;
   
   int paspNumber;                     // ����� ��������
   int systemNumber;                   // ����� �������
   int countSys;                       // ���������� ������

   int axisSizeInCell;                 // ������ ��� � �������� �����
   String afterComma;                  // ���-�o ������ ����� ������� � ���� ������ ���� "0.000"
   String markerSymbol;                // ������ �������

   // constructor and destructor
   virtual ~Parametr();
   Parametr(const int NumPasp, TChart* chart);
   Parametr(TChart* chart, int itemSeries);
   Parametr();

   // copy-constructor and assignment operation
   Parametr(const Parametr &P);
   const Parametr& operator = (const Parametr &P);

   virtual void LoadSeriesTitle() = 0;
   virtual void SaveSeriesTitle() = 0;

   void SetNSisInTitle(int ns);
   void DrawTitle(bool printing, int kzoom);

   void FullAxis();
   void SlimAxis();
   virtual void ShowInfo() = 0;

   virtual void SeriesAdd(const double, const double) = 0;
   virtual int GetSeriesWidth() = 0;
   virtual TCustomLineSeries* GetSeries() = 0;

   //static Parametr* findParBySeriesTitle(std::list<Parametr*> list, String& title);
   static Parametr* findParByAxisTitle(std::list<Parametr*> list, String& title);

   void visible(){Axis->Visible = true;};
   void invisible(){Axis->Visible = false;};

   //void LinkAxisToGrid(TChart* chart, TChartAxis* axis);
   //int GetNStructRK(int NumberRK, int max);
   virtual void typeInfo(){ShowMessage("Parametr");};
};

#endif Parametr_H
