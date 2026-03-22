#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_CB66BECDB85D4FDA_Class_2_48162E43CFC79866;
namespace MoleMole { class UIEtherEyesInteractBtnChildWindowController; }
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIInLevelSkillButtonInteractChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xBB3D210)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xBB3D410)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xBB3D130)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xBB3D140)
#define CLASS_2_CB66BECDB85D4FDA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB3D3B0)
#define CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET UNITYSDK_OFFSET(0xBB3D3A0)

inline static constexpr unsigned int Class_2_CB66BECDB85D4FDA_TypeDefinitionIndex = 61311;

class Class_2_CB66BECDB85D4FDA : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_CB66BECDB85D4FDA_Class_2_48162E43CFC79866* Field_2_3; // 0x28
	::MoleMole::UIGeneralInteractingContainerController* Field_2_1; // 0x30
	::MoleMole::UIEtherEyesInteractBtnChildWindowController* Field_2_2; // 0x38
	::MoleMole::UIInLevelSkillButtonInteractChildWindowController* Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB66BECDB85D4FDA_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}
};
