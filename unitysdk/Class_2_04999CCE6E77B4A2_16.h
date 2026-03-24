#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_04999CCE6E77B4A2_16_Class_2_2B2DA72811ABBD65_3;
namespace MoleMole { class UIWindowController; }

#define CLASS_2_04999CCE6E77B4A2_16_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xD098470)
#define CLASS_2_04999CCE6E77B4A2_16_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0xD098480)
#define CLASS_2_04999CCE6E77B4A2_16__CTOR_OFFSET UNITYSDK_OFFSET(0xD098550)

inline static constexpr unsigned int Class_2_04999CCE6E77B4A2_16_TypeDefinitionIndex = 73448;

class Class_2_04999CCE6E77B4A2_16 : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::Class_2_04999CCE6E77B4A2_16_Class_2_2B2DA72811ABBD65_3* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_16__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_16_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_04999CCE6E77B4A2_16_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}
};
