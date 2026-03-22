#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define NAPRENDERENTITY_RELATIVEVECTORGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x187AB300)
#define NAPRENDERENTITY_RELATIVEVECTORGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x187AB390)
#define NAPRENDERENTITY_RELATIVEVECTORGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x187AAF80)
#define NAPRENDERENTITY_RELATIVEVECTORGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187AAF70)

inline static constexpr unsigned int NapRenderEntity_RelativeVectorGetter_TypeDefinitionIndex = 28120;

class NapRenderEntity_RelativeVectorGetter : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTER__CTOR_OFFSET))(this, object, method);
	}

	::System::Void Invoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Vector3& headPosition, ::UnityEngine::Vector3& headUp)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTER_INVOKE_OFFSET))(this, middlePoint, headPosition, headUp);
	}

	::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Vector3& headPosition, ::UnityEngine::Vector3& headUp, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTER_BEGININVOKE_OFFSET))(this, middlePoint, headPosition, headUp, callback, object);
	}

	::System::Void EndInvoke(::UnityEngine::Vector3& middlePoint, ::UnityEngine::Vector3& headPosition, ::UnityEngine::Vector3& headUp, ::System::IAsyncResult* result)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NAPRENDERENTITY_RELATIVEVECTORGETTER_ENDINVOKE_OFFSET))(this, middlePoint, headPosition, headUp, result);
	}
};
