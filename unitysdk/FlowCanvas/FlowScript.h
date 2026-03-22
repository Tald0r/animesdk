#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowScriptBase.h"

#define FLOWCANVAS_FLOWSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A176C10)

namespace FlowCanvas
{
	inline static constexpr unsigned int FlowScript_TypeDefinitionIndex = 25307;

	class FlowScript : public ::FlowCanvas::FlowScriptBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_FLOWSCRIPT__CTOR_OFFSET))(this);
		}
	};
}
