#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F97B015544BE936B;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_3_E20366D1301D6555___C_METHOD_1_27EEF2365AEB96A1_OFFSET UNITYSDK_OFFSET(0x6FA03B0)
#define CLASS_3_E20366D1301D6555___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x6FA0390)
#define CLASS_3_E20366D1301D6555___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6FA0340)
#define CLASS_3_E20366D1301D6555___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6FA0380)

inline static constexpr unsigned int Class_3_E20366D1301D6555___c_TypeDefinitionIndex = 77182;

class Class_3_E20366D1301D6555___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_F97B015544BE936B*>** StaticGet___9__21_0()
	{
		return (::System::Action_1<::Class_3_F97B015544BE936B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555___c_TypeDefinitionIndex)->GetStaticField(0x3A0B0);
	}
	static ::System::Comparison_1<::System::Int32>** StaticGet___9__44_0()
	{
		return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555___c_TypeDefinitionIndex)->GetStaticField(0x3A0B8);
	}
	static ::Class_3_E20366D1301D6555___c** StaticGet___9()
	{
		return (::Class_3_E20366D1301D6555___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E20366D1301D6555___c_TypeDefinitionIndex)->GetStaticField(0x3A0C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_27EEF2365AEB96A1(::Class_3_F97B015544BE936B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_E20366D1301D6555___C_METHOD_1_27EEF2365AEB96A1_OFFSET))(this, a1);
	}
};
