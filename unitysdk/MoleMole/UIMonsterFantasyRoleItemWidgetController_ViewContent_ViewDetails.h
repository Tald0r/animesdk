#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EEA6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails_TypeDefinitionIndex = 42512;

	class UIMonsterFantasyRoleItemWidgetController_ViewContent_ViewDetails : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* TagGo; // 0x10
		::Class_2_A8F5ABF31E066ED4* LongPressFillImg; // 0x18
		::UnityEngine::GameObject* DisableGo; // 0x20
		::Class_2_A8F5ABF31E066ED4* HpImg; // 0x28
		::Class_2_9E3E3CDA608A4F58* HpAddLight; // 0x30
		::UnityEngine::GameObject* PlayerTagGo; // 0x38
		::Class_2_A8F5ABF31E066ED4* TagLeftImg; // 0x40
		::Class_2_A8F5ABF31E066ED4* Img; // 0x48
		::UnityEngine::GameObject* EnemyTagGo; // 0x50
		::Class_2_A8F5ABF31E066ED4* TagRightImg; // 0x58
		::Class_2_60DDD9C206686F44* Btn; // 0x60
		::Class_2_A8F5ABF31E066ED4* TagImg; // 0x68
		::UnityEngine::GameObject* Go; // 0x70
		::UnityEngine::GameObject* LongPressGo; // 0x78
		::UnityEngine::GameObject* ExtraGo; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_VIEWCONTENT_VIEWDETAILS__CTOR_OFFSET))(this);
		}
	};
}
