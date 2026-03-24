#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_58F4DB0CC1131E9C_Class_2_9BC17F305D53096C;
namespace MoleMole { class UIInLevelLinkZoneInfoPanelChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xD84B980)
#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xD84B990)
#define CLASS_2_58F4DB0CC1131E9C_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD84BA70)
#define CLASS_2_58F4DB0CC1131E9C__CTOR_OFFSET UNITYSDK_OFFSET(0xD84BA60)

inline static constexpr unsigned int Class_2_58F4DB0CC1131E9C_TypeDefinitionIndex = 42621;

class Class_2_58F4DB0CC1131E9C : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_58F4DB0CC1131E9C_Class_2_9BC17F305D53096C* Field_2_1; // 0x28
	::MoleMole::UIInLevelLinkZoneInfoPanelChildWindowController* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58F4DB0CC1131E9C_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
