#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6E8DD3EAC12A67_19;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_7BDDEFF879F2DF9B___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x8E99000)
#define CLASS_2_7BDDEFF879F2DF9B___C_METHOD_1_FAE80B52D2DEE3ED_OFFSET UNITYSDK_OFFSET(0x8E98FC0)
#define CLASS_2_7BDDEFF879F2DF9B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E98F70)
#define CLASS_2_7BDDEFF879F2DF9B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8E98FB0)

inline static constexpr unsigned int Class_2_7BDDEFF879F2DF9B___c_TypeDefinitionIndex = 53043;

class Class_2_7BDDEFF879F2DF9B___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__20_1()
	{
		return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7BDDEFF879F2DF9B___c_TypeDefinitionIndex)->GetStaticField(0x388D0);
	}
	static ::System::Action_1<::Class_3_7E6E8DD3EAC12A67_19*>** StaticGet___9__16_1()
	{
		return (::System::Action_1<::Class_3_7E6E8DD3EAC12A67_19*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7BDDEFF879F2DF9B___c_TypeDefinitionIndex)->GetStaticField(0x388D8);
	}
	static ::Class_2_7BDDEFF879F2DF9B___c** StaticGet___9()
	{
		return (::Class_2_7BDDEFF879F2DF9B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_7BDDEFF879F2DF9B___c_TypeDefinitionIndex)->GetStaticField(0x388E0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7BDDEFF879F2DF9B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BDDEFF879F2DF9B___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_FAE80B52D2DEE3ED(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7BDDEFF879F2DF9B___C_METHOD_1_FAE80B52D2DEE3ED_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_7E6E8DD3EAC12A67_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_19*))((::PBYTE)hIl2Cpp + CLASS_2_7BDDEFF879F2DF9B___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}
};
