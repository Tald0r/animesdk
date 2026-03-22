#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFashionStorePreviewPanelWidgetController_NotePlayHelper.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_0_16E4307DCC419505_100;
class Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C;
class Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D;
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController_MusicRowData; }
template <typename T> class Class_0_16E4307DCC419505_102;

#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET UNITYSDK_OFFSET(0xD051210)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0xD0512D0)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xD051200)
#define MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0xD051A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreEditPanelWidgetController_NotePlayHelper_TypeDefinitionIndex = 58689;

	class UIFashionStoreEditPanelWidgetController_NotePlayHelper : public ::MoleMole::UIFashionStorePreviewPanelWidgetController_NotePlayHelper
	{
	public:
		::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* _musicRowData; // 0x50
		::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D* _trackData; // 0x58

		::System::Void _ctor(::Class_0_16E4307DCC419505_100* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_100*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* fashionStoreData, ::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D* fashionStoreTrackData, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData* musicRowData, ::Class_0_16E4307DCC419505_102<::System::Boolean>* isShow)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C*, ::Class_2_6C100683412065D7_Class_2_97C8D60D51E8546D*, ::MoleMole::UIFashionStorePreviewPanelWidgetController_MusicRowData*, ::Class_0_16E4307DCC419505_102<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_INIT_OFFSET))(this, fashionStoreData, fashionStoreTrackData, musicRowData, isShow);
		}

		::System::Void PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> startNoteIndex, ::System::ValueTuple_2<::System::Int32, ::System::Int32> endNoteIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER_PLAYSOUND_OFFSET))(this, startNoteIndex, endNoteIndex);
		}

		::System::Void __base_PlaySound(::System::ValueTuple_2<::System::Int32, ::System::Int32> P0, ::System::ValueTuple_2<::System::Int32, ::System::Int32> P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREEDITPANELWIDGETCONTROLLER_NOTEPLAYHELPER___BASE_PLAYSOUND_OFFSET))(this, P0, P1);
		}
	};
}
