//---------------------------------------------------------------------------

#ifndef CustomChartH
#define CustomChartH
#include "Chart.hpp"
#include "Series.hpp"
//#include "Singleton.h"
//---------------------------------------------------------------------------
class CustomChart
{
  private:
    TChart* chart;
    TFastLineSeries* Series1;

    static const int MAXCOUNTSERIES;
    static const double LEFTAXISLENGHT;
    static const double SEC;

    bool SelectAxis, Mouse_Down, UpHalfAxis; // ����� - ��� �������, ������ �� ���, ������� ������� ����� ���
    bool printing, building;                 // ����� - � ������ ������ ���� ������

    int countMainVertLine;
    int countMainHorizLine;
    int heightGridCell;
    float procentHeightCell;

    int X0, Y0;
    int stretch;
    int SourceMinTime, SourceMaxTime;
    double CutX0, CutX1;
    double AxisMin, AxisMax, AxisIncrement;

  public:
    CustomChart(TScrollBox* container);
    ~CustomChart();

    void setSourceTime(int start, int end){SourceMinTime = start; SourceMaxTime = end;}
    void chartInit();
    void loadEdit();
    void saveEdit();
    TChart* getChart(){return chart;};
    void openChartFromFile(const String& teeName);
};
#endif
