#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_739;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_DEB44EC66060DDE5___C_METHOD_1_6BDE84DE490D736B_OFFSET UNITYSDK_OFFSET(0x12F88F40)
#define CLASS_1_DEB44EC66060DDE5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12F88EF0)
#define CLASS_1_DEB44EC66060DDE5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12F88F30)

inline static constexpr unsigned int Class_1_DEB44EC66060DDE5___c_TypeDefinitionIndex = 14989;

class Class_1_DEB44EC66060DDE5___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_2_208CC9941471731A_739*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::Class_2_208CC9941471731A_739*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEB44EC66060DDE5___c_TypeDefinitionIndex)->GetStaticField(0x8D20);
	}
	static ::Class_1_DEB44EC66060DDE5___c** StaticGet___9()
	{
		return (::Class_1_DEB44EC66060DDE5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DEB44EC66060DDE5___c_TypeDefinitionIndex)->GetStaticField(0x8D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DEB44EC66060DDE5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEB44EC66060DDE5___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_6BDE84DE490D736B(::Class_2_208CC9941471731A_739* a1, ::Class_2_208CC9941471731A_739* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_739*, ::Class_2_208CC9941471731A_739*))((::PBYTE)hIl2Cpp + CLASS_1_DEB44EC66060DDE5___C_METHOD_1_6BDE84DE490D736B_OFFSET))(this, a1, a2);
	}
};
