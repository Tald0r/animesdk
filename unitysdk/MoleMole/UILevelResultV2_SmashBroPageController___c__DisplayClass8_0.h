#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_24;
class Class_3_AE02BC8285203464_36;
class Class_4_58516394317D6284_1;
namespace MoleMole { class UILevelResultV2_SmashBroPageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6C260)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x9E6C270)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x9E6C450)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_SmashBroPageController___c__DisplayClass8_0_TypeDefinitionIndex = 39238;

	class UILevelResultV2_SmashBroPageController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::UILevelResultV2_SmashBroPageController* __4__this; // 0x10
		::System::Func_2<::Class_3_AE02BC8285203464_36*, ::System::Boolean>* __9__1; // 0x18
		::Class_4_58516394317D6284_1* smashContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewNormalLevel_b__0(::Class_3_472679C84451629A_24* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_472679C84451629A_24*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _RefreshViewNormalLevel_b__1(::Class_3_AE02BC8285203464_36* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET))(this, match);
		}
	};
}
