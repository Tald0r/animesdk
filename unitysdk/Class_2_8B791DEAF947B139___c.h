#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_151;
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine::Events { class UnityAction; }

#define CLASS_2_8B791DEAF947B139___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x998F320)
#define CLASS_2_8B791DEAF947B139___C_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x998F290)
#define CLASS_2_8B791DEAF947B139___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x998F240)
#define CLASS_2_8B791DEAF947B139___C__CTOR_OFFSET UNITYSDK_OFFSET(0x998F280)

inline static constexpr unsigned int Class_2_8B791DEAF947B139___c_TypeDefinitionIndex = 71656;

class Class_2_8B791DEAF947B139___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__17_2()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B791DEAF947B139___c_TypeDefinitionIndex)->GetStaticField(0x40AB0);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_151*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_151*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B791DEAF947B139___c_TypeDefinitionIndex)->GetStaticField(0x40AB8);
	}
	static ::Class_2_8B791DEAF947B139___c** StaticGet___9()
	{
		return (::Class_2_8B791DEAF947B139___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8B791DEAF947B139___c_TypeDefinitionIndex)->GetStaticField(0x40AC0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8B791DEAF947B139___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B791DEAF947B139___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B791DEAF947B139___C_METHOD_1_F8C7231308CD2C82_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_151* a1, ::Class_2_208CC9941471731A_151* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_151*, ::Class_2_208CC9941471731A_151*))((::PBYTE)hIl2Cpp + CLASS_2_8B791DEAF947B139___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
