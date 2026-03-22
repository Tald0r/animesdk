#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/PureFunctionNode_2.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE_INVOKE_OFFSET UNITYSDK_OFFSET(0xE4805F0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE__CTOR_OFFSET UNITYSDK_OFFSET(0xE480680)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_GetLevelTimerPause_TypeDefinitionIndex = 44519;

	class LD_GetLevelTimerPause : public ::FlowCanvas::Nodes::PureFunctionNode_2<::System::Boolean, ::System::String*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* timerKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_GETLEVELTIMERPAUSE_INVOKE_OFFSET))(this, timerKey);
		}
	};
}
