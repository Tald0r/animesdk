#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonsterSpecialIdleConfig; }
namespace System { class Action; }

#define CLASS_1_90771BD983DA4E3F_CLASS_1_9134B2C89F97BF94_METHOD_1_2083644E891C9511_OFFSET UNITYSDK_OFFSET(0x8D6C9F0)
#define CLASS_1_90771BD983DA4E3F_CLASS_1_9134B2C89F97BF94__CTOR_OFFSET UNITYSDK_OFFSET(0x8D6C9E0)

inline static constexpr unsigned int Class_1_90771BD983DA4E3F_Class_1_9134B2C89F97BF94_TypeDefinitionIndex = 78953;

class Class_1_90771BD983DA4E3F_Class_1_9134B2C89F97BF94 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_9134B2C89F97BF94__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2083644E891C9511(::MoleMole::MonsterSpecialIdleConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonsterSpecialIdleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_90771BD983DA4E3F_CLASS_1_9134B2C89F97BF94_METHOD_1_2083644E891C9511_OFFSET))(this, a1);
	}
};
