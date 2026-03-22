#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class NotificationBadge; }

#define MOLEMOLE_NOTIFICATIONBADGEGROUP_HIDE_OFFSET UNITYSDK_OFFSET(0x6E4E390)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP_METHOD_5_5D6869F59F692177_OFFSET UNITYSDK_OFFSET(0x6E4E520)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP_METHOD_5_A9EEBCE0AA61FD13_OFFSET UNITYSDK_OFFSET(0x6E4DF20)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x6E4E120)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6E4DD10)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP_SHOW_OFFSET UNITYSDK_OFFSET(0x6E4E320)
#define MOLEMOLE_NOTIFICATIONBADGEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x6E4E500)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadgeGroup_TypeDefinitionIndex = 66928;

	class NotificationBadgeGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::NotificationBadge*>* RedPoints; // 0x18
		::System::Boolean Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_HIDE_OFFSET))(this);
		}

		::System::Void Method_5_5D6869F59F692177(::MoleMole::NotificationBadge* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::NotificationBadge*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_METHOD_5_5D6869F59F692177_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_A9EEBCE0AA61FD13(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEGROUP_METHOD_5_A9EEBCE0AA61FD13_OFFSET))(this, a1);
		}
	};
}
