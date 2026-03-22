#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_F50B5EAC0B6702FB;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigPlayOverloadBarAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_CD305397D22B82A5_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA0E3180)
#define CLASS_5_CD305397D22B82A5_METHOD_5_D11D49A150087693_OFFSET UNITYSDK_OFFSET(0xA0E2E30)
#define CLASS_5_CD305397D22B82A5_METHOD_5_D76278A00534DA4F_OFFSET UNITYSDK_OFFSET(0xA0E2EC0)
#define CLASS_5_CD305397D22B82A5__CTOR_OFFSET UNITYSDK_OFFSET(0xA0E3120)

inline static constexpr unsigned int Class_5_CD305397D22B82A5_TypeDefinitionIndex = 64058;

class Class_5_CD305397D22B82A5 : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigPlayOverloadBarAnimationNode*>
{
public:
	::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_D11D49A150087693(::MoleMole::Config::ConfigPlayOverloadBarAnimationNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPlayOverloadBarAnimationNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_D11D49A150087693_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_D76278A00534DA4F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_D76278A00534DA4F_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_CD305397D22B82A5_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
