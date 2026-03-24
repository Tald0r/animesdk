#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_E77DE98FC3D1D1F5.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_EDD00F11579BBF26_METHOD_5_0FC1CEE4654C1D74_OFFSET UNITYSDK_OFFSET(0x91FA840)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x91FB0F0)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_479759059E440327_OFFSET UNITYSDK_OFFSET(0x91FAD00)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x91FA950)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91FB160)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_F978A1D172468895_1_OFFSET UNITYSDK_OFFSET(0x91FAA00)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x91FADC0)
#define CLASS_5_EDD00F11579BBF26_METHOD_5_FE7CF23E00ACD3DF_OFFSET UNITYSDK_OFFSET(0x91FB1C0)
#define CLASS_5_EDD00F11579BBF26__CTOR_OFFSET UNITYSDK_OFFSET(0x91FB0E0)

inline static constexpr unsigned int Class_5_EDD00F11579BBF26_TypeDefinitionIndex = 50311;

class Class_5_EDD00F11579BBF26 : public ::Class_4_E77DE98FC3D1D1F5
{
public:
	::System::UInt32 Field_5_3; // 0x50
	::System::Single Field_5_0; // 0x54
	::MoleMole::HollowChessboard::HollowCell Field_5_1; // 0x58
	::MoleMole::HollowChessboard::HollowCell Field_5_2; // 0x64
	::System::Boolean Field_5_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_0FC1CEE4654C1D74(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_0FC1CEE4654C1D74_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_5_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_5_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_5_F978A1D172468895_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_F978A1D172468895_1_OFFSET))(this);
	}

	::System::Void Method_5_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_5_FE7CF23E00ACD3DF(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_EDD00F11579BBF26_METHOD_5_FE7CF23E00ACD3DF_OFFSET))(this, a1, a2, a3, a4);
	}
};
