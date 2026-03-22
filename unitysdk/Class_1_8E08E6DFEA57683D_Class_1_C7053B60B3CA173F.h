#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NewConfigUICommon; }
namespace System { class Action; }

#define CLASS_1_8E08E6DFEA57683D_CLASS_1_C7053B60B3CA173F_METHOD_1_FD19510E37590296_OFFSET UNITYSDK_OFFSET(0x6B31DE0)
#define CLASS_1_8E08E6DFEA57683D_CLASS_1_C7053B60B3CA173F__CTOR_OFFSET UNITYSDK_OFFSET(0x6B31DD0)

inline static constexpr unsigned int Class_1_8E08E6DFEA57683D_Class_1_C7053B60B3CA173F_TypeDefinitionIndex = 78740;

class Class_1_8E08E6DFEA57683D_Class_1_C7053B60B3CA173F : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_CLASS_1_C7053B60B3CA173F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FD19510E37590296(::MoleMole::NewConfigUICommon* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::NewConfigUICommon*))((::PBYTE)hIl2Cpp + CLASS_1_8E08E6DFEA57683D_CLASS_1_C7053B60B3CA173F_METHOD_1_FD19510E37590296_OFFSET))(this, a1);
	}
};
