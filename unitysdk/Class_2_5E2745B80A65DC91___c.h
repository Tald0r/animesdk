#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_5E2745B80A65DC91___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x9978620)
#define CLASS_2_5E2745B80A65DC91___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99785D0)
#define CLASS_2_5E2745B80A65DC91___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9978610)

inline static constexpr unsigned int Class_2_5E2745B80A65DC91___c_TypeDefinitionIndex = 75325;

class Class_2_5E2745B80A65DC91___c : public ::System::Object
{
public:
	static ::Class_2_5E2745B80A65DC91___c** StaticGet___9()
	{
		return (::Class_2_5E2745B80A65DC91___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E2745B80A65DC91___c_TypeDefinitionIndex)->GetStaticField(0x29EE0);
	}
	static ::System::Func_2<::System::Int32, ::System::UInt32>** StaticGet___9__9_2()
	{
		return (::System::Func_2<::System::Int32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5E2745B80A65DC91___c_TypeDefinitionIndex)->GetStaticField(0x29EE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5E2745B80A65DC91___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E2745B80A65DC91___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_F36ECC94BB21B573(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E2745B80A65DC91___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
