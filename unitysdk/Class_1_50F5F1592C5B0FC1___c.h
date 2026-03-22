#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Track; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_50F5F1592C5B0FC1___C_METHOD_1_BB633695C314408C_OFFSET UNITYSDK_OFFSET(0x64CF9E0)
#define CLASS_1_50F5F1592C5B0FC1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x64CF990)
#define CLASS_1_50F5F1592C5B0FC1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x64CF9D0)

inline static constexpr unsigned int Class_1_50F5F1592C5B0FC1___c_TypeDefinitionIndex = 68636;

class Class_1_50F5F1592C5B0FC1___c : public ::System::Object
{
public:
	static ::System::Func_2<::MoleMole::Track*, ::System::Int32>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::MoleMole::Track*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_50F5F1592C5B0FC1___c_TypeDefinitionIndex)->GetStaticField(0x379C0);
	}
	static ::Class_1_50F5F1592C5B0FC1___c** StaticGet___9()
	{
		return (::Class_1_50F5F1592C5B0FC1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_50F5F1592C5B0FC1___c_TypeDefinitionIndex)->GetStaticField(0x379C8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_50F5F1592C5B0FC1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50F5F1592C5B0FC1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BB633695C314408C(::MoleMole::Track* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Track*))((::PBYTE)hIl2Cpp + CLASS_1_50F5F1592C5B0FC1___C_METHOD_1_BB633695C314408C_OFFSET))(this, a1);
	}
};
