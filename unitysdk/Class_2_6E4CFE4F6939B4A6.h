#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_6E4CFE4F6939B4A6_Class_2_E89DC7541B30248D_8;
namespace MoleMole { class UIInLevelSkillButtonBangBooAChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooBranchChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooDChildWindowController; }
namespace MoleMole { class UIInLevelSkillButtonBangbooJumpChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_6E4CFE4F6939B4A6_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7473CC0)
#define CLASS_2_6E4CFE4F6939B4A6_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x7473CD0)
#define CLASS_2_6E4CFE4F6939B4A6_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7473FC0)
#define CLASS_2_6E4CFE4F6939B4A6_METHOD_2_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x7473DA0)
#define CLASS_2_6E4CFE4F6939B4A6__CTOR_OFFSET UNITYSDK_OFFSET(0x7473FB0)

inline static constexpr unsigned int Class_2_6E4CFE4F6939B4A6_TypeDefinitionIndex = 46880;

class Class_2_6E4CFE4F6939B4A6 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIInLevelSkillButtonBangbooBranchChildWindowController* Field_2_2; // 0x28
	::MoleMole::UIInLevelSkillButtonBangBooAChildWindowController* Field_2_4; // 0x30
	::Class_2_6E4CFE4F6939B4A6_Class_2_E89DC7541B30248D_8* Field_2_0; // 0x38
	::MoleMole::UIInLevelSkillButtonBangbooDChildWindowController* Field_2_1; // 0x40
	::MoleMole::UIInLevelSkillButtonBangbooJumpChildWindowController* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E4CFE4F6939B4A6__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E4CFE4F6939B4A6_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_6E4CFE4F6939B4A6_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D737CD2779D51A4E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E4CFE4F6939B4A6_METHOD_2_D737CD2779D51A4E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E4CFE4F6939B4A6_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
