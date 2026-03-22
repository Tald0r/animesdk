#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_132;
class Class_2_FEE15097CD050AE8_1_Class_2_E89DC7541B30248D_10;
namespace MoleMole { class UIInLevelGuideChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x82B28C0)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x82B28D0)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x82B2BA0)
#define CLASS_2_FEE15097CD050AE8_1_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x82B29A0)
#define CLASS_2_FEE15097CD050AE8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x82B2B90)

inline static constexpr unsigned int Class_2_FEE15097CD050AE8_1_TypeDefinitionIndex = 51270;

class Class_2_FEE15097CD050AE8_1 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIInLevelGuideChildWindowController* Field_2_1; // 0x28
	::MoleMole::UIInLevelGuideChildWindowController* Field_2_2; // 0x30
	::Class_2_FEE15097CD050AE8_1_Class_2_E89DC7541B30248D_10* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_132* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_132*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEE15097CD050AE8_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
