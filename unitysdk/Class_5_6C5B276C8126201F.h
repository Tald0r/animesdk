#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_86126C0ABC4F0231.h"

class Class_1_F50B5EAC0B6702FB;
class Class_2_9DCE2FC33F67E8A2;
namespace MoleMole::Config { class ConfigChessboardPlayerOnSetDefaultNode; }
namespace MoleMole::Config { class UISpecialNumGroup; }

#define CLASS_5_6C5B276C8126201F_METHOD_5_BD4834A33A98A277_OFFSET UNITYSDK_OFFSET(0x9DCFEA0)
#define CLASS_5_6C5B276C8126201F_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9DD00F0)
#define CLASS_5_6C5B276C8126201F_METHOD_5_D1A9A27748E46319_OFFSET UNITYSDK_OFFSET(0x9DCFF30)
#define CLASS_5_6C5B276C8126201F__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD0090)

inline static constexpr unsigned int Class_5_6C5B276C8126201F_TypeDefinitionIndex = 40834;

class Class_5_6C5B276C8126201F : public ::Class_4_86126C0ABC4F0231<::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode*>
{
public:
	::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* Field_5_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_BD4834A33A98A277(::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode* a1, ::Class_2_9DCE2FC33F67E8A2* a2, ::MoleMole::Config::UISpecialNumGroup* a3, ::Class_1_F50B5EAC0B6702FB* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigChessboardPlayerOnSetDefaultNode*, ::Class_2_9DCE2FC33F67E8A2*, ::MoleMole::Config::UISpecialNumGroup*, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_BD4834A33A98A277_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_5_D1A9A27748E46319()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_D1A9A27748E46319_OFFSET))(this);
	}

	::System::Void Method_5_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_6C5B276C8126201F_METHOD_5_CA373AA1C7054598_OFFSET))(this);
	}
};
