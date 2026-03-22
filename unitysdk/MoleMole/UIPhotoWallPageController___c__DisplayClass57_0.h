#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPhotoWallPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x739C1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallPageController___c__DisplayClass57_0_TypeDefinitionIndex = 36587;

	class UIPhotoWallPageController___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallPageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLPAGECONTROLLER___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}
	};
}
