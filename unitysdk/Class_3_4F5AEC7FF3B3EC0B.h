#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCB04730)
#define CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0xCB047A0)
#define CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_81C7EDC142F2F188_OFFSET UNITYSDK_OFFSET(0xCB03F20)
#define CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_A50F4F760D51EF42_OFFSET UNITYSDK_OFFSET(0xCB042D0)
#define CLASS_3_4F5AEC7FF3B3EC0B__CTOR_OFFSET UNITYSDK_OFFSET(0xCB04720)

inline static constexpr unsigned int Class_3_4F5AEC7FF3B3EC0B_TypeDefinitionIndex = 70843;

class Class_3_4F5AEC7FF3B3EC0B : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::UnityEngine::AnimationCurve* Field_3_1; // 0x28
	::UnityEngine::GameObject* Field_3_0; // 0x30
	::System::Single Field_3_5; // 0x38
	::System::Single Field_3_4; // 0x3C
	::System::Single Field_3_3; // 0x40
	::System::Single Field_3_2; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4F5AEC7FF3B3EC0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_81C7EDC142F2F188(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_81C7EDC142F2F188_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_A50F4F760D51EF42(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_A50F4F760D51EF42_OFFSET))(this, a1);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_4F5AEC7FF3B3EC0B_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}
};
