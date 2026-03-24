#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::EventSystems { class PointerEventData; }

#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x993B1B0)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x993B210)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONCLEARALLITEMDATAS_OFFSET UNITYSDK_OFFSET(0x993B460)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x993B270)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x993B390)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONENABLENEXTFRAME_OFFSET UNITYSDK_OFFSET(0x993B330)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONENABLE_OFFSET UNITYSDK_OFFSET(0x993B2D0)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONINITDATA_OFFSET UNITYSDK_OFFSET(0x993B4C0)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONSCROLLVIEWITEMMOVE_OFFSET UNITYSDK_OFFSET(0x993B520)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x993B3F0)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x993B150)
#define NAPSCROLLVIEW_PLUGIN_BASEPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9935460)

namespace NAPScrollView::Plugin
{
	inline static constexpr unsigned int BasePlugin_TypeDefinitionIndex = 66134;

	class BasePlugin : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONENABLE_OFFSET))(this);
		}

		::System::Void OnEnableNextFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONENABLENEXTFRAME_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void OnClearAllItemDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONCLEARALLITEMDATAS_OFFSET))(this);
		}

		::System::Void OnInitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONINITDATA_OFFSET))(this);
		}

		::System::Void OnScrollViewItemMove(::System::Boolean fromCanvasRebuild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_PLUGIN_BASEPLUGIN_ONSCROLLVIEWITEMMOVE_OFFSET))(this, fromCanvasRebuild);
		}
	};
}
