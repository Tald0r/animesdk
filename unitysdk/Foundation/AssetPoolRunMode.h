#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetType.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class TemporarayTracker; }
namespace Foundation { class TrackerPool; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FOUNDATION_ASSETPOOLRUNMODE_ADDINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AEDCAF0)
#define FOUNDATION_ASSETPOOLRUNMODE_ADDINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEDC9A0)
#define FOUNDATION_ASSETPOOLRUNMODE_APPLICATIONONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1AEDC630)
#define FOUNDATION_ASSETPOOLRUNMODE_CLEARALLPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x1AEDC6A0)
#define FOUNDATION_ASSETPOOLRUNMODE_CLEARASYNCREQUESTS_OFFSET UNITYSDK_OFFSET(0x1AEE0190)
#define FOUNDATION_ASSETPOOLRUNMODE_CLEARINSTANCES_1_OFFSET UNITYSDK_OFFSET(0x1AEDF540)
#define FOUNDATION_ASSETPOOLRUNMODE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x1AEDF4A0)
#define FOUNDATION_ASSETPOOLRUNMODE_GETASSET_1_OFFSET UNITYSDK_OFFSET(0x1AEDCF70)
#define FOUNDATION_ASSETPOOLRUNMODE_GETASSET_OFFSET UNITYSDK_OFFSET(0x1AEDCEC0)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1AEDE050)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x1AEDDF70)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEPOOLSNAPSHOTDIFF_OFFSET UNITYSDK_OFFSET(0x1AEDBEF0)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEPOOLSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1AEDB780)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AEDD710)
#define FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEDD640)
#define FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCEIFNOTEXIST_OFFSET UNITYSDK_OFFSET(0x1AEDEFE0)
#define FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCE_1_OFFSET UNITYSDK_OFFSET(0x1AEDEA30)
#define FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AEDE890)
#define FOUNDATION_ASSETPOOLRUNMODE_GET_ROOTTF_OFFSET UNITYSDK_OFFSET(0x1AEDB760)
#define FOUNDATION_ASSETPOOLRUNMODE_ISASSETLOADEDINPOOL_OFFSET UNITYSDK_OFFSET(0x1AEDEEE0)
#define FOUNDATION_ASSETPOOLRUNMODE_LOGINSTANCEPOOLDETAIL_OFFSET UNITYSDK_OFFSET(0x1AEDBAC0)
#define FOUNDATION_ASSETPOOLRUNMODE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1AEDF720)
#define FOUNDATION_ASSETPOOLRUNMODE_SETREQUESTHANDLECACHED_OFFSET UNITYSDK_OFFSET(0x1AEE0340)
#define FOUNDATION_ASSETPOOLRUNMODE_SETUSINGINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0x1AEDF6B0)
#define FOUNDATION_ASSETPOOLRUNMODE_SET_ROOTTF_OFFSET UNITYSDK_OFFSET(0x1AEDB770)
#define FOUNDATION_ASSETPOOLRUNMODE_UNLOAD_1_OFFSET UNITYSDK_OFFSET(0x1AEDFE60)
#define FOUNDATION_ASSETPOOLRUNMODE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1AEDFDC0)
#define FOUNDATION_ASSETPOOLRUNMODE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE0400)
#define FOUNDATION_ASSETPOOLRUNMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEDC360)

namespace Foundation
{
	inline static constexpr unsigned int AssetPoolRunMode_TypeDefinitionIndex = 7716;

	class AssetPoolRunMode : public ::System::Object
	{
	public:
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_OnHookGetInstance()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(AssetPoolRunMode_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Int32* StaticGet_DEFAULT_TIME_OUT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AssetPoolRunMode_TypeDefinitionIndex)->GetStaticField(0x3720);
		}
		static ::System::Single* StaticGet_DISPOSE_CHECK_TIME()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AssetPoolRunMode_TypeDefinitionIndex)->GetStaticField(0x3724);
		}
		static ::System::Boolean* StaticGet_allowUIInPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetPoolRunMode_TypeDefinitionIndex)->GetStaticField(0x3728);
		}
		// static const ::System::Int32 DEFAULT_CAPCITY = 0x64; // 0x0
		// static const ::System::Int32 EMPTY_DEFAULT_CAPCITY = 0x1E; // 0x0
		::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>* requestCachedStatus; // 0x10
		::UnityEngine::Transform* _RootTf_k__BackingField; // 0x18
		::Foundation::TrackerPool* trackerPool; // 0x20
		::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::AssetRequestHandle>* cachedAssetRequests; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Foundation::TemporarayTracker*>* strTempPool; // 0x30
		::System::Boolean usingInstancePool; // 0x38

		::System::Void _ctor(::UnityEngine::Transform* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE__CTOR_OFFSET))(this, root);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE__CCTOR_OFFSET))();
		}

		::UnityEngine::Transform* get_RootTf()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GET_ROOTTF_OFFSET))(this);
		}

		::System::Void set_RootTf(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_SET_ROOTTF_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* GetInstancePoolSnapshot()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEPOOLSNAPSHOT_OFFSET))(this);
		}

		::System::Void LogInstancePoolDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_LOGINSTANCEPOOLDETAIL_OFFSET))(this);
		}

		::System::Void GetInstancePoolSnapshotDiff(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* old)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEPOOLSNAPSHOTDIFF_OFFSET))(this, old);
		}

		::System::Void ApplicationOnLowMemory()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_APPLICATIONONLOWMEMORY_OFFSET))(this);
		}

		::System::Void AddInstance(::System::String* path, ::UnityEngine::GameObject* target, ::System::Boolean keepActive, ::Foundation::AssetType assetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_ADDINSTANCE_OFFSET))(this, path, target, keepActive, assetType);
		}

		::System::Void AddInstance_1(::Foundation::AssetPath assetPath, ::UnityEngine::GameObject* target, ::System::Boolean keepActive, ::Foundation::AssetType assetType)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::System::Boolean, ::Foundation::AssetType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_ADDINSTANCE_1_OFFSET))(this, assetPath, target, keepActive, assetType);
		}

		::UnityEngine::GameObject* GetAsset(::System::String* path)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETASSET_OFFSET))(this, path);
		}

		::UnityEngine::GameObject* GetAsset_1(::Foundation::AssetPath assetPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETASSET_1_OFFSET))(this, assetPath);
		}

		::UnityEngine::GameObject* GetInstance(::System::String* path, ::UnityEngine::Transform* parent, ::System::Boolean activeState)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCE_OFFSET))(this, path, parent, activeState);
		}

		::UnityEngine::GameObject* GetInstance_1(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent, ::System::Boolean activeState)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCE_1_OFFSET))(this, assetPath, parent, activeState);
		}

		::System::Void GetInstanceAsync(::System::String* path, ::UnityEngine::Transform* parent, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed, ::System::Boolean activeState)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEASYNC_OFFSET))(this, path, parent, completed, activeState);
		}

		::System::Void GetInstanceAsync_1(::Foundation::AssetPath assetPath, ::UnityEngine::Transform* parent, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* completed, ::System::Boolean activeState)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Transform*, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETINSTANCEASYNC_1_OFFSET))(this, assetPath, parent, completed, activeState);
		}

		::Foundation::AssetRequestHandle GetPreloadInstance(::System::String* path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCE_OFFSET))(this, path);
		}

		::System::Boolean IsAssetLoadedInPool(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_ISASSETLOADEDINPOOL_OFFSET))(this, assetPath);
		}

		::Foundation::AssetRequestHandle GetPreloadInstance_1(::Foundation::AssetPath assetPath)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCE_1_OFFSET))(this, assetPath);
		}

		::Foundation::AssetRequestHandle GetPreloadInstanceIfNotExist(::Foundation::AssetPath assetPath, ::System::Boolean& exist)
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_GETPRELOADINSTANCEIFNOTEXIST_OFFSET))(this, assetPath, exist);
		}

		::System::Void ClearInstances(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_CLEARINSTANCES_OFFSET))(this, path);
		}

		::System::Void ClearInstances_1(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_CLEARINSTANCES_1_OFFSET))(this, assetPath);
		}

		::System::Void ClearAllPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_CLEARALLPOOLINSTANCES_OFFSET))(this);
		}

		::System::Void SetUsingInstancePool(::System::Boolean usingPool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_SETUSINGINSTANCEPOOL_OFFSET))(this, usingPool);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_RELEASE_OFFSET))(this);
		}

		::System::Void Unload(::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_UNLOAD_OFFSET))(this, path);
		}

		::System::Void Unload_1(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_UNLOAD_1_OFFSET))(this, assetPath);
		}

		::System::Void ClearAsyncRequests(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_CLEARASYNCREQUESTS_OFFSET))(this, assetPath);
		}

		::System::Void SetRequestHandleCached(::Foundation::AssetPath assetPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETPOOLRUNMODE_SETREQUESTHANDLECACHED_OFFSET))(this, assetPath);
		}
	};
}
