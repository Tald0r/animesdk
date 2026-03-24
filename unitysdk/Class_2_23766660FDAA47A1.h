#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_23766660FDAA47A1_Class_2_9BC17F305D53096C_2;
namespace MoleMole { class UIInLevelEtherEyesInfoContainerChildWindowController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_23766660FDAA47A1_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xD6AB6E0)
#define CLASS_2_23766660FDAA47A1_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xD6AB6F0)
#define CLASS_2_23766660FDAA47A1_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xD6AB7D0)
#define CLASS_2_23766660FDAA47A1__CTOR_OFFSET UNITYSDK_OFFSET(0xD6AB7C0)

inline static constexpr unsigned int Class_2_23766660FDAA47A1_TypeDefinitionIndex = 65672;

class Class_2_23766660FDAA47A1 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_23766660FDAA47A1_Class_2_9BC17F305D53096C_2* Field_2_1; // 0x28
	::MoleMole::UIInLevelEtherEyesInfoContainerChildWindowController* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23766660FDAA47A1__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23766660FDAA47A1_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_23766660FDAA47A1_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23766660FDAA47A1_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}
};
