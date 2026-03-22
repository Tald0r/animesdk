#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5002A338EA6818A8;
class Class_2_208CC9941471731A_246;
class Class_2_B1555FA59A3F87CE;
class Class_2_DFBAA7B9A2231B38_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3DDF70)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET UNITYSDK_OFFSET(0xA3DDD60)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3DE100)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET UNITYSDK_OFFSET(0xA3DE300)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_GETINDEX_OFFSET UNITYSDK_OFFSET(0xA3DDCF0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3DD0B0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA3DD310)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3DD150)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3DCC30)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3DD000)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYCANNOTSELECTANIM_OFFSET UNITYSDK_OFFSET(0xA3DDDD0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYFOCUSANIM_OFFSET UNITYSDK_OFFSET(0xA3DDEC0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_REFRESHUSEDTAG_OFFSET UNITYSDK_OFFSET(0xA3DD9B0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET UNITYSDK_OFFSET(0xA3DDC80)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DE3A0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3DE3B0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA3DE420)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA3DE4A0)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA3DE520)
#define MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA3DE580)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastDishItemWidgetController_TypeDefinitionIndex = 60242;

	class UIOverlordFeastDishItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_DFBAA7B9A2231B38_2* _view; // 0x2D0
		::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* _onStartDragOutScrollView; // 0x2D8
		::Class_2_B1555FA59A3F87CE* _model; // 0x2E0
		::UnityEngine::Vector2 _startDragPos; // 0x2E8
		::System::Boolean _draging; // 0x2F0
		::Class_2_208CC9941471731A_246* _template; // 0x2F8
		::Class_1_5002A338EA6818A8* _context; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetOnDragFunc(::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::UnityEngine::EventSystems::PointerEventData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_SETONDRAGFUNC_OFFSET))(this, action);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_GETINDEX_OFFSET))(this);
		}

		::System::Void ClearPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_CLEARPRESSED_OFFSET))(this);
		}

		::System::Void RefreshUsedTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_REFRESHUSEDTAG_OFFSET))(this);
		}

		::System::Void PlayCanNotSelectAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYCANNOTSELECTANIM_OFFSET))(this);
		}

		::System::Void PlayFocusAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_PLAYFOCUSANIM_OFFSET))(this);
		}

		::System::Void BeginDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_BEGINDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void DragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_DRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void EndDragCallback(::UnityEngine::EventSystems::PointerEventData* eventdata)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER_ENDDRAGCALLBACK_OFFSET))(this, eventdata);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTDISHITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
