#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_582;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_6BDBE7D29A09A0FC___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x124D7390)
#define CLASS_1_6BDBE7D29A09A0FC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x124D7340)
#define CLASS_1_6BDBE7D29A09A0FC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x124D7380)

inline static constexpr unsigned int Class_1_6BDBE7D29A09A0FC___c_TypeDefinitionIndex = 12572;

class Class_1_6BDBE7D29A09A0FC___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_582*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_582*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BDBE7D29A09A0FC___c_TypeDefinitionIndex)->GetStaticField(0x8DC0);
	}
	static ::Class_1_6BDBE7D29A09A0FC___c** StaticGet___9()
	{
		return (::Class_1_6BDBE7D29A09A0FC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BDBE7D29A09A0FC___c_TypeDefinitionIndex)->GetStaticField(0x8DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BDBE7D29A09A0FC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6BDBE7D29A09A0FC___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_582* a1, ::Class_2_208CC9941471731A_582* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_582*, ::Class_2_208CC9941471731A_582*))((::PBYTE)hIl2Cpp + CLASS_1_6BDBE7D29A09A0FC___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
