#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319.h"
#include "unitysdk/Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_1.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/MonoLevelResultPageConfig_DelayType.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

class Class_1_5DA2E7556103D5A3_288;
class Class_2_468A4FBF2E9F527C;
namespace MoleMole { class MonoLevelResultPageConfig; }
namespace MoleMole { class UIHadalZoneLayer_RankingRowWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x9E72810)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x9E72630)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x9E727B0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x9E73080)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9E739F0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__FILLCUSTOMRANKING_OFFSET UNITYSDK_OFFSET(0x9E72990)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__HADALRATINGTORATING_OFFSET UNITYSDK_OFFSET(0x9E72910)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9E72DC0)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET UNITYSDK_OFFSET(0x9E73A80)
#define MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___FILLCUSTOMRANKING_G____RANKING_7_0_OFFSET UNITYSDK_OFFSET(0x9E72A60)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_HadalResult_PopWindowController_TypeDefinitionIndex = 61428;

	class UILevel_HadalResult_PopWindowController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		// static const ::System::String* DAILY_CHALLENGE_TITLE_KEY; // 0x0
		::Class_1_5DA2E7556103D5A3_288* _nextLayer; // 0x358
		::System::Collections::Generic::List_1<::MoleMole::UIHadalZoneLayer_RankingRowWidgetController*>* _rankingRowWidgets; // 0x360
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319 GetButtonCombineState()
		{
			return ((::Class_1_87D98DA5C1AD6384_Enum_3_3DCE6AAF7E47B319(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95 GetPanelState()
		{
			return ((::Class_1_87D98DA5C1AD6384_Enum_3_A188519F532ACB95(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::MoleMole::Level::RatingType _HadalRatingToRating(::Enum_3_4608E37A1B3D374A_1 hadalRatingType)
		{
			return ((::MoleMole::Level::RatingType(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_1))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__HADALRATINGTORATING_OFFSET))(this, hadalRatingType);
		}

		::System::Void _FillCustomRanking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__FILLCUSTOMRANKING_OFFSET))(this);
		}

		::System::Void _On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType delayType, ::MoleMole::MonoLevelResultPageConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, delayType, config);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void __FillCustomRanking_g____Ranking_7_0(::MoleMole::Level::RatingType ratingType, ::System::Boolean bConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___FILLCUSTOMRANKING_G____RANKING_7_0_OFFSET))(this, ratingType, bConfirm);
		}

		::System::Void __base__On_CustomUI_Delay_Message(::MoleMole::MonoLevelResultPageConfig_DelayType P0, ::MoleMole::MonoLevelResultPageConfig* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoLevelResultPageConfig_DelayType, ::MoleMole::MonoLevelResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_HADALRESULT_POPWINDOWCONTROLLER___BASE__ON_CUSTOMUI_DELAY_MESSAGE_OFFSET))(this, P0, P1);
		}
	};
}
