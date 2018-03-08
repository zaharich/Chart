//---------------------------------------------------------------------------

#ifndef FileClassRashetParamH
#define FileClassRashetParamH
#define COMPILER_R  ":\\MinimaxWin_������_48FM\\Chart\\����������_����_���"
#define DLL_R  ":\\MinimaxWin_������_48FM\\Chart\\DLL"                            // ���� � �������������� �������  ��� ��������� ������������ ���������� ��������� ����������  
//---------------------------------------------------------------------------
class ClassRashetParam
{
public:
//      ClassRashetParam(char *);
      ClassRashetParam(String);
      ~ClassRashetParam();
private:
fun1(void);                 // ������ ���������� ����� � ��������� �����������
fun2(void);                 // ������������ ����������� ����� DLL.cpp
fun3(void);                 // ����������, ����������,�������� ����� .DLL
bool FunExit(bool);         //
//fun4(void);                 // �������� ����� .DLL
TStringList *TextFile;      // ��������� ���� � ��������� �����������
TStringList *OutIdent;      // ������ ��������(���������) ���������������
TStringList *InpIdent;      // ������ �������( �� ���������) ���������������
TStringList *FunOut;        // ������ ��������(���������) ������� InitAdresAPIOut
TStringList *FunInp;        // ������ ������� ������� InitAdresAPIInp
TStringList *FunUser;       // ������ ��������� ProcUser
String NameFileTxt;         // ��� ���������� ����� � ��������� �����������
String NameFileDLLCpp;      // ��� ��������� �����������  ����� ���������� � ��������� �����������
TStringList *CompilerCfg;     // ���������� ���������  ���������� bcc32.cfg
TStringList *LinkerCfg;       // ���������� ��������� ������������ ilink32.cfg
TStringList *BatFile;         // �������� ���� rashet.bat
STARTUPINFO StartUpInfo;
PROCESS_INFORMATION lpProcessInformation;
SECURITY_ATTRIBUTES ProcessAtr,TheardAtr;
};
extern PACKAGE ClassRashetParam *PtrClassRashetParam;
#endif
