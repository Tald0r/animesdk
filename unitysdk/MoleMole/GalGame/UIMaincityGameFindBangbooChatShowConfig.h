#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_1737D2629B3D075C;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x8F83C30)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET UNITYSDK_OFFSET(0x8F83C20)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x8F83A60)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x8F83A70)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x8F83CE0)
#define MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET UNITYSDK_OFFSET(0x8F83D00)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int UIMaincityGameFindBangbooChatShowConfig_TypeDefinitionIndex = 67751;

	class UIMaincityGameFindBangbooChatShowConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::UInt32 CountDownSeconds; // 0x10
		::System::String* ConfigCameraBezierSurface; // 0x18
		::System::Int32 MainCityGameUIConfigGameID; // 0x20
		::System::Boolean IsHideCameraMove; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_B90C1A15EA6E3C2B get_UICtrl()
		{
			return ((::Enum_3_B90C1A15EA6E3C2B(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_1737D2629B3D075C* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1737D2629B3D075C*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}

		::System::Int32 get_OutputCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GET_OUTPUTCOUNT_OFFSET))(this);
		}

		::System::String* GetOutputName(::System::Int32 idx)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG_GETOUTPUTNAME_OFFSET))(this, idx);
		}

		::System::String* __base_GetOutputName(::System::Int32 P0)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_UIMAINCITYGAMEFINDBANGBOOCHATSHOWCONFIG___BASE_GETOUTPUTNAME_OFFSET))(this, P0);
		}
	};
}
