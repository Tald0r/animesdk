#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_E6E2CD5B8103BD02.h"
#include "unitysdk/Enum_3_C6E8F7731271F88A.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/ProtoScript/NodeState.h"
#include "unitysdk/ProtoScript/NodeVisible.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_566836ABAF8E0E0B_METHOD_4_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x88CE3F0)
#define CLASS_4_566836ABAF8E0E0B_METHOD_4_63617D5D5992EC9F_OFFSET UNITYSDK_OFFSET(0x88CDC50)
#define CLASS_4_566836ABAF8E0E0B_METHOD_4_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x88CDDE0)
#define CLASS_4_566836ABAF8E0E0B_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88CE400)
#define CLASS_4_566836ABAF8E0E0B__CTOR_OFFSET UNITYSDK_OFFSET(0x88CE3A0)

inline static constexpr unsigned int Class_4_566836ABAF8E0E0B_TypeDefinitionIndex = 61318;

class Class_4_566836ABAF8E0E0B : public ::Class_3_E6E2CD5B8103BD02
{
public:
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* Field_4_4; // 0x40
	::System::Int32 Field_4_1; // 0x48
	::ProtoScript::NodeVisible Field_4_0; // 0x4C
	::Enum_3_C6E8F7731271F88A Field_4_3; // 0x50
	::ProtoScript::NodeState Field_4_2; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_566836ABAF8E0E0B__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_63617D5D5992EC9F(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_566836ABAF8E0E0B_METHOD_4_63617D5D5992EC9F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_566836ABAF8E0E0B_METHOD_4_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_4_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_4_566836ABAF8E0E0B_METHOD_4_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_566836ABAF8E0E0B_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}
};
