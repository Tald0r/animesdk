#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_61B5292A11CBD08A_METHOD_4_484A5E36F1DEDF51_OFFSET UNITYSDK_OFFSET(0x94A63E0)
#define CLASS_4_61B5292A11CBD08A_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x94A6800)
#define CLASS_4_61B5292A11CBD08A_METHOD_4_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0x94A6530)
#define CLASS_4_61B5292A11CBD08A_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x94A67A0)
#define CLASS_4_61B5292A11CBD08A__CTOR_OFFSET UNITYSDK_OFFSET(0x94A6750)

inline static constexpr unsigned int Class_4_61B5292A11CBD08A_TypeDefinitionIndex = 53424;

class Class_4_61B5292A11CBD08A : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_3; // 0x40
	::System::Boolean Field_4_2; // 0x48
	::System::Boolean Field_4_1; // 0x49
	::System::Int32 Field_4_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61B5292A11CBD08A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_484A5E36F1DEDF51(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_61B5292A11CBD08A_METHOD_4_484A5E36F1DEDF51_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_64501B5CB67A94C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61B5292A11CBD08A_METHOD_4_64501B5CB67A94C3_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_61B5292A11CBD08A_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_61B5292A11CBD08A_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}
};
