#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace DG::Tweening { class TweenCallback; }
namespace MoleMole { class UIMainCityMissionWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBE2B130)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEMISSIONCONTENTFADEINANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xBE2B140)
#define MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEMISSIONCONTENTFADEINANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0xBE2B200)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityMissionWidgetController___c__DisplayClass14_0_TypeDefinitionIndex = 53701;

	class UIMainCityMissionWidgetController___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::DG::Tweening::TweenCallback* __9__1; // 0x10
		::System::Action* callback; // 0x18
		::MoleMole::UIMainCityMissionWidgetController* __4__this; // 0x20
		::System::Boolean resetLayout; // 0x28
		::UnityEngine::Vector2 finalSize; // 0x2C
		::System::Single length; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateMissionContentFadeInAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEMISSIONCONTENTFADEINANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _UpdateMissionContentFadeInAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS14_0__UPDATEMISSIONCONTENTFADEINANIMATION_B__1_OFFSET))(this);
		}
	};
}
