#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_461;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET UNITYSDK_OFFSET(0xA88F140)
#define CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA88F0F0)
#define CLASS_2_827F04912CAF4936___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA88F130)

inline static constexpr unsigned int Class_2_827F04912CAF4936___c_TypeDefinitionIndex = 47111;

class Class_2_827F04912CAF4936___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_461*>** StaticGet___9__10_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_461*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x2CE50);
	}
	static ::Class_2_827F04912CAF4936___c** StaticGet___9()
	{
		return (::Class_2_827F04912CAF4936___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_827F04912CAF4936___c_TypeDefinitionIndex)->GetStaticField(0x2CE58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_CD1020B1B659233E(::Class_2_208CC9941471731A_461* a1, ::Class_2_208CC9941471731A_461* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_461*, ::Class_2_208CC9941471731A_461*))((::PBYTE)hIl2Cpp + CLASS_2_827F04912CAF4936___C_METHOD_1_CD1020B1B659233E_OFFSET))(this, a1, a2);
	}
};
