#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1811A2FF39BB6575.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_79526D80B8F6897C;
class Class_3_4E47F36769F2B13F;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0x9940360)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x9940CF0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET UNITYSDK_OFFSET(0x9940C00)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x9940640)
#define MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET UNITYSDK_OFFSET(0x9941130)
#define MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x99413F0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET UNITYSDK_OFFSET(0x99410C0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET UNITYSDK_OFFSET(0x9941330)
#define MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x99403E0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_1E8FE4F91B9E3E3B_OFFSET UNITYSDK_OFFSET(0x9941490)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x9940E70)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9940B30)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x99408D0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9940790)
#define MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET UNITYSDK_OFFSET(0x9940850)
#define MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0x9940940)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0x99411A0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET UNITYSDK_OFFSET(0x9941270)
#define MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET UNITYSDK_OFFSET(0x9941470)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadgeEx_TypeDefinitionIndex = 70247;

	class NotificationBadgeEx : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::UnityEngine::Transform* _newTransform; // 0x20
		::UnityEngine::Transform* _redPointTransform; // 0x28
		::UnityEngine::GameObject* _effectObj; // 0x30
		::System::Boolean copyDontClear; // 0x38
		::Enum_3_1811A2FF39BB6575 uiDisplayOrder; // 0x3A
		::Class_3_4E47F36769F2B13F* Field_5_6; // 0x40
		::Class_1_79526D80B8F6897C* Field_5_7; // 0x48
		::System::Boolean Field_5_8; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitGeneralNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET))(this);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET))(this, a1, a2);
		}

		::System::Void BindNotificationNode_1(::Share::ENotificationBadgeType a1, ::NodeGraph::VariantUnion a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BindNotificationNode_2(::Class_1_79526D80B8F6897C* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_79526D80B8F6897C*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetRedSignCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET))(this);
		}

		::System::Void ResetNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET))(this);
		}

		::System::Void ClearNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET))(this);
		}

		::System::Void RebindNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET))(this);
		}

		::System::Void SetUIDisplayOrder(::Enum_3_1811A2FF39BB6575 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_1811A2FF39BB6575))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_1E8FE4F91B9E3E3B(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_1E8FE4F91B9E3E3B_OFFSET))(this, a1);
		}
	};
}
