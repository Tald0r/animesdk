#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_7ECB9691B142D586;
class Class_2_B34E92C5DC28291B;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA6C590)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA6C630)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA6C300)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA6C4E0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOBYNAME_OFFSET UNITYSDK_OFFSET(0xAA6C7A0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOINNER_OFFSET UNITYSDK_OFFSET(0xAA6C8D0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWITCHPLAYVIDEO_OFFSET UNITYSDK_OFFSET(0xAA6CAC0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWTICHIMG_OFFSET UNITYSDK_OFFSET(0xAA6CBB0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA6CCF0)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA6CD20)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA6CD90)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA6CE10)
#define MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA6CE70)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialVideoPanelWidgetController_TypeDefinitionIndex = 47790;

	class UITutorialVideoPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B34E92C5DC28291B* _view; // 0x2A0
		::Class_1_7ECB9691B142D586* _playerHelper; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayVideoByName(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOBYNAME_OFFSET))(this, fileName);
		}

		::System::Void SwitchPlayVideo(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWITCHPLAYVIDEO_OFFSET))(this, fileName);
		}

		::System::Void SwtichImg(::System::String* imgPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_SWTICHIMG_OFFSET))(this, imgPath);
		}

		::System::Void PlayVideoInner(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER_PLAYVIDEOINNER_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALVIDEOPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
