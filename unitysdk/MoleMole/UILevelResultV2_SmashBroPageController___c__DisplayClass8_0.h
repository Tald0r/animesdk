#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6E8DD3EAC12A67_19;
class Class_3_AE02BC8285203464_27;
class Class_4_58516394317D6284;
namespace MoleMole { class UILevelResultV2_SmashBroPageController; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x98422A0)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET UNITYSDK_OFFSET(0x98422B0)
#define MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET UNITYSDK_OFFSET(0x9842490)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelResultV2_SmashBroPageController___c__DisplayClass8_0_TypeDefinitionIndex = 80487;

	class UILevelResultV2_SmashBroPageController___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::Func_2<::Class_3_AE02BC8285203464_27*, ::System::Boolean>* __9__1; // 0x10
		::MoleMole::UILevelResultV2_SmashBroPageController* __4__this; // 0x18
		::Class_4_58516394317D6284* smashContext; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshViewNormalLevel_b__0(::Class_3_7E6E8DD3EAC12A67_19* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_7E6E8DD3EAC12A67_19*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__0_OFFSET))(this, rsp);
		}

		::System::Boolean _RefreshViewNormalLevel_b__1(::Class_3_AE02BC8285203464_27* match)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_AE02BC8285203464_27*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELRESULTV2_SMASHBROPAGECONTROLLER___C__DISPLAYCLASS8_0__REFRESHVIEWNORMALLEVEL_B__1_OFFSET))(this, match);
		}
	};
}
