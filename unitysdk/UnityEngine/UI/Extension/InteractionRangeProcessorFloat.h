#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionRangeProcessorBase_1.h"

namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { template <typename T> class InteractionRangeParam_1; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_APPLYDELTA_OFFSET UNITYSDK_OFFSET(0x1A8A53E0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1A8A54A0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_CLAMP_OFFSET UNITYSDK_OFFSET(0x1A8A5030)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1A8A5760)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_GOTOVAL_OFFSET UNITYSDK_OFFSET(0x1A8A51D0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_INITPARAM_OFFSET UNITYSDK_OFFSET(0x1A8A4C20)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_MOCKRANGEEXCFG_OFFSET UNITYSDK_OFFSET(0x1A8A4DE0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_SETCENTERVAL_OFFSET UNITYSDK_OFFSET(0x1A8A4D60)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A57D0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_APPLYEVENTDATA_OFFSET UNITYSDK_OFFSET(0x1A8A5840)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_CLAMP_OFFSET UNITYSDK_OFFSET(0x1A8A58C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_GETTOTALSIZE_OFFSET UNITYSDK_OFFSET(0x1A8A5920)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorFloat_TypeDefinitionIndex = 73141;

	class InteractionRangeProcessorFloat : public ::UnityEngine::UI::Extension::InteractionRangeProcessorBase_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT__CTOR_OFFSET))(this);
		}

		::System::Void InitParam(::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionRangeParam_1<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_INITPARAM_OFFSET))(this, param);
		}

		::System::Void SetCenterVal(::System::Single center)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_SETCENTERVAL_OFFSET))(this, center);
		}

		::System::Void Clamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_CLAMP_OFFSET))(this);
		}

		::System::Void GoToVal(::System::Single targetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_GOTOVAL_OFFSET))(this, targetPos);
		}

		::System::Void ApplyDelta(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_APPLYDELTA_OFFSET))(this, eventData);
		}

		::System::Void ApplyEventData(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Single sizeX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_APPLYEVENTDATA_OFFSET))(this, eventData, sizeX);
		}

		::System::Void MockRangeExCfg()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_MOCKRANGEEXCFG_OFFSET))(this);
		}

		::System::Single GetTotalSize(::UnityEngine::Rect rect)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT_GETTOTALSIZE_OFFSET))(this, rect);
		}

		::System::Void __base_ApplyEventData(::UnityEngine::EventSystems::PointerEventData* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_APPLYEVENTDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Clamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_CLAMP_OFFSET))(this);
		}

		::System::Single __base_GetTotalSize(::UnityEngine::Rect P0)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORFLOAT___BASE_GETTOTALSIZE_OFFSET))(this, P0);
		}
	};
}
