#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS261_0__CAMERASTRETCHBACKWARD_B__0_OFFSET UNITYSDK_OFFSET(0x9EA9100)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS261_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E8B610)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass261_0_TypeDefinitionIndex = 49566;

	class UIHollowMainPageController___c__DisplayClass261_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::System::Action* onAfterStretch; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS261_0__CTOR_OFFSET))(this);
		}

		::System::Void _CameraStretchBackward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS261_0__CAMERASTRETCHBACKWARD_B__0_OFFSET))(this);
		}
	};
}
