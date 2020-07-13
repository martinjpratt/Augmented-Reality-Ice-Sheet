#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen-metadata.h"





IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// 0x00000001 T[0...,0...] Accord.Math.Matrix::Get(T[0...,0...],System.Int32[],System.Int32[],T[0...,0...])
// 0x00000002 T[0...,0...] Accord.Math.Matrix::get(T[0...,0...],T[0...,0...],System.Int32[],System.Int32[])
// 0x00000003 T[0...,0...] Accord.Math.Matrix::Zeros(System.Int32,System.Int32)
// 0x00000004 System.Double[0...,0...] Accord.Math.Matrix::Zeros(System.Int32,System.Int32)
extern void Matrix_Zeros_mF5A706FAE91962C8717859D722FA7FFC89F70DC0 ();
// 0x00000005 System.Tuple`2<T[0...,0...],T[0...,0...]> Accord.Math.Matrix::MeshGrid(T[],T[])
static Il2CppMethodPointer s_methodPointers[5] = 
{
	NULL,
	NULL,
	NULL,
	Matrix_Zeros_mF5A706FAE91962C8717859D722FA7FFC89F70DC0,
	NULL,
};
static const int32_t s_InvokerIndices[5] = 
{
	-1,
	-1,
	-1,
	265,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[4] = 
{
	{ 0x06000001, { 0, 1 } },
	{ 0x06000002, { 1, 1 } },
	{ 0x06000003, { 2, 1 } },
	{ 0x06000005, { 3, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[5] = 
{
	{ (Il2CppRGCTXDataType)3, 30804 },
	{ (Il2CppRGCTXDataType)2, 30474 },
	{ (Il2CppRGCTXDataType)2, 30476 },
	{ (Il2CppRGCTXDataType)2, 30481 },
	{ (Il2CppRGCTXDataType)3, 30805 },
};
extern const Il2CppCodeGenModule g_Accord_MathCodeGenModule;
const Il2CppCodeGenModule g_Accord_MathCodeGenModule = 
{
	"Accord.Math.dll",
	5,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	4,
	s_rgctxIndices,
	5,
	s_rgctxValues,
	NULL,
};
