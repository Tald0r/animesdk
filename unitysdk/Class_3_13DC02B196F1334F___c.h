#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_C109CA982236435D;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_13DC02B196F1334F___C_METHOD_1_954F290DB9DD86F9_OFFSET UNITYSDK_OFFSET(0xB551680)
#define CLASS_3_13DC02B196F1334F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB551630)
#define CLASS_3_13DC02B196F1334F___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB551670)

inline static constexpr unsigned int Class_3_13DC02B196F1334F___c_TypeDefinitionIndex = 61959;

class Class_3_13DC02B196F1334F___c : public ::System::Object
{
public:
	static ::Class_3_13DC02B196F1334F___c** StaticGet___9()
	{
		return (::Class_3_13DC02B196F1334F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_13DC02B196F1334F___c_TypeDefinitionIndex)->GetStaticField(0x32D30);
	}
	static ::System::Action_1<::Class_3_C109CA982236435D*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::Class_3_C109CA982236435D*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_13DC02B196F1334F___c_TypeDefinitionIndex)->GetStaticField(0x32D38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_954F290DB9DD86F9(::Class_3_C109CA982236435D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C109CA982236435D*))((::PBYTE)hIl2Cpp + CLASS_3_13DC02B196F1334F___C_METHOD_1_954F290DB9DD86F9_OFFSET))(this, a1);
	}
};
