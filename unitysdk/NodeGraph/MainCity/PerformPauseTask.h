#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphTask.h"

namespace System { class EventArgs; }

#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ENDHANDLE_OFFSET UNITYSDK_OFFSET(0x76E9030)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x76E8CF0)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONSTART_OFFSET UNITYSDK_OFFSET(0x76E8990)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_STARTHANDLE_OFFSET UNITYSDK_OFFSET(0x76E9130)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK__CTOR_OFFSET UNITYSDK_OFFSET(0x76E9310)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x76E93A0)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0x76E9400)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int PerformPauseTask_TypeDefinitionIndex = 68769;

	class PerformPauseTask : public ::NodeGraph::GraphTask
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK__CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONSTART_OFFSET))(this);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONCLEAR_OFFSET))(this);
		}

		::System::Void EndHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ENDHANDLE_OFFSET))(this, obj);
		}

		::System::Void StartHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK_STARTHANDLE_OFFSET))(this, obj);
		}

		::System::Void __base_OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONCLEAR_OFFSET))(this);
		}

		::System::Void __base_OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONSTART_OFFSET))(this);
		}
	};
}
