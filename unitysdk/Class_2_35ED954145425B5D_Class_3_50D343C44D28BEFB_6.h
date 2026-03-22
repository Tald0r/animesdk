#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1261E250)
#define CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1261E280)
#define CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_INVOKE_OFFSET UNITYSDK_OFFSET(0x1261DFB0)
#define CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1261DFA0)

inline static constexpr unsigned int Class_2_35ED954145425B5D_Class_3_50D343C44D28BEFB_6_TypeDefinitionIndex = 49703;

class Class_2_35ED954145425B5D_Class_3_50D343C44D28BEFB_6 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6__CTOR_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableDirector* Invoke()
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_INVOKE_OFFSET))(this);
	}

	::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_BEGININVOKE_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Playables::PlayableDirector* EndInvoke(::System::IAsyncResult* a1)
	{
		return ((::UnityEngine::Playables::PlayableDirector*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_2_35ED954145425B5D_CLASS_3_50D343C44D28BEFB_6_ENDINVOKE_OFFSET))(this, a1);
	}
};
