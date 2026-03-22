#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6CD7050)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterCardInfoPopWindowController_MonsterInfoExt_TypeDefinitionIndex = 36907;

	class UIMonsterCardInfoPopWindowController_MonsterInfoExt : public ::System::Object
	{
	public:
		::System::String* m_targetPositionDesc; // 0x10
		::System::Int32 m_questID; // 0x18
		::System::Boolean m_isLocked; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERCARDINFOPOPWINDOWCONTROLLER_MONSTERINFOEXT__CTOR_OFFSET))(this);
		}
	};
}
