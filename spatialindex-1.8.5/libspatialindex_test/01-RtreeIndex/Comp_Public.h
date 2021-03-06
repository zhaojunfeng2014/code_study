#pragma once
#pragma once

#include <string>
#include <time.h>
using namespace std;

#include <Windows.h>
#include <Psapi.h>
#pragma comment(lib,"Psapi.lib")

const int g_iQueryTimes = 100;

const string g_strDataDir = "F:\\Data\\libspatialindex_test_data\\data\\";
const string g_strDataset = "JT_L_Project";

const string g_strSpaWorkDir = "F:\\Data\\libspatialindex_test_data\\temp\\Spatial\\";
const string g_strAttWorkDir = "F:\\Data\\libspatialindex_test_data\\temp\\Attrib\\";

const string g_strSpaLog = "F:\\Data\\libspatialindex_test_data\\temp\\Spatial\\timer.csv";
const string g_strAttLog = "F:\\Data\\libspatialindex_test_data\\temp\\Attrib\\timer.csv";

extern FILE*    g_pLog_Spa;
extern FILE*    g_pLog_Att;

// 数据包括如下字段
// INT唯一值字段：FEATUREID
// INT枚举字段：TYPE
// DBL数值字段：LENGTH
// STR枚举字段：CODE
const string g_strField_FeatureID = "FEATUREID";
const string g_strField_Type = "TYPE";
const string g_strField_Length = "LENGTH";
const string g_strField_Code = "CODE";

//const double g_x_min = 465701.923;
//const double g_x_max = 469994.306;
//const double g_y_min = 3852567.173;
//const double g_y_max = 3855717.229;

const double g_x_min = 11403218.82;
const double g_x_max = 11423218.82;
const double g_y_min = 2850847.015;
const double g_y_max = 2900847.015;

string getCurTime();

