#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_MODIFYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C8BA0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ModifyItem_TypeDefinitionIndex = 54487;

	class ModifyItem : public ::System::Object
	{
	public:
		::System::String* item; // 0x10
		::System::Int32 count; // 0x18
		::System::Single ratio; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_MODIFYITEM__CTOR_OFFSET))(this);
		}
	};
}
