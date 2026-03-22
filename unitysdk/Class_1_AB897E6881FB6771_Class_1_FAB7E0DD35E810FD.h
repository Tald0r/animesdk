#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigBuddyUISetting; }
namespace System { class Action; }

#define CLASS_1_AB897E6881FB6771_CLASS_1_FAB7E0DD35E810FD_METHOD_1_0E67E6468CC6FE66_OFFSET UNITYSDK_OFFSET(0x9103E60)
#define CLASS_1_AB897E6881FB6771_CLASS_1_FAB7E0DD35E810FD__CTOR_OFFSET UNITYSDK_OFFSET(0x9103E50)

inline static constexpr unsigned int Class_1_AB897E6881FB6771_Class_1_FAB7E0DD35E810FD_TypeDefinitionIndex = 41428;

class Class_1_AB897E6881FB6771_Class_1_FAB7E0DD35E810FD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_FAB7E0DD35E810FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0E67E6468CC6FE66(::MoleMole::ConfigBuddyUISetting* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigBuddyUISetting*))((::PBYTE)hIl2Cpp + CLASS_1_AB897E6881FB6771_CLASS_1_FAB7E0DD35E810FD_METHOD_1_0E67E6468CC6FE66_OFFSET))(this, a1);
	}
};
