#ifndef FILECLASS
#define FILECLASS
#include<stdio.h>
typedef struct FileContext
{
  FILE *inputFile;
  FILE *outputFile_h264;
}FileContext;

int initFile(FileContext* pfileContext,char*inputFileName,char*outputFileName);
int closeFile(FileContext*pfileContext);
long getCurrentFilePos(FileContext* pfileContext);
int seekFile(FileContext* pfileContext,long size);
long getFileSize(FileContext* pfileContext);

//#define INPUTFILENAME "test1.flv"
//#define OUTPUTFILENAME "test1_h264.h264"
//
//#define INPUTFILENAME "7_397117_3120872662607124874_0_20160504_132002"
//#define OUTPUTFILENAME "test7_397.h264"

//#define INPUTFILENAME "0_396013_2630274337470818078_0_20160504_133714.flv"
//#define OUTPUTFILENAME "0_396013_2630274337470818078_0_20160504_133714.h264"

//#define INPUTFILENAME "0_397378_2340345400832303118_0_20160504_133434-h264.flv"
//#define OUTPUTFILENAME "0_397378_2340345400832303118_0_20160504_133434-h264.h264"

#define INPUTFILENAME "0_397100_2847319163264312513_0_20160504_132653.flv"
#define OUTPUTFILENAME "0_397100_2847319163264312513_0_20160504_132653.h264"
#endif
