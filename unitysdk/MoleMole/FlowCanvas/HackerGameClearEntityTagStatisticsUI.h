#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI_INVOKE_OFFSET UNITYSDK_OFFSET(0xA7C8740)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C88A0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameClearEntityTagStatisticsUI_TypeDefinitionIndex = 81069;

	class HackerGameClearEntityTagStatisticsUI : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMECLEARENTITYTAGSTATISTICSUI_INVOKE_OFFSET))(this);
		}
	};
}
