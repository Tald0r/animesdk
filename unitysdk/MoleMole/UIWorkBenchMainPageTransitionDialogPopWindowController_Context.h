#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Color.h"

#define MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x9543540)
#define MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_IMGANIMTIME_OFFSET UNITYSDK_OFFSET(0x9543560)
#define MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_BGCOLOR_OFFSET UNITYSDK_OFFSET(0x9543550)
#define MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_IMGANIMTIME_OFFSET UNITYSDK_OFFSET(0x9543570)
#define MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x9543580)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkBenchMainPageTransitionDialogPopWindowController_Context_TypeDefinitionIndex = 70388;

	class UIWorkBenchMainPageTransitionDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::UnityEngine::Color _bgColor_k__BackingField; // 0x28
		::System::Single _imgAnimTime_k__BackingField; // 0x38

		::System::Void _ctor(::UnityEngine::Color bgColor, ::System::Single imgAnimTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this, bgColor, imgAnimTime);
		}

		::UnityEngine::Color get_bgColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_BGCOLOR_OFFSET))(this);
		}

		::System::Void set_bgColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_BGCOLOR_OFFSET))(this, value);
		}

		::System::Single get_imgAnimTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_IMGANIMTIME_OFFSET))(this);
		}

		::System::Void set_imgAnimTime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGETRANSITIONDIALOGPOPWINDOWCONTROLLER_CONTEXT_SET_IMGANIMTIME_OFFSET))(this, value);
		}
	};
}
