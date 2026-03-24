#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/UI/Extension/ImgTextImgAlign.h"
#include "unitysdk/UnityEngine/UI/Extension/UIImgText_IconItem.h"
#include "unitysdk/UnityEngine/UI/UIText.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class PopEffect;
class UIScrollLineFader;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x6A86F00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CLEARSAVEDVERTPOS_OFFSET UNITYSDK_OFFSET(0x6A87EC0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x6A89180)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CREATEKEY_OFFSET UNITYSDK_OFFSET(0x6A894E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_DOCOMMONREFRESHKEYPANEL_OFFSET UNITYSDK_OFFSET(0x6A876D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETFITSCALE_1_OFFSET UNITYSDK_OFFSET(0x6A8B170)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETFITSCALE_OFFSET UNITYSDK_OFFSET(0x6A89040)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETIMGHEIGHT_OFFSET UNITYSDK_OFFSET(0x6A8B2A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETORCREATEICONITEM_OFFSET UNITYSDK_OFFSET(0x6A896E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETRICHTAGREQUIREINFO_OFFSET UNITYSDK_OFFSET(0x6A87360)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETSTANDFONTSIZE_OFFSET UNITYSDK_OFFSET(0x6A86D80)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET_ENABLEREGISTERINPUTDEVICECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x6A86090)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x6A86A30)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET__ISAWAKED_OFFSET UNITYSDK_OFFSET(0x6A860A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_INTERNALSETTEXT_OFFSET UNITYSDK_OFFSET(0x6A861A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x6A860B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_LOADSPRITE_OFFSET UNITYSDK_OFFSET(0x6A87830)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONAPPLYFONTSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x6A8B320)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6A87120)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6A86E30)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONINPUTDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x6A87660)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONKEYBINDINGUPDATED_OFFSET UNITYSDK_OFFSET(0x6A87440)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONLOCALIZATIONCHANGE_OFFSET UNITYSDK_OFFSET(0x6A8B3A0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x6A88130)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONREFRESHKEYPANEL_OFFSET UNITYSDK_OFFSET(0x6A875F0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x6A874B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_REFRESHIMGPOS_OFFSET UNITYSDK_OFFSET(0x6A86220)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SAVEVERTPOS_OFFSET UNITYSDK_OFFSET(0x6A87F50)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETIMGANCHORBYTRANS_OFFSET UNITYSDK_OFFSET(0x6A87DF0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x6A8B500)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x6A868D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x6A86AB0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SHOWALLIMAGE_OFFSET UNITYSDK_OFFSET(0x6A87FE0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x6A8B650)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET UNITYSDK_OFFSET(0x6A89EE0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_WAITFORREBUILDOVER_OFFSET UNITYSDK_OFFSET(0x6A86990)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6A8B7B0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x6A8B8D0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_GETRICHTAGREQUIREINFO_OFFSET UNITYSDK_OFFSET(0x6A8B8F0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x6A8B8E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONAPPLYFONTSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x6A8B970)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x6A8B9E0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6A8B9F0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONINPUTDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x6A8BA00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONKEYBINDINGUPDATED_OFFSET UNITYSDK_OFFSET(0x6A8BA70)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONLOCALIZATIONCHANGE_OFFSET UNITYSDK_OFFSET(0x6A8BAE0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x6A8BAF0)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONREFRESHKEYPANEL_OFFSET UNITYSDK_OFFSET(0x6A8BB00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x6A8BB70)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_SETTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x6A8BB90)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x6A8BB80)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_TRYREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x6A8BBA0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgText_TypeDefinitionIndex = 47258;

	class UIImgText : public ::UnityEngine::UI::UIText
	{
	public:
		// static const ::System::String* KeyPrefix; // 0x0
		// static const ::System::String* KeyTextPrefix; // 0x0
		// static const ::System::String* MousePrefix; // 0x0
		// static const ::System::String* GamepadPrefix; // 0x0
		// static const ::System::String* ActionPrefix; // 0x0
		// static const ::System::Char KeyIconID; // 0x0
		// static const ::System::Char KeyTextCharID; // 0x0
		// static const ::System::Char MouseIconID; // 0x0
		// static const ::System::Char GamepadIconID; // 0x0
		::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* _loadedAssetRequests; // 0x2E8
		::UnityEngine::UI::Extension::ImgTextImgAlign imgAlign; // 0x2F0
		::System::Single imgHeight; // 0x2F4
		::System::Single imgMargin; // 0x2F8
		::System::Boolean imgBestFit; // 0x2FC
		::System::Boolean useRecttransformSize; // 0x2FD
		::System::Single picYOffsetRatio; // 0x300
		::PopEffect* popEffect; // 0x308
		::UnityEngine::GameObject* imgPrefab; // 0x310
		::System::Boolean applyFakePerspectiveReceiverForChildImages; // 0x318
		::System::Action_1<::UnityEngine::GameObject*>* CreateImgCallback; // 0x320
		::System::Action_1<::UnityEngine::GameObject*>* OnImageCreate; // 0x328
		::UIScrollLineFader* _fader; // 0x330
		::UnityEngine::WaitForEndOfFrame* _waitEndOfFrame; // 0x338
		::System::Boolean refreshImgPosFlag; // 0x340
		::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* _quadInfos; // 0x348
		::System::String* _pendingText; // 0x350
		::System::Single _imgHeightOverride; // 0x358
		::System::Boolean EnableMinWidthCheck; // 0x35C
		::System::Boolean _fontSizeDirty; // 0x35D
		::System::Int32 _usedIconCount; // 0x360
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIImgText_IconItem>* _iconItemPool; // 0x368
		::UnityEngine::Coroutine* handler; // 0x370
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* savedImgVertPos; // 0x378
		::Il2CppArray<::UnityEngine::Vector3>* _corner; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_EnableRegisterInputDeviceChangeNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET_ENABLEREGISTERINPUTDEVICECHANGENOTIFY_OFFSET))(this);
		}

		::System::Boolean get__isAwaked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET__ISAWAKED_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetText(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXT_OFFSET))(this, str);
		}

		::System::Collections::IEnumerator* WaitForRebuildOver()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_WAITFORREBUILDOVER_OFFSET))(this);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONDESTROY_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*> GetRichTagRequireInfo()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETRICHTAGREQUIREINFO_OFFSET))(this);
		}

		::System::Void OnKeyBindingUpdated(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONKEYBINDINGUPDATED_OFFSET))(this, args);
		}

		::System::Void OnRefreshKeyPanel(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONREFRESHKEYPANEL_OFFSET))(this, args);
		}

		::System::Void OnInputDeviceChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONINPUTDEVICECHANGED_OFFSET))(this, args);
		}

		::System::Void DoCommonRefreshKeyPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_DOCOMMONREFRESHKEYPANEL_OFFSET))(this);
		}

		::UnityEngine::Sprite* LoadSprite(::System::String* path)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_LOADSPRITE_OFFSET))(this, path);
		}

		::System::Void SetImgAnchorByTrans(::UnityEngine::RectTransform* rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETIMGANCHORBYTRANS_OFFSET))(this, rt);
		}

		::System::Void RefreshImgPos(::System::Boolean onlySetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_REFRESHIMGPOS_OFFSET))(this, onlySetPos);
		}

		::System::Void ClearSavedVertPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CLEARSAVEDVERTPOS_OFFSET))(this);
		}

		::System::Void SaveVertPos(::System::Int32 index, ::UnityEngine::Vector2 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SAVEVERTPOS_OFFSET))(this, index, pos);
		}

		::System::Void ShowAllImage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SHOWALLIMAGE_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::UnityEngine::UI::Image* CreateImage()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CREATEIMAGE_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*> CreateKey()
		{
			return ((::System::ValueTuple_2<::UnityEngine::RectTransform*, ::UnityEngine::UI::Text*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_CREATEKEY_OFFSET))(this);
		}

		::System::ValueTuple_2<::UnityEngine::UI::Extension::UIImgText_IconItem, ::System::Int32> GetOrCreateIconItem(::UnityEngine::UI::Extension::EImgTextIconType type, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::UnityEngine::UI::Extension::UIImgText_IconItem, ::System::Int32>(*)(::PVOID, ::UnityEngine::UI::Extension::EImgTextIconType, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETORCREATEICONITEM_OFFSET))(this, type, overrideHeight);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> UnityEngine_UI_Extension_IImgIconLoader_LoadNextIcon(::System::String* quadName, ::System::Int32 charIndex, ::System::Single overrideHeight)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_UNITYENGINE_UI_EXTENSION_IIMGICONLOADER_LOADNEXTICON_OFFSET))(this, quadName, charIndex, overrideHeight);
		}

		::System::Single GetImgHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETIMGHEIGHT_OFFSET))(this);
		}

		::System::Single GetFitScale(::System::Single overrideHeight, ::System::Single height)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETFITSCALE_OFFSET))(this, overrideHeight, height);
		}

		::System::Single GetFitScale_1(::System::Single overrideHeight, ::System::Single height, ::System::Single basicScale)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETFITSCALE_1_OFFSET))(this, overrideHeight, height, basicScale);
		}

		::System::Int32 GetStandFontSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_GETSTANDFONTSIZE_OFFSET))(this);
		}

		::System::Void OnApplyFontSizeConfig(::MoleMole::Config::LanguageFontSizeConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LanguageFontSizeConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONAPPLYFONTSIZECONFIG_OFFSET))(this, config);
		}

		::System::Void OnUILayoutPlatformChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnLocalizationChange(::MoleMole::LanguageType lanType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_ONLOCALIZATIONCHANGE_OFFSET))(this, lanType);
		}

		::System::Void SetTextFunc(::System::Func_1<::System::String*>* textFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXTFUNC_OFFSET))(this, textFunc);
		}

		::System::Void InternalSetText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_INTERNALSETTEXT_OFFSET))(this, value);
		}

		::System::Void TryRebuildAdjustedText(::System::Boolean shouldApplyModification)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET))(this, shouldApplyModification);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_AWAKE_OFFSET))(this);
		}

		::System::String* __base_get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_GET_TEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*> __base_GetRichTagRequireInfo()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_GETRICHTAGREQUIREINFO_OFFSET))(this);
		}

		::System::Void __base_OnApplyFontSizeConfig(::MoleMole::Config::LanguageFontSizeConfig& P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LanguageFontSizeConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONAPPLYFONTSIZECONFIG_OFFSET))(this, P0);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnInputDeviceChanged(::System::EventArgs* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONINPUTDEVICECHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_OnKeyBindingUpdated(::System::EventArgs* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONKEYBINDINGUPDATED_OFFSET))(this, P0);
		}

		::System::Void __base_OnLocalizationChange(::MoleMole::LanguageType P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONLOCALIZATIONCHANGE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_OnRefreshKeyPanel(::System::EventArgs* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONREFRESHKEYPANEL_OFFSET))(this, P0);
		}

		::System::Void __base_OnUILayoutPlatformChanged(::System::EventArgs* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_set_text(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_SET_TEXT_OFFSET))(this, P0);
		}

		::System::Void __base_SetTextFunc(::System::Func_1<::System::String*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_SETTEXTFUNC_OFFSET))(this, P0);
		}

		::System::Void __base_TryRebuildAdjustedText(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT___BASE_TRYREBUILDADJUSTEDTEXT_OFFSET))(this, P0);
		}
	};
}
