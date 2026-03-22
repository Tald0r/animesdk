#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_3_10F339609BE79763_1;

#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x8F179A0)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x8F179E0)
#define MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x8F179B0)

namespace MoleMole
{
	inline static constexpr unsigned int ItemDeprecatedDialogMessage_TypeDefinitionIndex = 49828;

	class ItemDeprecatedDialogMessage : public ::MoleMole::DisplayMessageBase
	{
	public:
		::Class_3_10F339609BE79763_1* _newItem; // 0x28
		::Class_3_10F339609BE79763_1* _oldItem; // 0x30

		::System::Void _ctor(::Class_3_10F339609BE79763_1* oldItem, ::Class_3_10F339609BE79763_1* newItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_10F339609BE79763_1*, ::Class_3_10F339609BE79763_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE__CTOR_OFFSET))(this, oldItem, newItem);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ITEMDEPRECATEDDIALOGMESSAGE_ONPROCESS_OFFSET))(this);
		}
	};
}
