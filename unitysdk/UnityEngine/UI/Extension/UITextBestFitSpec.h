#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/ETextFontBestFitPrefer.h"

namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_COMPARETO_OFFSET UNITYSDK_OFFSET(0x859DA0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_DEFAULTSIZESAVED_OFFSET UNITYSDK_OFFSET(0x859D20)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GETADAPTEDORDEFAULT_OFFSET UNITYSDK_OFFSET(0x18DF7570)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GETPERFERSIZE_OFFSET UNITYSDK_OFFSET(0x859C00)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_ADAPTEDMAXSIZE_OFFSET UNITYSDK_OFFSET(0x2C50B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_ADAPTEDMINSIZE_OFFSET UNITYSDK_OFFSET(0x2C6230)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_DEFAULTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x2D38E0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_DEFAULTMINSIZE_OFFSET UNITYSDK_OFFSET(0x2C3E30)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_RESETADAPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x859CB0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SETADAPTEDSIZE_OFFSET UNITYSDK_OFFSET(0x859C10)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_ADAPTEDMAXSIZE_OFFSET UNITYSDK_OFFSET(0x3084B0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_ADAPTEDMINSIZE_OFFSET UNITYSDK_OFFSET(0x2C6250)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_DEFAULTMAXSIZE_OFFSET UNITYSDK_OFFSET(0x2D38F0)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_DEFAULTMINSIZE_OFFSET UNITYSDK_OFFSET(0x2D3600)
#define UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_TRYSAVEDEFAULTSIZE_OFFSET UNITYSDK_OFFSET(0x859D90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextBestFitSpec_TypeDefinitionIndex = 42297;

	struct alignas(4) UITextBestFitSpec
	{
		::System::Int32 _defaultMinSize; // 0x10
		::System::Int32 _defaultMaxSize; // 0x14
		::System::Int32 _adaptedMinSize; // 0x18
		::System::Int32 _adaptedMaxSize; // 0x1C

		::System::Int32 get_AdaptedMinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_ADAPTEDMINSIZE_OFFSET))(this);
		}

		::System::Void set_AdaptedMinSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_ADAPTEDMINSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_AdaptedMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_ADAPTEDMAXSIZE_OFFSET))(this);
		}

		::System::Void set_AdaptedMaxSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_ADAPTEDMAXSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_DefaultMinSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_DEFAULTMINSIZE_OFFSET))(this);
		}

		::System::Void set_DefaultMinSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_DEFAULTMINSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_DefaultMaxSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GET_DEFAULTMAXSIZE_OFFSET))(this);
		}

		::System::Void set_DefaultMaxSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SET_DEFAULTMAXSIZE_OFFSET))(this, value);
		}

		::System::Boolean GetPerferSize(::UnityEngine::UI::Extension::ETextFontBestFitPrefer type, ::System::Int32& min, ::System::Int32& max)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Extension::ETextFontBestFitPrefer, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GETPERFERSIZE_OFFSET))(this, type, min, max);
		}

		::System::Void SetAdaptedSize(::System::Int32 min, ::System::Int32 max, ::System::Boolean forceResize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_SETADAPTEDSIZE_OFFSET))(this, min, max, forceResize);
		}

		::System::Void ResetAdaptedSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_RESETADAPTEDSIZE_OFFSET))(this);
		}

		::System::Boolean DefaultSizeSaved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_DEFAULTSIZESAVED_OFFSET))(this);
		}

		::System::Boolean TrySaveDefaultSize(::UnityEngine::UI::Text* text)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_TRYSAVEDEFAULTSIZE_OFFSET))(this, text);
		}

		::System::Int32 CompareTo(::UnityEngine::UI::Extension::UITextBestFitSpec other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::UITextBestFitSpec))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_COMPARETO_OFFSET))(this, other);
		}

		static ::System::Int32 GetAdaptedOrDefault(::System::Boolean& useAdapted, ::System::Int32 adapted, ::System::Int32 default_)
		{
			return ((::System::Int32(*)(::System::Boolean&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTBESTFITSPEC_GETADAPTEDORDEFAULT_OFFSET))(useAdapted, adapted, default_);
		}
	};
}
