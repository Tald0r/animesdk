#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E50DA0647A3ACF0.h"
#include "unitysdk/Enum_3_D6C884A69AACE3AE.h"

class Class_0_16E4307DCC419505_136;
class Class_2_31D46BADA568558B_Class_2_E89DC7541B30248D_14;
namespace MoleMole { class UIMusicBattleInLevelPlayWidgetController; }
namespace MoleMole { class UIWindowController; }
namespace UnityEngine { class Transform; }

#define CLASS_2_31D46BADA568558B_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x7787B90)
#define CLASS_2_31D46BADA568558B_METHOD_2_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x7787B20)
#define CLASS_2_31D46BADA568558B_METHOD_2_648B2F9254C58B07_OFFSET UNITYSDK_OFFSET(0x7787960)
#define CLASS_2_31D46BADA568558B_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x7787870)
#define CLASS_2_31D46BADA568558B_METHOD_2_B74D3688C9F7FE4B_OFFSET UNITYSDK_OFFSET(0x7787880)
#define CLASS_2_31D46BADA568558B__CTOR_OFFSET UNITYSDK_OFFSET(0x7787950)

inline static constexpr unsigned int Class_2_31D46BADA568558B_TypeDefinitionIndex = 53682;

class Class_2_31D46BADA568558B : public ::Class_1_9E50DA0647A3ACF0
{
public:
	::MoleMole::UIMusicBattleInLevelPlayWidgetController* Field_2_1; // 0x28
	::Class_2_31D46BADA568558B_Class_2_E89DC7541B30248D_14* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B__CTOR_OFFSET))(this);
	}

	::Enum_3_D6C884A69AACE3AE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D6C884A69AACE3AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Void Method_2_B74D3688C9F7FE4B(::Class_0_16E4307DCC419505_136* a1, ::MoleMole::UIWindowController* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_136*, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_B74D3688C9F7FE4B_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIMusicBattleInLevelPlayWidgetController* Method_2_648B2F9254C58B07()
	{
		return ((::MoleMole::UIMusicBattleInLevelPlayWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_648B2F9254C58B07_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D46BADA568558B_METHOD_2_38B862BB2192EC08_OFFSET))(this);
	}
};
