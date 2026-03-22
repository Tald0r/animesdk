#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_427230C11B37EF42.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigNewbie_CircleEffect; }
namespace MoleMole { class ConfigNewbie_NewbieStep; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UINewbiePopWindowController; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_2AA35FC4067271B3_METHOD_2_927C58FAC06ED16D_OFFSET UNITYSDK_OFFSET(0x699BBD0)
#define CLASS_2_2AA35FC4067271B3_METHOD_2_DBFCA9DD937EF4A5_OFFSET UNITYSDK_OFFSET(0x699BE80)
#define CLASS_2_2AA35FC4067271B3_METHOD_2_E1E366EFB5664736_OFFSET UNITYSDK_OFFSET(0x699C1E0)
#define CLASS_2_2AA35FC4067271B3_METHOD_2_F653B8FB883DCCF7_1_OFFSET UNITYSDK_OFFSET(0x699C520)
#define CLASS_2_2AA35FC4067271B3_METHOD_2_F653B8FB883DCCF7_OFFSET UNITYSDK_OFFSET(0x699C4B0)
#define CLASS_2_2AA35FC4067271B3_METHOD_2_FC6366F7D4C2C3B2_OFFSET UNITYSDK_OFFSET(0x699BF60)
#define CLASS_2_2AA35FC4067271B3__CTOR_OFFSET UNITYSDK_OFFSET(0x699C4A0)

inline static constexpr unsigned int Class_2_2AA35FC4067271B3_TypeDefinitionIndex = 43043;

class Class_2_2AA35FC4067271B3 : public ::Class_1_427230C11B37EF42
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x10
	::MoleMole::ConfigNewbie_TargetPath* Field_2_4; // 0x18
	::System::Single Field_2_5; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_1; // 0x28
	::System::Single Field_2_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_927C58FAC06ED16D(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_927C58FAC06ED16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1E366EFB5664736(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_E1E366EFB5664736_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_FC6366F7D4C2C3B2(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_FC6366F7D4C2C3B2_OFFSET))(this, a1);
	}

	::MoleMole::ConfigNewbie_CircleEffect* Method_2_DBFCA9DD937EF4A5(::MoleMole::ConfigNewbie_NewbieStep* a1)
	{
		return ((::MoleMole::ConfigNewbie_CircleEffect*(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieStep*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_DBFCA9DD937EF4A5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F653B8FB883DCCF7(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_F653B8FB883DCCF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F653B8FB883DCCF7_1(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_2AA35FC4067271B3_METHOD_2_F653B8FB883DCCF7_1_OFFSET))(this, a1);
	}
};
