#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_219B2CD5FA4A8100.h"
#include "unitysdk/MoleMole/Config/LanguageFontSizeConfig.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Struct_2_26263C70D2BDDAC8.h"
#include "unitysdk/Struct_2_97F90E6FB4F6D559.h"
#include "unitysdk/Struct_2_BBD1842F08605895.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/TextAnchor.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/UI/Extension/ETextFontBestFitPrefer.h"
#include "unitysdk/UnityEngine/UI/Extension/ETextFontBrushOption.h"
#include "unitysdk/UnityEngine/UI/Extension/UILocalizationText_EDeferMarkDirtyReq.h"
#include "unitysdk/UnityEngine/UI/Extension/UILocalizationText_PreferredCache.h"
#include "unitysdk/UnityEngine/UI/Extension/UILocalizationText___c__DisplayClass16_0.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextBestFitSpec.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFontDataRuntimeEdit.h"
#include "unitysdk/UnityEngine/UI/Text.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MaxHeightPopText; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class TextGenerator; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class RubyString; }
namespace UnityEngine::UI::Extension { class UITextPluginFormat; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_APPLYFONTSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x181669B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_AWAKE_OFFSET UNITYSDK_OFFSET(0x18165950)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x181656B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x18165830)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATETEXTPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x181645A0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CHANGEFONTIFNEED_OFFSET UNITYSDK_OFFSET(0x18167D10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DESTROYSHAREDFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1816BB10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x1816C440)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1816C330)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ENDPROCESSVERTEX_OFFSET UNITYSDK_OFFSET(0x1815FCA0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_EXRUBYPREFEREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1815FD30)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_FONTBRUSHOPTIMIZEENABLED_OFFSET UNITYSDK_OFFSET(0x1816BA20)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x1816C070)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GENERATEONLYKEY_OFFSET UNITYSDK_OFFSET(0x18163520)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETCONFIGADAPTEDFONTSIZE_OFFSET UNITYSDK_OFFSET(0x18165310)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETCONFIGDEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0x18165400)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETFONTSIZEFORRENDER_OFFSET UNITYSDK_OFFSET(0x18160920)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETFORCEMAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x1816C4B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETPROPERLANGUAGEFONTSTYLE_OFFSET UNITYSDK_OFFSET(0x1816A7B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETRICHTAGREQUIREINFO_OFFSET UNITYSDK_OFFSET(0x1816AD50)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETTEXTFUNCRESULT_OFFSET UNITYSDK_OFFSET(0x18168E20)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_BOLDNESSORSHARPNESSENABLED_OFFSET UNITYSDK_OFFSET(0x18163810)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_BOLDNESS_OFFSET UNITYSDK_OFFSET(0x18163770)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_CACHEDTEXTGENERATORFORRUBYRAWTEXT_OFFSET UNITYSDK_OFFSET(0x1815F860)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_CACHEDTEXTGENERATORFORRUBY_OFFSET UNITYSDK_OFFSET(0x1815F7D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_DYNAMICSETBYCODE_OFFSET UNITYSDK_OFFSET(0x181652C0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ENABLEREGISTERINPUTDEVICECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x181638F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ISBOLDNESSORSHARPNESSVALID_OFFSET UNITYSDK_OFFSET(0x18163790)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ISFONTMATERIAL_OFFSET UNITYSDK_OFFSET(0x18163590)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_KEY_OFFSET UNITYSDK_OFFSET(0x18163900)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_MAXLINEREACHED_OFFSET UNITYSDK_OFFSET(0x181652D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x18164AB0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x181643E0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_RELATEDKEYS_OFFSET UNITYSDK_OFFSET(0x181652F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0x18163780)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x18163C00)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_INITREFRESH_OFFSET UNITYSDK_OFFSET(0x18166E40)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ISKEEPFONT_OFFSET UNITYSDK_OFFSET(0x1816A6D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ISTEXTADJUSTACTIVATED_OFFSET UNITYSDK_OFFSET(0x18164530)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_LOCKTEXTADJUSTRESULT_OFFSET UNITYSDK_OFFSET(0x1816A520)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MANUALREFRESHSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1816BCA0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MARKTEXTADJUSTDIRTY_OFFSET UNITYSDK_OFFSET(0x18166CD0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x1815FBB0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MODIFY_OFFSET UNITYSDK_OFFSET(0x181609D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONAPPLYFONTSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x1816C230)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONBOLDNESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1816BE60)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONCONFIGCHANGED_OFFSET UNITYSDK_OFFSET(0x181680D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18166F50)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18168160)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x181679B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONFONTSETTINGCHANGE_OFFSET UNITYSDK_OFFSET(0x181693F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONFONTSTYLECHANGED_OFFSET UNITYSDK_OFFSET(0x1816BD90)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONINPUTDEVICECHANGED_OFFSET UNITYSDK_OFFSET(0x18168DB0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONKEYBINDINGUPDATED_OFFSET UNITYSDK_OFFSET(0x18168CD0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONLOCALIZATIONCHANGE_OFFSET UNITYSDK_OFFSET(0x1816A020)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1815F8F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONREFRESHKEYPANEL_OFFSET UNITYSDK_OFFSET(0x18168D40)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONSHARPNESSCHANGED_OFFSET UNITYSDK_OFFSET(0x1816BD10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONUILAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x18169340)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1816A3B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REBUILD_OFFSET UNITYSDK_OFFSET(0x181658D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHADJUSTLAYOUT_OFFSET UNITYSDK_OFFSET(0x1816BEE0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHBYTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x1816A340)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHFONTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x181667B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHINEDITOR_OFFSET UNITYSDK_OFFSET(0x1816AB10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHKEY_OFFSET UNITYSDK_OFFSET(0x18163990)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESH_OFFSET UNITYSDK_OFFSET(0x18169960)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x181633F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REPLACETYPESETTINGMARKS_OFFSET UNITYSDK_OFFSET(0x1816AC70)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_RESETDEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1816A210)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_RESETTEXTADJUSTRESULTLOCK_OFFSET UNITYSDK_OFFSET(0x1816A660)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETARGS_OFFSET UNITYSDK_OFFSET(0x18169610)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x18169B80)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETGREY_OFFSET UNITYSDK_OFFSET(0x18169F20)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEEPFONT_OFFSET UNITYSDK_OFFSET(0x181698F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEY_1_OFFSET UNITYSDK_OFFSET(0x181696F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEY_OFFSET UNITYSDK_OFFSET(0x18169780)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETLANGUAGEFONT_OFFSET UNITYSDK_OFFSET(0x18169C10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x18165610)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x18165CB0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXTFUNC_OFFSET UNITYSDK_OFFSET(0x18169840)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_1_OFFSET UNITYSDK_OFFSET(0x18164150)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_2_OFFSET UNITYSDK_OFFSET(0x18164290)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_3_OFFSET UNITYSDK_OFFSET(0x18163D00)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x18164020)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x18165570)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_KEY_OFFSET UNITYSDK_OFFSET(0x18163910)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_MAXLINEREACHED_OFFSET UNITYSDK_OFFSET(0x181652E0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_RELATEDKEYS_OFFSET UNITYSDK_OFFSET(0x18165300)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x18163C10)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_STARTPROCESSVERTEX_OFFSET UNITYSDK_OFFSET(0x1815FA00)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_START_OFFSET UNITYSDK_OFFSET(0x1816C2A0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TEXTHIDE_OFFSET UNITYSDK_OFFSET(0x181634B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TEXTMAPTEMPLATEMAPONONGETSTRINGTEXT_OFFSET UNITYSDK_OFFSET(0x181692D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x1816ADD0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERFONTSETTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0x18168AF0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERINPUTDEVICECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x18168460)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERLOCALIZATIONCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x18168320)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVEFONTSETTINGNOTIFY_OFFSET UNITYSDK_OFFSET(0x181677D0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVEINPUTDEVICECHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x18167150)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVELOCALIZATIONCHANGENOTIFY_OFFSET UNITYSDK_OFFSET(0x18167000)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYSAVEDEFAULTFONTSIZE_OFFSET UNITYSDK_OFFSET(0x1816B9B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UNITYENGINE_UI_EXTENSION_ISETTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1816ABF0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET UNITYSDK_OFFSET(0x18163450)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UPDATERAWTEXT_OFFSET UNITYSDK_OFFSET(0x18165740)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1816C7A0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1816C5C0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__MODIFY_G__INDEXTOVERTEXINDEX_16_0_OFFSET UNITYSDK_OFFSET(0x18163210)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1816C800)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1816C990)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1816CA20)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_FONTTEXTURECHANGED_OFFSET UNITYSDK_OFFSET(0x1816CAB0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_GET_PREFERREDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1816CAC0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x1816CAD0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1816C970)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1816C890)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1816C940)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1816C950)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_REBUILD_OFFSET UNITYSDK_OFFSET(0x1816CAE0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1816CAF0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1816C960)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x1816C980)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_START_OFFSET UNITYSDK_OFFSET(0x1816CB00)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_TEXTHIDE_OFFSET UNITYSDK_OFFSET(0x1816CB90)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_TypeDefinitionIndex = 60553;

	class UILocalizationText : public ::UnityEngine::UI::Text
	{
	public:
		static ::UnityEngine::Material** StaticGet_sharedFontMaterial()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x438D0);
		}
		static ::System::Int32* StaticGet__BoldnessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x11130);
		}
		static ::System::Int32* StaticGet__SharpnessID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x11134);
		}
		static ::System::Boolean* StaticGet_disableFontBrushOptimize()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x11138);
		}
		static ::System::Boolean* StaticGet_EnableRubyFeature()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x11139);
		}
		static ::System::Boolean* StaticGet_s_LessFontTextCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILocalizationText_TypeDefinitionIndex)->GetStaticField(0x1113A);
		}
		// static const ::System::String* Color; // 0x0
		::System::Boolean EnableRuby; // 0x138
		::System::Single RubyFontScale; // 0x13C
		::System::Single RubyHeightOffset; // 0x140
		::UnityEngine::UI::Extension::RubyString* rubyCache; // 0x148
		::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>* _rubyInfos; // 0x150
		::UnityEngine::TextGenerator* m_TextCacheForRuby; // 0x158
		::UnityEngine::TextGenerator* m_TextCacheForRubyRawText; // 0x160
		::Il2CppArray<::UnityEngine::UIVertex>* tempVerts; // 0x168
		::System::String* EditorText; // 0x170
		::System::String* _key; // 0x178
		::UnityEngine::UI::Extension::UITextPluginFormat* _formatPlugin; // 0x180
		::System::Boolean _dynamicSetByCode; // 0x188
		::System::Boolean keepFont; // 0x189
		::System::Boolean unTranslate; // 0x18A
		::System::Collections::Generic::List_1<::MoleMole::LanguageType>* keepFont_LangType; // 0x190
		::System::Boolean keepScFontInCn; // 0x198
		::System::Boolean Good; // 0x199
		::System::Boolean enableAutoAdjustText; // 0x19A
		::System::Boolean autoEllipsis; // 0x19B
		::System::Int32 maxLineLimit; // 0x19C
		::System::String* fontSizeAdaptiveID; // 0x1A0
		::System::Boolean EnableAligmentPref; // 0x1A8
		::System::Boolean EnableChineseContinueCheck; // 0x1A9
		::System::Boolean IconAsChineseCheck; // 0x1AA
		::System::Int32 ChineseContinueCount; // 0x1AC
		::System::Boolean EnableResizeBestFitFontSize; // 0x1B0
		::System::Boolean DisableAutoFontSize; // 0x1B1
		::System::Boolean UseRawHeight; // 0x1B2
		::System::Boolean UseListenScale; // 0x1B3
		::System::Int32 _brushOptimizeForFontSize; // 0x1B4
		::System::Boolean MobileDisableLightFont; // 0x1B8
		::System::Boolean NotMobileDisableLightFont; // 0x1B9
		::System::Boolean OverrideLightFontSize; // 0x1BA
		::System::Int32 NoMobileOVerrideLightFontSize; // 0x1BC
		::System::Int32 MobileOVerrideLightFontSize; // 0x1C0
		::UnityEngine::UI::Extension::ETextFontBrushOption _fontBrushOption; // 0x1C4
		::System::Single _boldness; // 0x1C8
		::System::Single _sharpness; // 0x1CC
		::System::Func_1<::System::String*>* _textFunc; // 0x1D0
		::System::Boolean _isKeyRefreshed; // 0x1D8
		::System::Boolean _isRegisterLocalizationChangeNotify; // 0x1D9
		::System::Boolean _isRegisterInputDeviceChangeNotify; // 0x1DA
		::System::Boolean _isRefisterFontSettingNotify; // 0x1DB
		::UnityEngine::Vector3 _cacheLossyScale; // 0x1DC
		::MoleMole::MaxHeightPopText* _maxHeightPopText; // 0x1E8
		::System::Boolean _MaxLineReached_k__BackingField; // 0x1F0
		::System::Nullable_1<::UnityEngine::TextAnchor> _defaultAnchor; // 0x1F4
		::MoleMole::LanguageType _curLanguageType; // 0x1FC
		::Enum_3_219B2CD5FA4A8100 _curLanFontStyle; // 0x200
		::System::Boolean _fontOptActive; // 0x204
		::System::Boolean _isAutoChange; // 0x205
		::System::Boolean ForceChange; // 0x206
		::System::String* _rawText; // 0x208
		::System::String* _adjustedText; // 0x210
		::UnityEngine::Vector2 _adjustedContextSize; // 0x218
		::System::Single _adjustedForPixelsPerUnit; // 0x220
		::System::Int32 _adjustedForMinFontSize; // 0x224
		::System::Boolean _richTagExtracted; // 0x228
		::System::Boolean _isGrey; // 0x229
		::UnityEngine::Color _defaultColor; // 0x22C
		::System::Single _noBreakWordFitWidth; // 0x23C
		::System::Int32 _noBreakWordFontSizeMax; // 0x240
		::System::Int32 _bestFitSizeInCalculateLayout; // 0x244
		::System::Single _bestFitNoBreakWordFitWidth; // 0x248
		::Struct_2_BBD1842F08605895 _typesetMarksRef; // 0x250
		::UnityEngine::UI::Extension::UITextBestFitSpec _fontBestFit; // 0x258
		::Struct_2_26263C70D2BDDAC8 _typesetLock; // 0x268
		::UnityEngine::UI::Extension::UILocalizationText_EDeferMarkDirtyReq _deferMarkDirty; // 0x26C
		::UnityEngine::UI::Extension::UITextFontDataRuntimeEdit _fontDataEdit; // 0x270
		::System::Collections::Generic::List_1<::System::String*>* _RelatedKeys_k__BackingField; // 0x278
		::System::Action_2<::System::String*, ::System::String*>* _onKeyChanged; // 0x280
		::UnityEngine::UI::Extension::UILocalizationText_PreferredCache preferredCache; // 0x288
		::UnityEngine::UI::Extension::UILocalizationText_PreferredCache muteNoWordBreakPreferredCache; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__CCTOR_OFFSET))();
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForRuby()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_CACHEDTEXTGENERATORFORRUBY_OFFSET))(this);
		}

		::UnityEngine::TextGenerator* get_cachedTextGeneratorForRubyRawText()
		{
			return ((::UnityEngine::TextGenerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_CACHEDTEXTGENERATORFORRUBYRAWTEXT_OFFSET))(this);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Single ExRubyPreferedHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_EXRUBYPREFEREDHEIGHT_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MODIFYMESH_OFFSET))(this, verts);
		}

		::System::Void Modify(::UnityEngine::UI::VertexHelper* verts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MODIFY_OFFSET))(this, verts);
		}

		::System::Void RegisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}

		::System::Void UnregisterMeshModifierForGraphic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UNREGISTERMESHMODIFIERFORGRAPHIC_OFFSET))(this);
		}

		::System::Boolean TextHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TEXTHIDE_OFFSET))(this);
		}

		::System::Void GenerateOnlyKey(::System::Boolean skipAttention)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GENERATEONLYKEY_OFFSET))(this, skipAttention);
		}

		::System::Boolean get_IsFontMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ISFONTMATERIAL_OFFSET))(this);
		}

		::System::Single get_Boldness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_BOLDNESS_OFFSET))(this);
		}

		::System::Single get_Sharpness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_SHARPNESS_OFFSET))(this);
		}

		::System::Boolean get_IsBoldnessOrSharpnessValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ISBOLDNESSORSHARPNESSVALID_OFFSET))(this);
		}

		::System::Boolean get_BoldnessOrSharpnessEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_BOLDNESSORSHARPNESSENABLED_OFFSET))(this);
		}

		::System::Boolean get_EnableRegisterInputDeviceChangeNotify()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_ENABLEREGISTERINPUTDEVICECHANGENOTIFY_OFFSET))(this);
		}

		::System::String* get_Key()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_KEY_OFFSET))(this, value);
		}

		::System::String* get_text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_TEXT_OFFSET))(this, value);
		}

		::System::Void SetText(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_OFFSET))(this, value);
		}

		::System::Void SetText_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_1_OFFSET))(this, value);
		}

		::System::Void SetText_2(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_2_OFFSET))(this, value);
		}

		::System::Single get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Single get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Boolean get_DynamicSetByCode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_DYNAMICSETBYCODE_OFFSET))(this);
		}

		::System::Boolean get_MaxLineReached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_MAXLINEREACHED_OFFSET))(this);
		}

		::System::Void set_MaxLineReached(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_MAXLINEREACHED_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_RelatedKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GET_RELATEDKEYS_OFFSET))(this);
		}

		::System::Void set_RelatedKeys(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SET_RELATEDKEYS_OFFSET))(this, value);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetConfigAdaptedFontSize()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETCONFIGADAPTEDFONTSIZE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetConfigDefaultFontSize()
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETCONFIGDEFAULTFONTSIZE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetFontSizeForRender(::System::Boolean muteNoWordBreak)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETFONTSIZEFORRENDER_OFFSET))(this, muteNoWordBreak);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REBUILD_OFFSET))(this, update);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnConfigChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONCONFIGCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONDISABLE_OFFSET))(this);
		}

		::System::Void TryRegisterLocalizationChangeNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERLOCALIZATIONCHANGENOTIFY_OFFSET))(this);
		}

		::System::Void TryRemoveLocalizationChangeNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVELOCALIZATIONCHANGENOTIFY_OFFSET))(this);
		}

		::System::Void TryRegisterInputDeviceChangeNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERINPUTDEVICECHANGENOTIFY_OFFSET))(this);
		}

		::System::Void TryRegisterFontSettingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREGISTERFONTSETTINGNOTIFY_OFFSET))(this);
		}

		::System::Void TryRemoveInputDeviceChangeNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVEINPUTDEVICECHANGENOTIFY_OFFSET))(this);
		}

		::System::Void TryRemoveFontSettingNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREMOVEFONTSETTINGNOTIFY_OFFSET))(this);
		}

		::System::Void OnKeyBindingUpdated(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONKEYBINDINGUPDATED_OFFSET))(this, args);
		}

		::System::Void OnRefreshKeyPanel(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONREFRESHKEYPANEL_OFFSET))(this, args);
		}

		::System::Void OnInputDeviceChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONINPUTDEVICECHANGED_OFFSET))(this, args);
		}

		::System::String* GetTextFuncResult()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETTEXTFUNCRESULT_OFFSET))(this);
		}

		::System::Void TextMapTemplateMapOnOnGetStringText(::System::String* key, ::System::String* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TEXTMAPTEMPLATEMAPONONGETSTRINGTEXT_OFFSET))(this, key, result);
		}

		::System::Void OnUILayoutPlatformChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONUILAYOUTPLATFORMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnFontSettingChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONFONTSETTINGCHANGE_OFFSET))(this, args);
		}

		::System::Void SetArgs(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETARGS_OFFSET))(this, args);
		}

		::System::Void SetKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEY_OFFSET))(this, key);
		}

		::System::Void SetTextFunc(::System::Func_1<::System::String*>* textFunc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXTFUNC_OFFSET))(this, textFunc);
		}

		::System::Void SetKeepFont(::System::Boolean isKeep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEEPFONT_OFFSET))(this, isKeep);
		}

		::System::Void SetKey_1(::System::String* key, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETKEY_1_OFFSET))(this, key, args);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETEMPTY_OFFSET))(this);
		}

		::System::Void SetLanguageFont(::MoleMole::LanguageType languageType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETLANGUAGEFONT_OFFSET))(this, languageType);
		}

		::System::Void SetGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETGREY_OFFSET))(this, isGrey);
		}

		::System::Void OnLocalizationChange(::MoleMole::LanguageType lanType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONLOCALIZATIONCHANGE_OFFSET))(this, lanType);
		}

		::System::Void RefreshByTextFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHBYTEXTFUNC_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_INITREFRESH_OFFSET))(this);
		}

		::System::Void LockTextAdjustResult(::System::Boolean enableLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_LOCKTEXTADJUSTRESULT_OFFSET))(this, enableLock);
		}

		::System::Void ResetTextAdjustResultLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_RESETTEXTADJUSTRESULTLOCK_OFFSET))(this);
		}

		::System::Boolean IsKeepFont()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ISKEEPFONT_OFFSET))(this);
		}

		::System::Boolean ChangeFontIfNeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CHANGEFONTIFNEED_OFFSET))(this);
		}

		::System::Void RefreshInEditor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHINEDITOR_OFFSET))(this);
		}

		::System::Void RefreshKey(::System::Boolean ignoreError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHKEY_OFFSET))(this, ignoreError);
		}

		::System::Void Refresh(::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESH_OFFSET))(this, args);
		}

		::System::Void UnityEngine_UI_Extension_ISetText_SetText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UNITYENGINE_UI_EXTENSION_ISETTEXT_SETTEXT_OFFSET))(this, value);
		}

		::System::Void SetText_3(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETTEXT_3_OFFSET))(this, value);
		}

		::System::Void UpdateRawText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_UPDATERAWTEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*> GetRichTagRequireInfo()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::Collections::Generic::List_1<::Struct_2_97F90E6FB4F6D559>*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETRICHTAGREQUIREINFO_OFFSET))(this);
		}

		::System::Void TryRebuildAdjustedText(::System::Boolean shouldApplyModification)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET))(this, shouldApplyModification);
		}

		::System::Void MarkTextAdjustDirty(::System::Boolean resetFontSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MARKTEXTADJUSTDIRTY_OFFSET))(this, resetFontSize);
		}

		::System::Single CalculateTextPreferredWidth(::System::Boolean useRawText, ::UnityEngine::UI::Extension::ETextFontBestFitPrefer bestFitPrefer, ::System::Boolean muteNoWordBreak)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::Extension::ETextFontBestFitPrefer, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_CALCULATETEXTPREFERREDWIDTH_OFFSET))(this, useRawText, bestFitPrefer, muteNoWordBreak);
		}

		::System::String* ReplaceTypesettingMarks(::System::String* inStr)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REPLACETYPESETTINGMARKS_OFFSET))(this, inStr);
		}

		::System::Void ApplyFontSizeConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_APPLYFONTSIZECONFIG_OFFSET))(this);
		}

		::System::Void ResetDefaultFontSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_RESETDEFAULTFONTSIZE_OFFSET))(this);
		}

		::System::Void TrySaveDefaultFontSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_TRYSAVEDEFAULTFONTSIZE_OFFSET))(this);
		}

		::System::Boolean IsTextAdjustActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ISTEXTADJUSTACTIVATED_OFFSET))(this);
		}

		::System::Void RefreshFontParameters(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHFONTPARAMETERS_OFFSET))(this, force);
		}

		::System::Boolean FontBrushOptimizeEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_FONTBRUSHOPTIMIZEENABLED_OFFSET))(this);
		}

		::System::Void DestroySharedFontMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DESTROYSHAREDFONTMATERIAL_OFFSET))(this);
		}

		::System::Void ManualRefreshSharedMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_MANUALREFRESHSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void SetSharedMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_SETSHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void OnSharpnessChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONSHARPNESSCHANGED_OFFSET))(this);
		}

		::System::Void OnBoldnessChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONBOLDNESSCHANGED_OFFSET))(this);
		}

		::System::Void OnFontStyleChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONFONTSTYLECHANGED_OFFSET))(this);
		}

		::System::Void StartProcessVertex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_STARTPROCESSVERTEX_OFFSET))(this);
		}

		::System::Void EndProcessVertex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ENDPROCESSVERTEX_OFFSET))(this);
		}

		::Enum_3_219B2CD5FA4A8100 GetProperLanguageFontStyle(::System::Boolean checkBestFit)
		{
			return ((::Enum_3_219B2CD5FA4A8100(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETPROPERLANGUAGEFONTSTYLE_OFFSET))(this, checkBestFit);
		}

		::System::Void RefreshAdjustLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_REFRESHADJUSTLAYOUT_OFFSET))(this);
		}

		::System::Void FontTextureChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_FONTTEXTURECHANGED_OFFSET))(this);
		}

		::System::Void OnApplyFontSizeConfig(::MoleMole::Config::LanguageFontSizeConfig& config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LanguageFontSizeConfig&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ONAPPLYFONTSIZECONFIG_OFFSET))(this, config);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_START_OFFSET))(this);
		}

		::System::Void EnableUIVertexColorCalc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_DOCOPYRESET_OFFSET))(this);
		}

		::System::Single GetForceMaxHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_GETFORCEMAXHEIGHT_OFFSET))(this);
		}

		::System::Int32 _Modify_g__IndexToVertexIndex_16_0(::System::Int32 charIndex, ::UnityEngine::UI::Extension::UILocalizationText___c__DisplayClass16_0& a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::UI::Extension::UILocalizationText___c__DisplayClass16_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT__MODIFY_G__INDEXTOVERTEXINDEX_16_0_OFFSET))(this, charIndex, a2);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
		}

		::System::Void __base_SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_set_text(::System::String* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SET_TEXT_OFFSET))(this, P0);
		}

		::System::Void __base_CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void __base_CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void __base_FontTextureChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_FONTTEXTURECHANGED_OFFSET))(this);
		}

		::System::Single __base_get_preferredHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_GET_PREFERREDHEIGHT_OFFSET))(this);
		}

		::System::Single __base_get_preferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Void __base_Rebuild(::UnityEngine::UI::CanvasUpdate P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_REBUILD_OFFSET))(this, P0);
		}

		::System::Void __base_SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_START_OFFSET))(this);
		}

		::System::Boolean __base_TextHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT___BASE_TEXTHIDE_OFFSET))(this);
		}
	};
}
