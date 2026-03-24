#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_275.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_431.h"

class Class_0_16E4307DCC419505_13;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FEB0042A043413D3_METHOD_2_3DD62C523982CE25_OFFSET UNITYSDK_OFFSET(0x17235350)
#define CLASS_2_FEB0042A043413D3_METHOD_2_977A5C8234F34C98_OFFSET UNITYSDK_OFFSET(0x17235340)
#define CLASS_2_FEB0042A043413D3_METHOD_2_AB7031FBF32F59B5_OFFSET UNITYSDK_OFFSET(0x17235360)
#define CLASS_2_FEB0042A043413D3__CTOR_OFFSET UNITYSDK_OFFSET(0x172352B0)

inline static constexpr unsigned int Class_2_FEB0042A043413D3_TypeDefinitionIndex = 14053;

class Class_2_FEB0042A043413D3 : public ::Class_1_5DA2E7556103D5A3_275
{
public:
	::System::Collections::Generic::List_1<::Class_2_FEB0042A043413D3*>* Field_2_0; // 0x80

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_431 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_431, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_FEB0042A043413D3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_FEB0042A043413D3*>* Method_2_977A5C8234F34C98()
	{
		return ((::System::Collections::Generic::List_1<::Class_2_FEB0042A043413D3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEB0042A043413D3_METHOD_2_977A5C8234F34C98_OFFSET))(this);
	}

	::System::Void Method_2_3DD62C523982CE25(::System::Collections::Generic::List_1<::Class_2_FEB0042A043413D3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_FEB0042A043413D3*>*))((::PBYTE)hIl2Cpp + CLASS_2_FEB0042A043413D3_METHOD_2_3DD62C523982CE25_OFFSET))(this, a1);
	}

	::System::Void Method_2_AB7031FBF32F59B5(::Class_2_FEB0042A043413D3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FEB0042A043413D3*))((::PBYTE)hIl2Cpp + CLASS_2_FEB0042A043413D3_METHOD_2_AB7031FBF32F59B5_OFFSET))(this, a1);
	}
};
