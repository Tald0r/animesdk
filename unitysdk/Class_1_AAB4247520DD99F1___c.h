#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_833;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_AAB4247520DD99F1___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0x19A6D940)
#define CLASS_1_AAB4247520DD99F1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A6D8F0)
#define CLASS_1_AAB4247520DD99F1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19A6D930)

inline static constexpr unsigned int Class_1_AAB4247520DD99F1___c_TypeDefinitionIndex = 14621;

class Class_1_AAB4247520DD99F1___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_833*>** StaticGet___9__17_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_833*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAB4247520DD99F1___c_TypeDefinitionIndex)->GetStaticField(0x8C70);
	}
	static ::Class_1_AAB4247520DD99F1___c** StaticGet___9()
	{
		return (::Class_1_AAB4247520DD99F1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AAB4247520DD99F1___c_TypeDefinitionIndex)->GetStaticField(0x8C78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AAB4247520DD99F1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AAB4247520DD99F1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_833* a1, ::Class_2_208CC9941471731A_833* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_833*, ::Class_2_208CC9941471731A_833*))((::PBYTE)hIl2Cpp + CLASS_1_AAB4247520DD99F1___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
