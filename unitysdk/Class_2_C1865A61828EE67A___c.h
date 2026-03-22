#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_884;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0xBD9A950)
#define CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBD9A900)
#define CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9A940)

inline static constexpr unsigned int Class_2_C1865A61828EE67A___c_TypeDefinitionIndex = 64181;

class Class_2_C1865A61828EE67A___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_884*>** StaticGet___9__24_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_884*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x2F040);
	}
	static ::Class_2_C1865A61828EE67A___c** StaticGet___9()
	{
		return (::Class_2_C1865A61828EE67A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_C1865A61828EE67A___c_TypeDefinitionIndex)->GetStaticField(0x2F048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_884* a1, ::Class_2_208CC9941471731A_884* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_884*, ::Class_2_208CC9941471731A_884*))((::PBYTE)hIl2Cpp + CLASS_2_C1865A61828EE67A___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
