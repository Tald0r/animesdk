#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_06D9ABE83F7E8323_Class_2_E89DC7541B30248D_18;
namespace MoleMole { class UIMainCityActionTipsWidgetController; }
namespace MoleMole { class UIMainCityClockWidgetController; }
namespace MoleMole { class UIMainCityPersonalOutWidgetController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_06D9ABE83F7E8323_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x607A170)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x607A090)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x607A0A0)
#define CLASS_2_06D9ABE83F7E8323_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x607A340)
#define CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET UNITYSDK_OFFSET(0x607A330)

inline static constexpr unsigned int Class_2_06D9ABE83F7E8323_TypeDefinitionIndex = 56852;

class Class_2_06D9ABE83F7E8323 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIMainCityPersonalOutWidgetController* Field_2_2; // 0x28
	::MoleMole::UIMainCityClockWidgetController* Field_2_3; // 0x30
	::MoleMole::UIMainCityActionTipsWidgetController* Field_2_0; // 0x38
	::Class_2_06D9ABE83F7E8323_Class_2_E89DC7541B30248D_18* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06D9ABE83F7E8323_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
