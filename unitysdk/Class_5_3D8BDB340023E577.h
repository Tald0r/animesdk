#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_C8A4CA21E9D7DEAD.h"
#include "unitysdk/MoleMole/Config/ConfigChessboardCalStartIndexNode_CalStartIndexType.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class Class_1_43BD383C98B4C0C5_19;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole::Config { class ConfigUIBaseScriptableAnimationNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_3D8BDB340023E577_METHOD_5_0A99B4412D79936D_OFFSET UNITYSDK_OFFSET(0x6E8E080)
#define CLASS_5_3D8BDB340023E577_METHOD_5_4962F047950FECC1_OFFSET UNITYSDK_OFFSET(0x6E8E510)
#define CLASS_5_3D8BDB340023E577_METHOD_5_9A219073FC45ED2A_OFFSET UNITYSDK_OFFSET(0x6E8E1F0)
#define CLASS_5_3D8BDB340023E577_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6E8E520)
#define CLASS_5_3D8BDB340023E577_METHOD_5_D98E64C50A37422B_OFFSET UNITYSDK_OFFSET(0x6E8DF80)
#define CLASS_5_3D8BDB340023E577__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8E4C0)

inline static constexpr unsigned int Class_5_3D8BDB340023E577_TypeDefinitionIndex = 61522;

class Class_5_3D8BDB340023E577 : public ::Class_4_C8A4CA21E9D7DEAD
{
public:
	::MoleMole::Config::ConfigChessboardCalStartIndexNode_CalStartIndexType Field_5_0; // 0x40
	::System::Int32 Field_5_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_D98E64C50A37422B(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577_METHOD_5_D98E64C50A37422B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_0A99B4412D79936D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577_METHOD_5_0A99B4412D79936D_OFFSET))(this);
	}

	::System::Void Method_5_4962F047950FECC1(::MoleMole::Config::ConfigUIBaseScriptableAnimationNode* a1, ::Class_1_43BD383C98B4C0C5_19* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIBaseScriptableAnimationNode*, ::Class_1_43BD383C98B4C0C5_19*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577_METHOD_5_4962F047950FECC1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowCell Method_5_9A219073FC45ED2A()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3D8BDB340023E577_METHOD_5_9A219073FC45ED2A_OFFSET))(this);
	}
};
