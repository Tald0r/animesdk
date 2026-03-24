#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigEnableChessboardManipulate; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_FD65FC487A5564F1_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x6298DC0)
#define CLASS_4_FD65FC487A5564F1_METHOD_4_563F5F9B787A4FF1_OFFSET UNITYSDK_OFFSET(0x6298A80)
#define CLASS_4_FD65FC487A5564F1_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6298D60)
#define CLASS_4_FD65FC487A5564F1_METHOD_4_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0x6298920)
#define CLASS_4_FD65FC487A5564F1__CTOR_OFFSET UNITYSDK_OFFSET(0x6298D10)

inline static constexpr unsigned int Class_4_FD65FC487A5564F1_TypeDefinitionIndex = 47615;

class Class_4_FD65FC487A5564F1 : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_0; // 0x40
	::MoleMole::Config::ConfigEnableChessboardManipulate* Field_4_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD65FC487A5564F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_FD65FC487A5564F1_METHOD_4_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_563F5F9B787A4FF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD65FC487A5564F1_METHOD_4_563F5F9B787A4FF1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD65FC487A5564F1_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_FD65FC487A5564F1_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}
};
