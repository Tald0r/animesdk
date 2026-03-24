#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_GET_PATHS_OFFSET UNITYSDK_OFFSET(0x1B113BD0)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_SET_PATHS_OFFSET UNITYSDK_OFFSET(0x1B113A60)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B113BF0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetSelectorAttribute_TypeDefinitionIndex = 7128;

	class AssetSelectorAttribute : public ::System::Attribute
	{
	public:
		::System::String* DropdownTitle; // 0x10
		::System::String* Filter; // 0x18
		::Il2CppArray<::System::String*>* SearchInFolders; // 0x20
		::System::Int32 DropdownWidth; // 0x28
		::System::Boolean DisableListAddButtonBehaviour; // 0x2C
		::System::Boolean ExpandAllMenuItems; // 0x2D
		::System::Boolean IsUniqueList; // 0x2E
		::System::Boolean FlattenTreeView; // 0x2F
		::System::Boolean ExcludeExistingValuesInList; // 0x30
		::System::Boolean DrawDropdownForListElements; // 0x31
		::System::Int32 DropdownHeight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void set_Paths(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_SET_PATHS_OFFSET))(this, value);
		}

		::System::String* get_Paths()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE_GET_PATHS_OFFSET))(this);
		}
	};
}
