#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x920E360)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_7EDBC63FC2BC53F4_OFFSET UNITYSDK_OFFSET(0x920E540)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_A3054DCC506427D8_OFFSET UNITYSDK_OFFSET(0x920D980)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x920E100)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x920DE80)
#define CLASS_1_B2439456A8F10441_1_METHOD_1_E3B592547FB706FD_OFFSET UNITYSDK_OFFSET(0x920E600)
#define CLASS_1_B2439456A8F10441_1__CTOR_OFFSET UNITYSDK_OFFSET(0x920D970)

inline static constexpr unsigned int Class_1_B2439456A8F10441_1_TypeDefinitionIndex = 43625;

class Class_1_B2439456A8F10441_1 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::MoleMole::EntityHandle Field_1_5; // 0x20
	::System::String* Field_1_3; // 0x30
	::System::Boolean Field_1_2; // 0x38
	::System::Boolean Field_1_4; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A3054DCC506427D8(::System::String* a1, ::System::Action_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_A3054DCC506427D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_1_7EDBC63FC2BC53F4(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_7EDBC63FC2BC53F4_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3B592547FB706FD(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_B2439456A8F10441_1_METHOD_1_E3B592547FB706FD_OFFSET))(this, a1);
	}
};
