#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_A3738A8A49C27CD6_METHOD_2_AA5D0601B1B7385A_OFFSET UNITYSDK_OFFSET(0x7748810)
#define CLASS_2_A3738A8A49C27CD6_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x77486D0)
#define CLASS_2_A3738A8A49C27CD6__CTOR_OFFSET UNITYSDK_OFFSET(0x7748790)

inline static constexpr unsigned int Class_2_A3738A8A49C27CD6_TypeDefinitionIndex = 77848;

class Class_2_A3738A8A49C27CD6 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_1; // 0x60
	::Class_0_16E4307DCC419505_103<::System::String*>* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3738A8A49C27CD6__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3738A8A49C27CD6_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_AA5D0601B1B7385A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A3738A8A49C27CD6_METHOD_2_AA5D0601B1B7385A_OFFSET))(this, a1, a2);
	}
};
