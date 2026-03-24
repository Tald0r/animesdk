#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }

#define CLASS_1_9E90DD5344066353_CLASS_1_4FCF2A20ECC72C17_METHOD_1_1FFFADFE29FF76AD_OFFSET UNITYSDK_OFFSET(0x8BDDAC0)
#define CLASS_1_9E90DD5344066353_CLASS_1_4FCF2A20ECC72C17__CTOR_OFFSET UNITYSDK_OFFSET(0x8BDDAB0)

inline static constexpr unsigned int Class_1_9E90DD5344066353_Class_1_4FCF2A20ECC72C17_TypeDefinitionIndex = 53028;

class Class_1_9E90DD5344066353_Class_1_4FCF2A20ECC72C17 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_CLASS_1_4FCF2A20ECC72C17__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1FFFADFE29FF76AD(::MoleMole::Config::ConfigHollowChessboard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboard*))((::PBYTE)hIl2Cpp + CLASS_1_9E90DD5344066353_CLASS_1_4FCF2A20ECC72C17_METHOD_1_1FFFADFE29FF76AD_OFFSET))(this, a1);
	}
};
