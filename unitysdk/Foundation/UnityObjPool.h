#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_UNITYOBJPOOL_GETRESERVEDOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x5F96150)
#define FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHOUTPOOLASYNC_OFFSET UNITYSDK_OFFSET(0x5F95C80)
#define FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHOUTPOOL_OFFSET UNITYSDK_OFFSET(0x5F95BF0)
#define FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHPOOL_OFFSET UNITYSDK_OFFSET(0x5F95E10)
#define FOUNDATION_UNITYOBJPOOL_RELEASEALLRESERVEDOBJECTPOOL_OFFSET UNITYSDK_OFFSET(0x5F96240)

namespace Foundation
{
	inline static constexpr unsigned int UnityObjPool_TypeDefinitionIndex = 78203;

	class UnityObjPool : public ::System::Object
	{
	public:
		static ::UnityEngine::Object* InstantiateWithoutPool(::System::String* path, ::UnityEngine::Transform* parent)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHOUTPOOL_OFFSET))(path, parent);
		}

		static ::System::Void InstantiateWithoutPoolAsync(::System::String* path, ::System::Action_1<::UnityEngine::Object*>* complete, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::System::String*, ::System::Action_1<::UnityEngine::Object*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHOUTPOOLASYNC_OFFSET))(path, complete, parent);
		}

		static ::Foundation::ReservedObjectPoolDataHandle InstantiateWithPool(::System::String* path, ::UnityEngine::Transform* parent)
		{
			return ((::Foundation::ReservedObjectPoolDataHandle(*)(::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL_INSTANTIATEWITHPOOL_OFFSET))(path, parent);
		}

		static ::Foundation::ReservedObjectPool* GetReservedObjectPool(::System::String* path, ::System::Int32 capacity, ::System::Int32 preloadCount, ::System::Single autoReleaseTime, ::System::Action_1<::Foundation::ReservedObjectPool*>* poolReleaseCallback)
		{
			return ((::Foundation::ReservedObjectPool*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Single, ::System::Action_1<::Foundation::ReservedObjectPool*>*))((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL_GETRESERVEDOBJECTPOOL_OFFSET))(path, capacity, preloadCount, autoReleaseTime, poolReleaseCallback);
		}

		static ::System::Void ReleaseAllReservedObjectPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNITYOBJPOOL_RELEASEALLRESERVEDOBJECTPOOL_OFFSET))();
		}
	};
}
