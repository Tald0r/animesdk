#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define NODECANVAS_FRAMEWORK_TASK_GETFROMAGENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFB1A0)

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Task_GetFromAgentAttribute_TypeDefinitionIndex = 26549;

	class Task_GetFromAgentAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_FRAMEWORK_TASK_GETFROMAGENTATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
