#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class NotificationBadge; }

#define MOLEMOLE_UICAMPIDLEREWARDNODEREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0F60A0)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleRewardNodeReference_TypeDefinitionIndex = 62653;

	class UICampIdleRewardNodeReference : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::NotificationBadge* m_notificationBadge; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLEREWARDNODEREFERENCE__CTOR_OFFSET))(this);
		}
	};
}
