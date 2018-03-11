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


class Parametr
{
 protected:
        virtual void SetMinMaxAxis() = 0;   // ��������� ���, ����, ���������� ���
        int CountOfSystem();                // ������� ���-�� ������ � ���������
        int ChoiseSistem();                 // ������ ������ �������
        int FindPosition();                 // TODO - ������ ����� �� ���������

        struct PaspChart* tekPaspChart;     // ��������� �� ������� ������� ( � ��������� ��������� )
        TColor CurrentColor;                // ���������� ���� (���� ���� �������� ���������)

 public:
        TChartAxis *Axis;
        //TCustomLineSeries* Series;

        int NPasp;                          // ����� ��������
        int NSis;                           // ����� �������
        int KolSis;                         // ���������� ������
        int axisSizeInCell;                 // ������ ��� � �������� �����
        String afterComma;                  // ���-�o ������ ����� �������
        String markerSymbol;                // ������ �������
        String seriesTitle;                 // ������������� ��������� � ������������ �����

        // constructor and destructor
        virtual ~Parametr();
        Parametr(const int NumPasp, TChart* chart);
        Parametr(TChart* chart, int itemSeries);
        Parametr();

        // copy-constructor and assignment operation
        Parametr(const Parametr &P);
        const Parametr& operator = (const Parametr &P);

        void SetNSisInTitle(int ns);
        void DrawTitle(bool printing, int kzoom);

        void fullAxis();
        void slimAxis();

        // virtual methods
        virtual void LoadSeriesTitle() = 0;
        virtual void SaveSeriesTitle() = 0;
        virtual void showInfo() = 0;
        virtual void SeriesAdd(const double, const double) = 0;
        virtual bool GetTagSeries() = 0;
        virtual String GetSeriesTitle() = 0;
        virtual int GetSeriesWidth() = 0;
        virtual TCustomLineSeries* GetSeries() = 0;
        virtual void typeInfo(){ShowMessage("Parametr");};

        //static Parametr* findParBySeriesTitle(std::list<Parametr*> list, String& title);
        static Parametr* findParByAxisTitle(std::list<Parametr*> list, String& title);

        void visible(){Axis->Visible = true;};
        void invisible(){Axis->Visible = false;};

        //void LinkAxisToGrid(TChart* chart, TChartAxis* axis);
        //int GetNStructRK(int NumberRK, int max);
};

#endif Parametr_H
