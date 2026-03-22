#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_D13F0A2D74DCF483_Class_2_572DD5F97D05D6AE;
namespace MoleMole { class UIEmojiTipRouletteWidgetController; }
namespace MoleMole { class UIEmojiTipWidgetController; }
namespace MoleMole { class UIInLevelEmoticonsTipWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_D13F0A2D74DCF483_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0x91BFD90)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_6092608CF92684DE_OFFSET UNITYSDK_OFFSET(0x91BFAD0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_A01CC281865F3AD8_OFFSET UNITYSDK_OFFSET(0x91BFCD0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x91BF9F0)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x91BFA00)
#define CLASS_2_D13F0A2D74DCF483_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91BFC70)
#define CLASS_2_D13F0A2D74DCF483__CTOR_OFFSET UNITYSDK_OFFSET(0x91BFC60)

inline static constexpr unsigned int Class_2_D13F0A2D74DCF483_TypeDefinitionIndex = 67407;

class Class_2_D13F0A2D74DCF483 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_D13F0A2D74DCF483_Class_2_572DD5F97D05D6AE* Field_2_0; // 0x28
	::MoleMole::UIEmojiTipRouletteWidgetController* Field_2_1; // 0x30
	::MoleMole::UIInLevelEmoticonsTipWidgetController* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6092608CF92684DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_6092608CF92684DE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::MoleMole::UIEmojiTipWidgetController* Method_2_A01CC281865F3AD8()
	{
		return ((::MoleMole::UIEmojiTipWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_A01CC281865F3AD8_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D13F0A2D74DCF483_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}
};
