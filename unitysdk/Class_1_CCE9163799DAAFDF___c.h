#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_CCE9163799DAAFDF___C_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x8DD7CF0)
#define CLASS_1_CCE9163799DAAFDF___C_METHOD_1_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x8DD7E80)
#define CLASS_1_CCE9163799DAAFDF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD7CA0)
#define CLASS_1_CCE9163799DAAFDF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD7CE0)

inline static constexpr unsigned int Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex = 43369;

class Class_1_CCE9163799DAAFDF___c : public ::System::Object
{
public:
	static ::Class_1_CCE9163799DAAFDF___c** StaticGet___9()
	{
		return (::Class_1_CCE9163799DAAFDF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x35950);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x35958);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x35960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF___C_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCE9163799DAAFDF___C_METHOD_1_EC00644AF39B5DED_OFFSET))(this);
	}
};
