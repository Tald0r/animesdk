#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_EDF4DCFB9AF1C323;
class Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0;
namespace System { template <typename T> class Action_1; }
template <typename T> class Class_0_16E4307DCC419505_118;

#define MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_KEYBOARDDATAS_OFFSET UNITYSDK_OFFSET(0xD120A80)
#define MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD120A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreTrackSelectDialogPopWindowController_Context_TypeDefinitionIndex = 37918;

	class UIFashionStoreTrackSelectDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0*>* OnClickItemCallback; // 0x28
		::Class_0_16E4307DCC419505_118<::Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0*>* _KeyBoardDatas_k__BackingField; // 0x30
		::Class_1_EDF4DCFB9AF1C323* _propertyAllocateHelper; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_118<::Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0*>* get_KeyBoardDatas()
		{
			return ((::Class_0_16E4307DCC419505_118<::Class_2_6C100683412065D7_Class_2_64BF5C9CD45A0BD0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTORETRACKSELECTDIALOGPOPWINDOWCONTROLLER_CONTEXT_GET_KEYBOARDDATAS_OFFSET))(this);
		}
	};
}
