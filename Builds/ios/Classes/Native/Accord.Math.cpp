#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Double[0...,0...]
struct DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B;

IL2CPP_EXTERN_C const RuntimeMethod* Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Matrix_Zeros_mF5A706FAE91962C8717859D722FA7FFC89F70DC0_MetadataUsageId;

struct DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6FA868DA1A382AC0169C0AD11BE479BA1AE6934B 
{
public:

public:
};


// System.Object


// Accord.Math.Matrix
struct  Matrix_tDB45CD107680C705AA000C8AB1D1F5A03F6D0B17  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[0...,0...]
struct DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};


// T[0...,0...] Accord.Math.Matrix::Zeros<System.Double>(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B* Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72_gshared (int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method);

// T[0...,0...] Accord.Math.Matrix::Zeros<System.Double>(System.Int32,System.Int32)
inline DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B* Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72 (int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	return ((  DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B* (*) (int32_t, int32_t, const RuntimeMethod*))Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72_gshared)(___rows0, ___columns1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double[0...,0...] Accord.Math.Matrix::Zeros(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B* Matrix_Zeros_mF5A706FAE91962C8717859D722FA7FFC89F70DC0 (int32_t ___rows0, int32_t ___columns1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Matrix_Zeros_mF5A706FAE91962C8717859D722FA7FFC89F70DC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___rows0;
		int32_t L_1 = ___columns1;
		DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B* L_2 = Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72(L_0, L_1, /*hidden argument*/Matrix_Zeros_TisDouble_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_m047040205B1BCC5E05C63A82C538611BC49C9E72_RuntimeMethod_var);
		return (DoubleU5B0___U2C0___U5D_t187F7DC380206D76E8798DE07A1B3F268B35A56B*)L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
