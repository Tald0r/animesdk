#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgTextIconUtils_EIconType.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_ICONMATCHED_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x57AA10)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_ICONMATCHED_GETNAMESTRING_OFFSET UNITYSDK_OFFSET(0x57AA00)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_IconMatched_TypeDefinitionIndex = 56784;

	struct alignas(4) UIImgTextIconUtils_IconMatched
	{
		::UnityEngine::UI::Extension::UIImgTextIconUtils_EIconType iconType; // 0x10
		::System::Int32 charBeginIndex; // 0x14
		::System::Int32 charCount; // 0x18

		::System::String* GetNameString(::System::String* rawString, ::Il2CppArray<::System::String*>* word)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_ICONMATCHED_GETNAMESTRING_OFFSET))(this, rawString, word);
		}

		::System::Single GetFloat(::System::String* rawString, ::System::String* key)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_ICONMATCHED_GETFLOAT_OFFSET))(this, rawString, key);
		}
	};
}
