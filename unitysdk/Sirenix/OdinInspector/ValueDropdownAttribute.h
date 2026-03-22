#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1AB0B040)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x1AB0B050)
#define SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB0B060)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValueDropdownAttribute_TypeDefinitionIndex = 7243;

	class ValueDropdownAttribute : public ::System::Attribute
	{
	public:
		::System::String* DropdownTitle; // 0x10
		::System::String* ValuesGetter; // 0x18
		::System::Boolean HideChildProperties; // 0x20
		::System::Boolean AppendNextDrawer; // 0x21
		::System::Boolean DisableListAddButtonBehaviour; // 0x22
		::System::Boolean FlattenTreeView; // 0x23
		::System::Boolean ExpandAllMenuItems; // 0x24
		::System::Boolean DrawDropdownForListElements; // 0x25
		::System::Boolean DisableGUIInAppendedDrawer; // 0x26
		::System::Int32 NumberOfItemsBeforeEnablingSearch; // 0x28
		::System::Int32 DropdownWidth; // 0x2C
		::System::Int32 DropdownHeight; // 0x30
		::System::Boolean ExcludeExistingValuesInList; // 0x34
		::System::Boolean DoubleClickToConfirm; // 0x35
		::System::Boolean IsUniqueList; // 0x36
		::System::Boolean SortDropdownItems; // 0x37

		::System::Void _ctor(::System::String* valuesGetter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE__CTOR_OFFSET))(this, valuesGetter);
		}

		::System::String* get_MemberName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_GET_MEMBERNAME_OFFSET))(this);
		}

		::System::Void set_MemberName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_VALUEDROPDOWNATTRIBUTE_SET_MEMBERNAME_OFFSET))(this, value);
		}
	};
}
