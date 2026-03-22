#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_8239634603F1F11A___C_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0xACA9690)
#define CLASS_1_8239634603F1F11A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xACA9640)
#define CLASS_1_8239634603F1F11A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xACA9680)

inline static constexpr unsigned int Class_1_8239634603F1F11A___c_TypeDefinitionIndex = 71310;

class Class_1_8239634603F1F11A___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__18_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8239634603F1F11A___c_TypeDefinitionIndex)->GetStaticField(0x31590);
	}
	static ::Class_1_8239634603F1F11A___c** StaticGet___9()
	{
		return (::Class_1_8239634603F1F11A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8239634603F1F11A___c_TypeDefinitionIndex)->GetStaticField(0x31598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8239634603F1F11A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8239634603F1F11A___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8239634603F1F11A___C_METHOD_1_659B881A8763C779_OFFSET))(this);
	}
};
