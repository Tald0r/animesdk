#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_832;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0xB87BC50)
#define CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB87BC00)
#define CLASS_2_827F04912CAF4936___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB87BC40)

inline static constexpr unsigned int Class_2_827F04912CAF4936___c_TypeDefinitionIndex = 54905;

class Class_2_827F04912CAF4936___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_832*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_832*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x35B60);
	}
	static ::Class_2_827F04912CAF4936___c** StaticGet___9()
	{
		return (::Class_2_827F04912CAF4936___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x35B68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_832* a1, ::Class_2_208CC9941471731A_832* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_832*, ::Class_2_208CC9941471731A_832*))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
