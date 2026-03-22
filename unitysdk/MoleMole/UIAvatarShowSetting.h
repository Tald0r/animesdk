#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class UIAvatarShowType; }
namespace System { class String; }

#define MOLEMOLE_UIAVATARSHOWSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0xA51B250)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarShowSetting_TypeDefinitionIndex = 37293;

	class UIAvatarShowSetting : public ::System::Object
	{
	public:
		::MoleMole::UIAvatarShowType* AvatarShowType; // 0x10
		::MoleMole::AvatarShowSetting* AvatarShowSetting; // 0x18
		::System::String* Tips; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARSHOWSETTING__CTOR_OFFSET))(this);
		}
	};
}
