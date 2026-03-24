#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_33122911FF826437_1___C_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x9D97F30)
#define CLASS_3_33122911FF826437_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D97EE0)
#define CLASS_3_33122911FF826437_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D97F20)

inline static constexpr unsigned int Class_3_33122911FF826437_1___c_TypeDefinitionIndex = 80381;

class Class_3_33122911FF826437_1___c : public ::System::Object
{
public:
	static ::Class_3_33122911FF826437_1___c** StaticGet___9()
	{
		return (::Class_3_33122911FF826437_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437_1___c_TypeDefinitionIndex)->GetStaticField(0x2F180);
	}
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_33122911FF826437_1___c_TypeDefinitionIndex)->GetStaticField(0x2F188);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_33122911FF826437_1___C_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}
};
