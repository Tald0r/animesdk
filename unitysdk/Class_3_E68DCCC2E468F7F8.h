#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigCGCustomGlobalAnimationNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace Plugins::TA { class CGCustomGlobalAnimation; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_0C730BB8D3554DA4_OFFSET UNITYSDK_OFFSET(0x76BAAF0)
#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x76BB2A0)
#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0x76BB290)
#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x76BB230)
#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x76BB050)
#define CLASS_3_E68DCCC2E468F7F8_METHOD_3_FEE7938AD36467E5_OFFSET UNITYSDK_OFFSET(0x76BAC00)
#define CLASS_3_E68DCCC2E468F7F8__CTOR_OFFSET UNITYSDK_OFFSET(0x76BB220)

inline static constexpr unsigned int Class_3_E68DCCC2E468F7F8_TypeDefinitionIndex = 80515;

class Class_3_E68DCCC2E468F7F8 : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigCGCustomGlobalAnimationNode* Field_3_0; // 0x28
	::UnityEngine::AnimationCurve* Field_3_2; // 0x30
	::Plugins::TA::CGCustomGlobalAnimation* Field_3_4; // 0x38
	::System::Single Field_3_3; // 0x40
	::System::Single Field_3_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0C730BB8D3554DA4(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_0C730BB8D3554DA4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_FEE7938AD36467E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_FEE7938AD36467E5_OFFSET))(this);
	}

	::System::Void Method_3_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_E68DCCC2E468F7F8_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}
};
