#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOGROUPPHOTOCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xCC42B80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooGroupPhotoContext_TypeDefinitionIndex = 56844;

	class UIBangbooGroupPhotoContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* ConfigCameraBezierSurface; // 0x28
		::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* OnClose; // 0x30
		::System::Single photoCheckInterval; // 0x38
		::System::Boolean notChangeBGM; // 0x3C
		::System::Int32 PhotoGameID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOGROUPPHOTOCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
