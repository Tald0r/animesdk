#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgTextIconUtils_IconMatched.h"

class Class_1_BB7873D919742DF3;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine::UI::Extension { class IImgIconLoader; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET UNITYSDK_OFFSET(0x13892150)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATEQUADTAG_OFFSET UNITYSDK_OFFSET(0x13892880)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET UNITYSDK_OFFSET(0x138927A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETACTIONICONQUAD_OFFSET UNITYSDK_OFFSET(0x13892E20)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETICONMAPQUAD_OFFSET UNITYSDK_OFFSET(0x13892D10)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETQUAD_OFFSET UNITYSDK_OFFSET(0x13892BF0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x138934C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgTextIconUtils_TypeDefinitionIndex = 56780;

	class UIImgTextIconUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched>** StaticGet__matcheds()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x2DD80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__Word()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x2DD88);
		}
		static ::Class_1_BB7873D919742DF3** StaticGet__quadMatchers()
		{
			return (::Class_1_BB7873D919742DF3**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x2DD90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet__Prefix()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIImgTextIconUtils_TypeDefinitionIndex)->GetStaticField(0x2DD98);
		}
		// static const ::System::String* OVERRIDE_HEIGHT_KEY; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS__CCTOR_OFFSET))();
		}

		static ::System::String* BuildIconQuad(::System::String* inStr, ::UnityEngine::UI::Extension::IImgIconLoader* iconLoader, ::System::Boolean imgBestFit, ::System::Int32 standFontSize)
		{
			return ((::System::String*(*)(::System::String*, ::UnityEngine::UI::Extension::IImgIconLoader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_BUILDICONQUAD_OFFSET))(inStr, iconLoader, imgBestFit, standFontSize);
		}

		static ::Class_1_BB7873D919742DF3* GenTokenMatcher()
		{
			return ((::Class_1_BB7873D919742DF3*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENTOKENMATCHER_OFFSET))();
		}

		static ::System::Void GenerateQuadTag(::System::String* rawStr, ::System::Text::StringBuilder* sb, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched matched, ::UnityEngine::UI::Extension::IImgIconLoader* iconLoader, ::System::Boolean imgBestFit, ::System::Int32 standFontSize)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched, ::UnityEngine::UI::Extension::IImgIconLoader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GENERATEQUADTAG_OFFSET))(rawStr, sb, matched, iconLoader, imgBestFit, standFontSize);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETQUAD_OFFSET))(rawStr, matched);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetIconMapQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETICONMAPQUAD_OFFSET))(rawStr, matched);
		}

		static ::System::ValueTuple_2<::System::String*, ::System::Single> GetActionIconQuad(::System::String* rawStr, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched matched)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::Single>(*)(::System::String*, ::UnityEngine::UI::Extension::UIImgTextIconUtils_IconMatched))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXTICONUTILS_GETACTIONICONQUAD_OFFSET))(rawStr, matched);
		}
	};
}
