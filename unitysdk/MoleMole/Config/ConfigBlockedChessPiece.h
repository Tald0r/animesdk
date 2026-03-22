#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlockedChessPiece_BigTVType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x15EA7E60)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x15EA7C30)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x15EA8090)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA8150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlockedChessPiece_TypeDefinitionIndex = 41557;

	class ConfigBlockedChessPiece : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x10
		::System::String* BigTVresourse; // 0x18
		::System::String* textureSheetConfigKey; // 0x20
		::System::String* screenMapTexturePath; // 0x28
		::UnityEngine::Texture2D* _noiseTexture; // 0x30
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x38
		::System::String* noiseTexturePath; // 0x40
		::UnityEngine::Texture2D* _screenMapTexture; // 0x48
		::MoleMole::Config::ConfigBlockedChessPiece_BigTVType bigTVTpye; // 0x50
		::System::Boolean EnableMultipleDisplay; // 0x54
		::UnityEngine::Vector2 MultipleDisplayOpacityRange; // 0x58
		::UnityEngine::Color screenMapColor; // 0x60
		::System::Boolean noiseTrigger; // 0x70
		::System::Boolean isDynamicBrightness; // 0x71
		::System::Boolean isTextureSheet; // 0x72
		::System::Nullable_1<::System::Boolean> overrideNoiseTrigger; // 0x73
		::System::Single ShowAnimOpacity; // 0x78
		::System::Nullable_1<::System::Single> overrideBrightness; // 0x7C
		::System::Single BrightOpacity; // 0x84
		::System::Nullable_1<::System::Single> overrideOpacity; // 0x88
		::UnityEngine::Color noiseColor; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_screenMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_noiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET))(this);
		}

		::System::Boolean IsMapTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET))(this);
		}
	};
}
