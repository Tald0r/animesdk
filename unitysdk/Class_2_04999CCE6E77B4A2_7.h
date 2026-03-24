#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_04999CCE6E77B4A2_7_Class_2_44201780A2E51AE8;
namespace MoleMole { class UIMusicBattleInLevelFeverTipsWidgetController; }
namespace MoleMole { class UIWindowController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_04999CCE6E77B4A2_7_METHOD_2_34B301FFD3BC3F82_OFFSET UNITYSDK_OFFSET(0x7549FE0)
#define CLASS_2_04999CCE6E77B4A2_7_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7549EF0)
#define CLASS_2_04999CCE6E77B4A2_7_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x7549F00)
#define CLASS_2_04999CCE6E77B4A2_7__CTOR_OFFSET UNITYSDK_OFFSET(0x7549FD0)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_7_TypeDefinitionIndex = 49428;

class Class_2_04999CCE6E77B4A2_7 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_04999CCE6E77B4A2_7_Class_2_44201780A2E51AE8* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::Class_3_647A206587033F4E<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>* Method_2_34B301FFD3BC3F82()
	{
		return ((::Class_3_647A206587033F4E<::MoleMole::UIMusicBattleInLevelFeverTipsWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_7_METHOD_2_34B301FFD3BC3F82_OFFSET))(this);
	}
};
