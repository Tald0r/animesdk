#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Share/EAvatarSkillType.h"

class Class_2_208CC9941471731A_711;
class Class_2_72D2E63B32BDB80C;
class Class_2_D89CCC627A66D0AD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISkillRecommendRowWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GETSKILLASSETPATH_OFFSET UNITYSDK_OFFSET(0xAE0E7E0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xAE0D060)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAE0D050)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_INITSKILLICON_OFFSET UNITYSDK_OFFSET(0xAE0D750)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE0E9B0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONLEFTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xAE0DFA0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONRIGHTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xAE0DA10)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE0EA50)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE0D070)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAE0E020)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHSKILLICON_OFFSET UNITYSDK_OFFSET(0xAE0E4E0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHSKILLROW_OFFSET UNITYSDK_OFFSET(0xAE0DAA0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xAE0E200)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAE0EAE0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAE0ECA0)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAE0ED10)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAE0ED20)
#define MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAE0ED30)

namespace MoleMole
{
	inline static constexpr unsigned int UISkillRecommendPopWindowController_TypeDefinitionIndex = 41055;

	class UISkillRecommendPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_72D2E63B32BDB80C* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* _rowFirst; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* _rowSecond; // 0x308
		::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* _rowThird; // 0x310
		::Class_2_D89CCC627A66D0AD* _avatarItemData; // 0x318
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_711*>* _skillRecoList; // 0x320
		::Class_2_208CC9941471731A_711* _currentSkillRecoCfg; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::AssetPath>* talentIconDir; // 0x330
		::System::Int32 _currentIndex; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnRightClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONRIGHTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnLeftClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONLEFTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void InitSkillIcon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_INITSKILLICON_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshSkillRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHSKILLROW_OFFSET))(this);
		}

		::System::Void RefreshSkillIcon(::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>* _rowList, ::System::Collections::Generic::List_1<::System::Int32>* skillArr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UISkillRecommendRowWidgetController*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_REFRESHSKILLICON_OFFSET))(this, _rowList, skillArr);
		}

		::Foundation::AssetPath GetSkillAssetPath(::Share::EAvatarSkillType skillType)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::Share::EAvatarSkillType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_GETSKILLASSETPATH_OFFSET))(this, skillType);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISKILLRECOMMENDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
