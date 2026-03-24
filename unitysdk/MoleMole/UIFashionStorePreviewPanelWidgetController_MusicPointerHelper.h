#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_106;
class Class_1_48D56DACBE4271BC;
class Class_1_EDF4DCFB9AF1C323;
class Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C;
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
template <typename T> class Class_0_16E4307DCC419505_95;
template <typename T> class Class_0_16E4307DCC41950C_12;

#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_CURTIMETOPOINTERPOS_OFFSET UNITYSDK_OFFSET(0x9101D60)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_INIT_OFFSET UNITYSDK_OFFSET(0x9101390)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_ONPOINTERPOSDRAG_OFFSET UNITYSDK_OFFSET(0x9101F70)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_POINTERPOSTOCURTIME_OFFSET UNITYSDK_OFFSET(0x91022F0)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATEPOINTERPOS_OFFSET UNITYSDK_OFFSET(0x9101B10)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9101A90)
#define MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x91011E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStorePreviewPanelWidgetController_MusicPointerHelper_TypeDefinitionIndex = 79952;

	class UIFashionStorePreviewPanelWidgetController_MusicPointerHelper : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_95<::System::Single>* _scrollViewStartTime; // 0x10
		::Class_1_EDF4DCFB9AF1C323* _propertyAllocateHelper; // 0x18
		::Class_0_16E4307DCC41950C_12<::System::Single>* _timePerItem; // 0x20
		::UnityEngine::RectTransform* _pointerRoot; // 0x28
		::Class_1_48D56DACBE4271BC* _propertySyncHelper; // 0x30
		::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* _fashionStoreData; // 0x38
		::Class_0_16E4307DCC41950C_12<::System::Single>* _sizePerItem; // 0x40
		::System::Boolean _pointerPosDirty; // 0x48

		::System::Void _ctor(::Class_0_16E4307DCC419505_106* autoDisposePool)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_106*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER__CTOR_OFFSET))(this, autoDisposePool);
		}

		::System::Void Init(::UnityEngine::RectTransform* pointerRoot, ::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C* fashionStoreData, ::Class_0_16E4307DCC419505_95<::System::Single>* sizePerItem, ::Class_0_16E4307DCC419505_95<::System::Single>* timePerItem, ::Class_0_16E4307DCC419505_95<::System::Single>* scrollViewStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::Class_2_6C100683412065D7_Class_0_16E7307DCC43CB2C*, ::Class_0_16E4307DCC419505_95<::System::Single>*, ::Class_0_16E4307DCC419505_95<::System::Single>*, ::Class_0_16E4307DCC419505_95<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_INIT_OFFSET))(this, pointerRoot, fashionStoreData, sizePerItem, timePerItem, scrollViewStartTime);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATE_OFFSET))(this);
		}

		::System::Boolean UpdatePointerPos()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_UPDATEPOINTERPOS_OFFSET))(this);
		}

		::System::Void OnPointerPosDrag(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_ONPOINTERPOSDRAG_OFFSET))(this, eventData);
		}

		::System::Single CurTimeToPointerPos(::System::Single curTime, ::System::Single scrollViewStartTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_CURTIMETOPOINTERPOS_OFFSET))(this, curTime, scrollViewStartTime);
		}

		::System::Single PointerPosToCurTime(::System::Single pointerPosX, ::System::Single scrollViewStartTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREPREVIEWPANELWIDGETCONTROLLER_MUSICPOINTERHELPER_POINTERPOSTOCURTIME_OFFSET))(this, pointerPosX, scrollViewStartTime);
		}
	};
}
