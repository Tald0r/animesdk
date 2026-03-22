#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigTurnBaseBattle; }
namespace System { class Action; }

#define CLASS_1_EE6F6A610AE92B17_CLASS_1_D62D1C8175603518_METHOD_1_5A16546C0B3F15C8_OFFSET UNITYSDK_OFFSET(0x79C5DD0)
#define CLASS_1_EE6F6A610AE92B17_CLASS_1_D62D1C8175603518__CTOR_OFFSET UNITYSDK_OFFSET(0x79C5DC0)

inline static constexpr unsigned int Class_1_EE6F6A610AE92B17_Class_1_D62D1C8175603518_TypeDefinitionIndex = 47190;

class Class_1_EE6F6A610AE92B17_Class_1_D62D1C8175603518 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_D62D1C8175603518__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5A16546C0B3F15C8(::MoleMole::Config::ConfigTurnBaseBattle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTurnBaseBattle*))((::PBYTE)hIl2Cpp + CLASS_1_EE6F6A610AE92B17_CLASS_1_D62D1C8175603518_METHOD_1_5A16546C0B3F15C8_OFFSET))(this, a1);
	}
};
