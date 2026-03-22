#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_365;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_4A9F1B5E6F0A47BA___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x16B0FC00)
#define CLASS_1_4A9F1B5E6F0A47BA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B0FBB0)
#define CLASS_1_4A9F1B5E6F0A47BA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B0FBF0)

inline static constexpr unsigned int Class_1_4A9F1B5E6F0A47BA___c_TypeDefinitionIndex = 11373;

class Class_1_4A9F1B5E6F0A47BA___c : public ::System::Object
{
public:
	static ::Class_1_4A9F1B5E6F0A47BA___c** StaticGet___9()
	{
		return (::Class_1_4A9F1B5E6F0A47BA___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A9F1B5E6F0A47BA___c_TypeDefinitionIndex)->GetStaticField(0x8E60);
	}
	static ::System::Comparison_1<::Class_2_208CC9941471731A_365*>** StaticGet___9__20_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_365*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A9F1B5E6F0A47BA___c_TypeDefinitionIndex)->GetStaticField(0x8E68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A9F1B5E6F0A47BA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A9F1B5E6F0A47BA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_365* a1, ::Class_2_208CC9941471731A_365* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_365*, ::Class_2_208CC9941471731A_365*))((::PBYTE)hIl2Cpp + CLASS_1_4A9F1B5E6F0A47BA___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
