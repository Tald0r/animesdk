#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTAttribute.h"

namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_GET_PATHISABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1A80BAD0)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1A80BA20)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_SET_PATHISABSOLUTE_OFFSET UNITYSDK_OFFSET(0x1A80BAE0)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1A80BA30)
#define FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A800110)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int GroupAttribute_TypeDefinitionIndex = 25304;

	class GroupAttribute : public ::FluffyUnderware::DevTools::DTAttribute
	{
	public:
		::System::String* mPath; // 0x20
		::System::String* HelpURL; // 0x28
		::System::String* Tooltip; // 0x30
		::System::String* Label; // 0x38
		::System::Boolean Expanded; // 0x40
		::System::Boolean _PathIsAbsolute_k__BackingField; // 0x41
		::System::Boolean Invisible; // 0x42

		::System::Void _ctor(::System::String* pathAndName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE__CTOR_OFFSET))(this, pathAndName);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_SET_PATH_OFFSET))(this, value);
		}

		::System::Boolean get_PathIsAbsolute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_GET_PATHISABSOLUTE_OFFSET))(this);
		}

		::System::Void set_PathIsAbsolute(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_GROUPATTRIBUTE_SET_PATHISABSOLUTE_OFFSET))(this, value);
		}
	};
}
