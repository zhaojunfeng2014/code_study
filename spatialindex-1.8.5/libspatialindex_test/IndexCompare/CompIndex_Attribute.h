#pragma once

#include "Comp_Public.h"

// 输出统计表
// 时间,方法,模式,字段,类型,查询条件,创建索引,插入数据,内存占用,查询数据,查询数量

//////////////////////////////////////////////////////////////////////////
// FastDB
void TestFastDB_1();    // 内存模式:创建索引+插入数据+查询数据
void TestFastDB_2();    // 内存模式:插入数据+创建索引+查询数据
void TestFastDB_3();    // 硬盘模式:创建索引+插入数据+查询数据
void TestFastDB_4();    // 硬盘模式:插入数据+创建索引+查询数据
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// Sqlite
void TestSqlite_1();    // 内存模式:创建索引+插入数据+查询数据
void TestSqlite_2();    // 内存模式:插入数据+创建索引+查询数据
void TestSqlite_3();    // 硬盘模式:创建索引+插入数据+查询数据
void TestSqlite_4();    // 硬盘模式:插入数据+创建索引+查询数据
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// EWAH
void TestEWAH_1();      // 内存模式:创建索引+插入数据+查询数据
void TestEWAH_2();      // 内存模式:插入数据+创建索引+查询数据
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// FastBit
void TestFastBit_1();   // 内存模式:创建索引+插入数据+查询数据
void TestFastBit_2();   // 内存模式:插入数据+创建索引+查询数据
//////////////////////////////////////////////////////////////////////////
