#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x17FDC260)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_HASINFO_OFFSET UNITYSDK_OFFSET(0x17FDC250)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FDC290)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CallContextRemotingData_TypeDefinitionIndex = 1329;

	class CallContextRemotingData : public ::System::Object
	{
	public:
		::System::String* _logicalCallID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_GET_HASINFO_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CALLCONTEXTREMOTINGDATA_CLONE_OFFSET))(this);
		}
	};
}
