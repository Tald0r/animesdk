#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_ACTIONS_SETFIELD_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19C2FF60)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetField_0_TypeDefinitionIndex = 27421;

	class SetField_0 : public ::System::Object
	{
	public:
		::System::String* fieldName; // 0x10
		::System::Type* targetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETFIELD_0__CTOR_OFFSET))(this);
		}
	};
}
