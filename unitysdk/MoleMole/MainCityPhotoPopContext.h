#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D236B7BC4C0A720.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RenderTexture; }

#define MOLEMOLE_MAINCITYPHOTOPOPCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC9D6130)

namespace MoleMole
{
	inline static constexpr unsigned int MainCityPhotoPopContext_TypeDefinitionIndex = 67835;

	class MainCityPhotoPopContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* desc1; // 0x28
		::System::Action_1<::System::String*>* shareBtnClickCallback; // 0x30
		::UnityEngine::RenderTexture* PhotoTex; // 0x38
		::System::String* desc2; // 0x40
		::System::Int32 shareSourceType; // 0x48
		::Enum_3_9D236B7BC4C0A720 photoSourceType; // 0x4C
		::System::Boolean IsCloseUIWithBlackCurtain; // 0x50

		::System::Void _ctor(::UnityEngine::RenderTexture* tex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_MAINCITYPHOTOPOPCONTEXT__CTOR_OFFSET))(this, tex);
		}
	};
}
