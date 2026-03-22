#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigChessboardClearUiPostProcess; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_4_46048A3A0C65EA6E_METHOD_4_2340068C22DFE332_OFFSET UNITYSDK_OFFSET(0x16EAC240)
#define CLASS_4_46048A3A0C65EA6E_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x16EAC3F0)
#define CLASS_4_46048A3A0C65EA6E_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EAC390)
#define CLASS_4_46048A3A0C65EA6E_METHOD_4_DA75C361EBED2E92_OFFSET UNITYSDK_OFFSET(0x16EAC0E0)
#define CLASS_4_46048A3A0C65EA6E__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAC340)

inline static constexpr unsigned int Class_4_46048A3A0C65EA6E_TypeDefinitionIndex = 44907;

class Class_4_46048A3A0C65EA6E : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::Config::ConfigChessboardClearUiPostProcess* Field_4_0; // 0x40
	::MoleMole::UIHollowMainPageController* Field_4_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_46048A3A0C65EA6E__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_DA75C361EBED2E92(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_46048A3A0C65EA6E_METHOD_4_DA75C361EBED2E92_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_2340068C22DFE332()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_46048A3A0C65EA6E_METHOD_4_2340068C22DFE332_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_46048A3A0C65EA6E_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_46048A3A0C65EA6E_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}
};
