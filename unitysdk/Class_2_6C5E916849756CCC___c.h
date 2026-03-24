#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E21E2F8DEAA5F4C_6;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6C5E916849756CCC___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0xCE69750)
#define CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0xCE69790)
#define CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE69700)
#define CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCE69740)

inline static constexpr unsigned int Class_2_6C5E916849756CCC___c_TypeDefinitionIndex = 59027;

class Class_2_6C5E916849756CCC___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_7E21E2F8DEAA5F4C_6*>** StaticGet___9__15_9()
	{
		return (::System::Action_1<::Class_3_7E21E2F8DEAA5F4C_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x43650);
	}
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_7()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x43658);
	}
	static ::Class_2_6C5E916849756CCC___c** StaticGet___9()
	{
		return (::Class_2_6C5E916849756CCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x43660);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_1_7FE3EA8542ED97C3()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_7FE3EA8542ED97C3_OFFSET))(this);
	}

	::System::Void Method_1_A0042105686D97E8(::Class_3_7E21E2F8DEAA5F4C_6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7E21E2F8DEAA5F4C_6*))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}
};
