#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C;
class Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0;
class Class_2_6C100683412065D7_Class_2_9092C869224DF735;
class Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_MUSICROWDATA_OFFSET UNITYSDK_OFFSET(0xCAB3570)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_SOTREDATA_OFFSET UNITYSDK_OFFSET(0xCAB3590)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_TRACKDATA_OFFSET UNITYSDK_OFFSET(0xCAB35B0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_MUSICROWDATA_OFFSET UNITYSDK_OFFSET(0xCAB3580)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_SOTREDATA_OFFSET UNITYSDK_OFFSET(0xCAB35A0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_TRACKDATA_OFFSET UNITYSDK_OFFSET(0xCAB35C0)
#define MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA__CTOR_OFFSET UNITYSDK_OFFSET(0xCAB35D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreMusicRowWidgetController_Data_TypeDefinitionIndex = 61520;

	class UIFashionStoreMusicRowWidgetController_Data : public ::System::Object
	{
	public:
		::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* _SotreData_k__BackingField; // 0x10
		::System::Action_1<::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D*>* OnClickDeleteTrackButtonCallback; // 0x18
		::System::Action_2<::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D*, ::Class_2_6C100683412065D7_Class_2_9092C869224DF735*>* OnClickEditTrackButtonCallback; // 0x20
		::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D* _TrackData_k__BackingField; // 0x28
		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* _MusicRowData_k__BackingField; // 0x30
		::System::Action_1<::Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0*>* OnClickAddTrackButtonCallback; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA__CTOR_OFFSET))(this);
		}

		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* get_MusicRowData()
		{
			return ((::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_MUSICROWDATA_OFFSET))(this);
		}

		::System::Void set_MusicRowData(::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_MUSICROWDATA_OFFSET))(this, value);
		}

		::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* get_SotreData()
		{
			return ((::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_SOTREDATA_OFFSET))(this);
		}

		::System::Void set_SotreData(::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_SOTREDATA_OFFSET))(this, value);
		}

		::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D* get_TrackData()
		{
			return ((::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_GET_TRACKDATA_OFFSET))(this);
		}

		::System::Void set_TrackData(::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREMUSICROWWIDGETCONTROLLER_DATA_SET_TRACKDATA_OFFSET))(this, value);
		}
	};
}
