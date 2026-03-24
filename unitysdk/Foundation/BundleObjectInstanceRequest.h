#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BundleAssetRequest.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleInstanceRequest; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ObjectInstanceCache; }

#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19764D40)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19763D80)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_CLEARASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x197650D0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x19764F00)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x19764A20)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x19764760)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x197644B0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19763D10)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_ISBUNDLELOADED_OFFSET UNITYSDK_OFFSET(0x197632D0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x19763EC0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOADSYNC_OFFSET UNITYSDK_OFFSET(0x19763050)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x19762940)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19763C50)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_TRYGETPOOLEDOBJECT_OFFSET UNITYSDK_OFFSET(0x19764BE0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_UNLOADINTERNAL_OFFSET UNITYSDK_OFFSET(0x19763520)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19763A40)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x197646B0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORTEMPLATEASYNC_OFFSET UNITYSDK_OFFSET(0x19762FB0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORUNLOADASYNC_OFFSET UNITYSDK_OFFSET(0x19763480)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x197653D0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x19765190)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x197653E0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19765450)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x19765460)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x197654F0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x197654C0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19765530)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x197655A0)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_LOAD_OFFSET UNITYSDK_OFFSET(0x19765590)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19765600)
#define FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19765610)

namespace Foundation
{
	inline static constexpr unsigned int BundleObjectInstanceRequest_TypeDefinitionIndex = 8085;

	class BundleObjectInstanceRequest : public ::Foundation::BundleAssetRequest
	{
	public:
		static ::System::Boolean* StaticGet_enableInPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BundleObjectInstanceRequest_TypeDefinitionIndex)->GetStaticField(0x3860);
		}
		::UnityEngine::AssetBundleCreateRequest* _bundleRequest; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::AssetBundleInstanceRequest*>* instanceAsyncRequests2; // 0x98
		::UnityEngine::AssetBundleInstanceRequest* templateRequest; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::AssetBundleInstanceRequest*>* instanceAsyncRequests; // 0xA8
		::UnityEngine::ObjectInstanceCache* instanceCache; // 0xB0
		::System::Collections::Generic::Stack_1<::UnityEngine::GameObject*>* pooledObjects; // 0xB8
		::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>* instancedObjects; // 0xC0
		::Foundation::Coroutine::CoroutineHandle loadHandle; // 0xC8
		::Foundation::Coroutine::CoroutineHandle unloadHandle; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST__CCTOR_OFFSET))();
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOADSYNC_OFFSET))(this);
		}

		::System::Boolean IsBundleLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_ISBUNDLELOADED_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitForTemplateAsync()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORTEMPLATEASYNC_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitForUnloadAsync()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORUNLOADASYNC_OFFSET))(this);
		}

		::System::Void UnloadInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_UNLOADINTERNAL_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitForInstanceAsync(::UnityEngine::AssetBundleInstanceRequest* req, ::System::Action_1<::UnityEngine::Object*>* completed)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::AssetBundleInstanceRequest*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_WAITFORINSTANCEASYNC_OFFSET))(this, req, completed);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Boolean GetInstanceAsync_1(::UnityEngine::GameObject*& result, ::UnityEngine::AsyncOperation*& handleAO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*&, ::UnityEngine::AsyncOperation*&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_GETINSTANCEASYNC_1_OFFSET))(this, result, handleAO);
		}

		::System::Boolean TryGetPooledObject(::UnityEngine::GameObject*& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_TRYGETPOOLEDOBJECT_OFFSET))(this, result);
		}

		::System::Void AddPoolInstance(::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Void ClearAsyncRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST_CLEARASYNCREQUESTS_OFFSET))(this);
		}

		::System::Void __base_AddPoolInstance(::UnityEngine::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_ADDPOOLINSTANCE_OFFSET))(this, P0);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Void __base_ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::UnityEngine::Object* __base_GetInstance(::Foundation::InstantiationParameters P0)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETINSTANCE_OFFSET))(this, P0);
		}

		::System::Boolean __base_GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstantiationParameters P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETINSTANCEASYNC_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void __base_Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_LOAD_OFFSET))(this);
		}

		::System::Void __base_LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void __base_Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_RECYCLE_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_BUNDLEOBJECTINSTANCEREQUEST___BASE_UNLOAD_OFFSET))(this);
		}
	};
}
