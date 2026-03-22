#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCameraMoveNode_ChessboardCameraMoveType.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_4_598DC3546B73E132_METHOD_4_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x6700790)
#define CLASS_4_598DC3546B73E132_METHOD_4_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x66FE890)
#define CLASS_4_598DC3546B73E132_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x6700780)
#define CLASS_4_598DC3546B73E132_METHOD_4_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x66FE8F0)
#define CLASS_4_598DC3546B73E132_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x67007F0)
#define CLASS_4_598DC3546B73E132_METHOD_4_F485AE7370063313_OFFSET UNITYSDK_OFFSET(0x66FE650)
#define CLASS_4_598DC3546B73E132__CTOR_OFFSET UNITYSDK_OFFSET(0x6700730)

inline static constexpr unsigned int Class_4_598DC3546B73E132_TypeDefinitionIndex = 63323;

class Class_4_598DC3546B73E132 : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::MoleMole::UIHollowMainPageController* Field_4_9; // 0x40
	::System::String* Field_4_1; // 0x48
	::UnityEngine::AnimationCurve* Field_4_5; // 0x50
	::System::String* Field_4_2; // 0x58
	::MoleMole::Config::ConfigChessboardCameraMoveNode_ChessboardCameraMoveType Field_4_0; // 0x60
	::System::Single Field_4_4; // 0x64
	::MoleMole::Vector2Int Field_4_8; // 0x68
	::MoleMole::Config::ConfigSetSection_Order Field_4_7; // 0x70
	::System::Boolean Field_4_13; // 0x74
	::System::Boolean Field_4_10; // 0x75
	::System::Boolean Field_4_11; // 0x76
	::System::Boolean Field_4_12; // 0x77
	::UnityEngine::Vector3 Field_4_6; // 0x78
	::UnityEngine::Vector3 Field_4_3; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_F485AE7370063313(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_F485AE7370063313_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_4_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_4_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_598DC3546B73E132_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
