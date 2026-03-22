#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_88D140F5E09465E1_13;
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_6C5E916849756CCC___C_METHOD_1_7FE3EA8542ED97C3_OFFSET UNITYSDK_OFFSET(0x9099FC0)
#define CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x909A000)
#define CLASS_2_6C5E916849756CCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9099F70)
#define CLASS_2_6C5E916849756CCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9099FB0)

inline static constexpr unsigned int Class_2_6C5E916849756CCC___c_TypeDefinitionIndex = 71884;

class Class_2_6C5E916849756CCC___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::UIControllerContextBase*>** StaticGet___9__15_7()
	{
		return (::System::Func_1<::MoleMole::UIControllerContextBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x40A30);
	}
	static ::Class_2_6C5E916849756CCC___c** StaticGet___9()
	{
		return (::Class_2_6C5E916849756CCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x40A38);
	}
	static ::System::Action_1<::Class_3_88D140F5E09465E1_13*>** StaticGet___9__15_9()
	{
		return (::System::Action_1<::Class_3_88D140F5E09465E1_13*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_6C5E916849756CCC___c_TypeDefinitionIndex)->GetStaticField(0x40A40);
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

	::System::Void Method_1_A0042105686D97E8(::Class_3_88D140F5E09465E1_13* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_88D140F5E09465E1_13*))((::PBYTE)hIl2Cpp + CLASS_2_6C5E916849756CCC___C_METHOD_1_A0042105686D97E8_OFFSET))(this, a1);
	}
};
