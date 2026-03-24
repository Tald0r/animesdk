#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_929E686C2F593C85;
namespace Foundation { template <typename T1, typename T2> class PriorityQueue_2; }

#define CLASS_1_7127353CA91AF50A_METHOD_1_3CCC1D7A8995A714_OFFSET UNITYSDK_OFFSET(0x1A0D39F0)
#define CLASS_1_7127353CA91AF50A_METHOD_1_41724A87C3C0A9AC_OFFSET UNITYSDK_OFFSET(0x1A0D46F0)
#define CLASS_1_7127353CA91AF50A_METHOD_1_42073E1316C51A78_OFFSET UNITYSDK_OFFSET(0x1A0D38C0)
#define CLASS_1_7127353CA91AF50A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1A0D3D10)
#define CLASS_1_7127353CA91AF50A__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0CF970)

inline static constexpr unsigned int Class_1_7127353CA91AF50A_TypeDefinitionIndex = 31806;

class Class_1_7127353CA91AF50A : public ::System::Object
{
public:
	::Foundation::PriorityQueue_2<::Class_1_929E686C2F593C85*, ::Class_1_929E686C2F593C85*>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_42073E1316C51A78(::Class_1_929E686C2F593C85*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_929E686C2F593C85*&))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_42073E1316C51A78_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CCC1D7A8995A714(::Class_1_929E686C2F593C85* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_929E686C2F593C85*))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_3CCC1D7A8995A714_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_41724A87C3C0A9AC(::System::Int64 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7127353CA91AF50A_METHOD_1_41724A87C3C0A9AC_OFFSET))(this, a1, a2);
	}
};
