#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_04999CCE6E77B4A2_17_Class_2_44201780A2E51AE8;
namespace MoleMole { class UIMusicBattleInLevelFeverTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_34B301FFD3BC3F82_OFFSET UNITYSDK_OFFSET(0x6C60A30)
#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x6C60940)
#define CLASS_2_04999CCE6E77B4A2_17_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x6C60950)
#define CLASS_2_04999CCE6E77B4A2_17__CTOR_OFFSET UNITYSDK_OFFSET(0x6C60A20)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_17_TypeDefinitionIndex = 77353;

class Class_2_04999CCE6E77B4A2_17 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_04999CCE6E77B4A2_17_Class_2_44201780A2E51AE8* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>* Method_2_34B301FFD3BC3F82()
	{
		return ((::Class_3_A2BF74BADF6F7D16<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_17_METHOD_2_34B301FFD3BC3F82_OFFSET))(this);
	}
};
