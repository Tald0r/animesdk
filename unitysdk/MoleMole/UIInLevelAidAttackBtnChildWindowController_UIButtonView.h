#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
namespace MoleMole { class UIInLevelAidAttackBtnChildWindowController; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET UNITYSDK_OFFSET(0x80B6160)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET UNITYSDK_OFFSET(0x80B6400)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET UNITYSDK_OFFSET(0x80B6190)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET UNITYSDK_OFFSET(0x80B6260)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET UNITYSDK_OFFSET(0x80B6330)
#define MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x80B64D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelAidAttackBtnChildWindowController_UIButtonView_TypeDefinitionIndex = 67837;

	class UIInLevelAidAttackBtnChildWindowController_UIButtonView : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelAidAttackBtnChildWindowController* _owner; // 0x10

		::System::Void _ctor(::MoleMole::UIInLevelAidAttackBtnChildWindowController* owner)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelAidAttackBtnChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW__CTOR_OFFSET))(this, owner);
		}

		::Class_2_60DDD9C206686F44* get_Btn()
		{
			return ((::Class_2_60DDD9C206686F44*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BTN_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonRoot()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONROOT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MaxDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MAXDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_MinDragArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_MINDRAGAREA_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_ButtonArea()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELAIDATTACKBTNCHILDWINDOWCONTROLLER_UIBUTTONVIEW_GET_BUTTONAREA_OFFSET))(this);
		}
	};
}
