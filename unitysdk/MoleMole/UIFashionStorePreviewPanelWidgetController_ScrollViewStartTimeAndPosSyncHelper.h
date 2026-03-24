#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_MoveContext.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_106;
class Class_1_48D56DACBE4271BC;
class Class_1_EDF4DCFB9AF1C323;
class Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C;
class MonoUITableScrollV2;
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC41950C_12;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x9103090)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x91026B0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET UNITYSDK_OFFSET(0x9103940)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET UNITYSDK_OFFSET(0x9102E50)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET UNITYSDK_OFFSET(0x9102CF0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9102C70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9102500)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper_TypeDefinitionIndex = 79950;

	class UIFashionStorePreviewPanelWidgetController_ScrollViewStartTimeAndPosSyncHelper : public ::System::Object
	{
	public:
		::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* _fashionStoreData; // 0x10
		::Class_1_EDF4DCFB9AF1C323* _propertyAllocateHelper; // 0x18
		::Class_0_16E4307DCC41950C_13<::System::Single>* _scrollViewStartTime; // 0x20
		::Class_0_16E4307DCC41950C_12<::System::Single>* _timePerItem; // 0x28
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x30
		::System::Func_1<::MonoUITableScrollV2*>* _scrollViewGetter; // 0x38
		::Class_0_16E4307DCC41950C_12<::System::Single>* _sizePerItem; // 0x40
		::System::Boolean _scrollViewStartTimeDirty; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_106* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_106*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* fashionStoreData, ::Class_0_16E4307DCC41950C_12<::System::Single>* sizePerItem, ::Class_0_16E4307DCC41950C_12<::System::Single>* timePerItem, ::Class_0_16E4307DCC41950C_13<::System::Single>* scrollViewStartTime, ::System::Func_1<::MonoUITableScrollV2*>* scrollViewGetter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C*, ::Class_0_16E4307DCC41950C_12<::System::Single>*, ::Class_0_16E4307DCC41950C_12<::System::Single>*, ::Class_0_16E4307DCC41950C_13<::System::Single>*, ::System::Func_1<::MonoUITableScrollV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_INIT_OFFSET))(this, fashionStoreData, sizePerItem, timePerItem, scrollViewStartTime, scrollViewGetter);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATE_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> ScrollViewStartTimeToScrollDelta(::System::Single newStartTime)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_SCROLLVIEWSTARTTIMETOSCROLLDELTA_OFFSET))(this, newStartTime);
		}

		::System::Nullable_1<::System::Single> CalScrollViewStartTime()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_CALSCROLLVIEWSTARTTIME_OFFSET))(this);
		}

		::System::Void OnMusicTrackMove(::MonoUITableScrollV2_MoveContext moveContext, ::System::Single currentPosition)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_MoveContext, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_ONMUSICTRACKMOVE_OFFSET))(this, moveContext, currentPosition);
		}

		::System::Boolean UpdateScrollViewStartTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_SCROLLVIEWSTARTTIMEANDPOSSYNCHELPER_UPDATESCROLLVIEWSTARTTIME_OFFSET))(this);
		}
	};
}
