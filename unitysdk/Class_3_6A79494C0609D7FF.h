#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
class Class_2_26C087FD4946396E;
namespace MoleMole::Config { class ConfigHollowResultBlinkAnimNode; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_3_6A79494C0609D7FF_METHOD_3_5E567D9F8480E6CA_OFFSET UNITYSDK_OFFSET(0xA125100)
#define CLASS_3_6A79494C0609D7FF_METHOD_3_6DE2A6F149064C87_OFFSET UNITYSDK_OFFSET(0xA125420)
#define CLASS_3_6A79494C0609D7FF_METHOD_3_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0xA125250)
#define CLASS_3_6A79494C0609D7FF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA1253C0)
#define CLASS_3_6A79494C0609D7FF__CTOR_OFFSET UNITYSDK_OFFSET(0xA1253B0)

inline static constexpr unsigned int Class_3_6A79494C0609D7FF_TypeDefinitionIndex = 42992;

class Class_3_6A79494C0609D7FF : public ::Class_2_A48F3719AA1CF200_3
{
public:
	::MoleMole::Config::ConfigHollowResultBlinkAnimNode* Field_3_1; // 0x28
	::Class_2_26C087FD4946396E* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A79494C0609D7FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_5E567D9F8480E6CA(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_6A79494C0609D7FF_METHOD_3_5E567D9F8480E6CA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A79494C0609D7FF_METHOD_3_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A79494C0609D7FF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_6DE2A6F149064C87(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_3_6A79494C0609D7FF_METHOD_3_6DE2A6F149064C87_OFFSET))(this, a1, a2, a3, a4);
	}
};
