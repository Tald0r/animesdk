#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_777A5D016ADC7368;
namespace System { class String; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15683B10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET UNITYSDK_OFFSET(0x15683C60)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET UNITYSDK_OFFSET(0x15683BE0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x15683E40)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationImage_TypeDefinitionIndex = 58872;

	class UILocalizationImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* key; // 0x18
		::UnityEngine::UI::Image* _curImage; // 0x20
		::Class_2_777A5D016ADC7368* _assetLoadProxy; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_AWAKE_OFFSET))(this);
		}

		::System::Void UpdateImage(::Class_2_777A5D016ADC7368* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_OFFSET))(this, proxy);
		}

		::System::Void UpdateImage_1(::Class_2_777A5D016ADC7368* proxy, ::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONIMAGE_UPDATEIMAGE_1_OFFSET))(this, proxy, key);
		}
	};
}
