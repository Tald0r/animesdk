#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeGraph/GraphTask.h"

namespace System { class EventArgs; }

#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ENDHANDLE_OFFSET UNITYSDK_OFFSET(0xA122AD0)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA122790)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_ONSTART_OFFSET UNITYSDK_OFFSET(0xA122430)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK_STARTHANDLE_OFFSET UNITYSDK_OFFSET(0xA122BD0)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA122DB0)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA122E40)
#define NODEGRAPH_MAINCITY_PERFORMPAUSETASK___BASE_ONSTART_OFFSET UNITYSDK_OFFSET(0xA122EA0)

namespace NodeGraph::MainCity
{
	inline static constexpr unsigned int PerformPauseTask_TypeDefinitionIndex = 65842;

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
