#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_88CBBACC3A251D13.h"
#include "unitysdk/NodeGraph/VariantUnion.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_5A585DEB704A07E2;
class Class_3_4E47F36769F2B13F;
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_NOTIFICATIONBADGEEX_AWAKE_OFFSET UNITYSDK_OFFSET(0xC7D3800)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0xC7D4190)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET UNITYSDK_OFFSET(0xC7D40A0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0xC7D3AE0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_CLEARNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7D45E0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0xC7D48A0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_GETREDSIGNCOUNT_OFFSET UNITYSDK_OFFSET(0xC7D4570)
#define MOLEMOLE_NOTIFICATIONBADGEEX_HIDE_OFFSET UNITYSDK_OFFSET(0xC7D47E0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_INITGENERALNOTIFICATION_OFFSET UNITYSDK_OFFSET(0xC7D3880)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_1E8FE4F91B9E3E3B_OFFSET UNITYSDK_OFFSET(0xC7D4940)
#define MOLEMOLE_NOTIFICATIONBADGEEX_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xC7D4310)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7D3FD0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC7D3D70)
#define MOLEMOLE_NOTIFICATIONBADGEEX_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC7D3C30)
#define MOLEMOLE_NOTIFICATIONBADGEEX_REBINDNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7D3CF0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_RESETNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7D3DE0)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET UNITYSDK_OFFSET(0xC7D4650)
#define MOLEMOLE_NOTIFICATIONBADGEEX_SHOW_OFFSET UNITYSDK_OFFSET(0xC7D4720)
#define MOLEMOLE_NOTIFICATIONBADGEEX__CTOR_OFFSET UNITYSDK_OFFSET(0xC7D4920)

namespace MoleMole
{
	inline static constexpr unsigned int NotificationBadgeEx_TypeDefinitionIndex = 59859;

	class NotificationBadgeEx : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Share::ENotificationBadgeType _badgeType; // 0x18
		::UnityEngine::Transform* _newTransform; // 0x20
		::UnityEngine::Transform* _redPointTransform; // 0x28
		::UnityEngine::GameObject* _effectObj; // 0x30
		::System::Boolean copyDontClear; // 0x38
		::Enum_3_88CBBACC3A251D13 uiDisplayOrder; // 0x3A
		::Class_3_4E47F36769F2B13F* Field_5_6; // 0x40
		::Class_1_5A585DEB704A07E2* Field_5_7; // 0x48
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

		::System::Void BindNotificationNode_2(::Class_1_5A585DEB704A07E2* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5A585DEB704A07E2*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_BINDNOTIFICATIONNODE_2_OFFSET))(this, a1, a2);
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

		::System::Void SetUIDisplayOrder(::Enum_3_88CBBACC3A251D13 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_88CBBACC3A251D13))((::PBYTE)hIl2Cpp + MOLEMOLE_NOTIFICATIONBADGEEX_SETUIDISPLAYORDER_OFFSET))(this, a1);
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
