#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework { class BBParameter; }
namespace System { class String; }
namespace System { class Type; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183F5410)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckField_0_TypeDefinitionIndex = 25652;

	class CheckField_0 : public ::System::Object
	{
	public:
		::System::String* fieldName; // 0x10
		::System::Type* targetType; // 0x18
		::NodeCanvas::Framework::BBParameter* checkValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKFIELD_0__CTOR_OFFSET))(this);
		}
	};
}
