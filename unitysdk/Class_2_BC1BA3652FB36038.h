#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_BC1BA3652FB36038_Class_2_E89DC7541B30248D_16;
namespace MoleMole { class UIGeneralInteractingContainerController; }
namespace MoleMole { class UIWindowController; }

#define CLASS_2_BC1BA3652FB36038_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x92AAA30)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x92AAA40)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x92AAC90)
#define CLASS_2_BC1BA3652FB36038_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x92AAB10)
#define CLASS_2_BC1BA3652FB36038__CTOR_OFFSET UNITYSDK_OFFSET(0x92AAC80)

inline static constexpr unsigned int Class_2_BC1BA3652FB36038_TypeDefinitionIndex = 55685;

class Class_2_BC1BA3652FB36038 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIGeneralInteractingContainerController* Field_2_0; // 0x28
	::Class_2_BC1BA3652FB36038_Class_2_E89DC7541B30248D_16* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BC1BA3652FB36038_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
