#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoLevelResultPageConfig_DelayType.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController.h"
#include "unitysdk/MoleMole/UIHollowLayerResultPageV2PopWindowController_RankDataItem.h"
#include "unitysdk/MoleMole/UIHollowResultInfoRowNewWidgetController_RowData.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_5_F7314AB7E8654428;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralExpProgressWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_2_DC53EEBA655ABAC1;

#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EXPLEVELMAP_OFFSET UNITYSDK_OFFSET(0xABBB6D0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAINEXP_OFFSET UNITYSDK_OFFSET(0xABBBA30)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xABBA540)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xABBA4A0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xABBA7E0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_1_OFFSET UNITYSDK_OFFSET(0xABBBEE0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_OFFSET UNITYSDK_OFFSET(0xABBBE10)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xABB9D20)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_OPENEXPWIDGET_OFFSET UNITYSDK_OFFSET(0xABB9F50)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0xABBAB20)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ROWDATA_OFFSET UNITYSDK_OFFSET(0xABBA6A0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xABBC070)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xABBC080)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0xABBC0B0)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xABBC110)
#define MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0xABBC120)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootResultPageController_TypeDefinitionIndex = 74464;

	class UITriggerShootResultPageController : public ::MoleMole::UIHollowLayerResultPageV2PopWindowController
	{
	public:
		::MoleMole::UIGeneralExpProgressWidgetController* _expWidget; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETMISSIONLIST_OFFSET))(this);
		}

		static ::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData RowData(::System::String* key, ::System::String* value)
		{
			return ((::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ROWDATA_OFFSET))(key, value);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		static ::Class_5_F7314AB7E8654428* GameContext()
		{
			return ((::Class_5_F7314AB7E8654428*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAMECONTEXT_OFFSET))();
		}

		::System::Void OpenExpWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_OPENEXPWIDGET_OFFSET))(this);
		}

		::System::Void OnFadeInAnimEvent(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_OFFSET))(this, args);
		}

		::System::Void OnFadeInAnimEvent_1(::Class_2_DC53EEBA655ABAC1<::MoleMole::MonoLevelResultPageConfig_DelayType, ::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DC53EEBA655ABAC1<::MoleMole::MonoLevelResultPageConfig_DelayType, ::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_ONFADEINANIMEVENT_1_OFFSET))(this, args);
		}

		::System::Int32 GainExp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_GAINEXP_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* ExpLevelMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER_EXPLEVELMAP_OFFSET))();
		}

		::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32> __base_GetMissionList()
		{
			return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::MoleMole::UIHollowLayerResultPageV2PopWindowController_RankDataItem>*, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>* __base_GetOverrideMissionList()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHollowResultInfoRowNewWidgetController_RowData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_GETOVERRIDEMISSIONLIST_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTRESULTPAGECONTROLLER___BASE_REFRESHREWARDVIEW_OFFSET))(this);
		}
	};
}
