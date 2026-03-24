#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2181504E881DDEE4;
namespace MoleMole { class UIInterKnotMissionWidgetController; }

#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBCE70)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x9EBCE80)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__2_OFFSET UNITYSDK_OFFSET(0x9EBCEC0)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__3_OFFSET UNITYSDK_OFFSET(0x9EBD180)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__4_OFFSET UNITYSDK_OFFSET(0x9EBD190)
#define MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_G__SENDQUESTTRACK_1_OFFSET UNITYSDK_OFFSET(0x9EBCED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotMissionWidgetController___c__DisplayClass33_0_TypeDefinitionIndex = 56256;

	class UIInterKnotMissionWidgetController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::Class_1_2181504E881DDEE4* manual; // 0x10
		::MoleMole::UIInterKnotMissionWidgetController* __4__this; // 0x18
		::System::Boolean hasOpenMap; // 0x20
		::System::Boolean notTracked; // 0x21
		::System::Int32 mainCityQuestID; // 0x24
		::System::Int32 currentMissionID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__0_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__2_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__3_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_B__4_OFFSET))(this);
		}

		::System::Void _OnTrackBtnClickHandle_g__SendQuestTrack_1(::System::Boolean autoWorld, ::System::Boolean openMapWithTip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTMISSIONWIDGETCONTROLLER___C__DISPLAYCLASS33_0__ONTRACKBTNCLICKHANDLE_G__SENDQUESTTRACK_1_OFFSET))(this, autoWorld, openMapWithTip);
		}
	};
}
