#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_CCE9163799DAAFDF___C_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x7BD9750)
#define CLASS_1_CCE9163799DAAFDF___C_METHOD_1_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x7BD98F0)
#define CLASS_1_CCE9163799DAAFDF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7BD9700)
#define CLASS_1_CCE9163799DAAFDF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7BD9740)

inline static constexpr unsigned int Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex = 44446;

class Class_1_CCE9163799DAAFDF___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x2BE30);
	}
	static ::System::Action** StaticGet___9__0_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x2BE38);
	}
	static ::Class_1_CCE9163799DAAFDF___c** StaticGet___9()
	{
		return (::Class_1_CCE9163799DAAFDF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCE9163799DAAFDF___c_TypeDefinitionIndex)->GetStaticField(0x2BE40);
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
