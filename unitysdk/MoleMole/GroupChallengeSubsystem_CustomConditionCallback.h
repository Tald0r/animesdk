#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xD80E7E0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xD80E830)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xD80E4F0)
#define MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD80E4D0)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeSubsystem_CustomConditionCallback_TypeDefinitionIndex = 75646;

	class GroupChallengeSubsystem_CustomConditionCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_INVOKE_OFFSET))(this, arg);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 arg, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_BEGININVOKE_OFFSET))(this, arg, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGESUBSYSTEM_CUSTOMCONDITIONCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
