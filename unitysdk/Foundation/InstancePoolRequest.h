#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestBase.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/InstantiationParameters.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define FOUNDATION_INSTANCEPOOLREQUEST_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A53610)
#define FOUNDATION_INSTANCEPOOLREQUEST_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19A52F10)
#define FOUNDATION_INSTANCEPOOLREQUEST_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A4A900)
#define FOUNDATION_INSTANCEPOOLREQUEST_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A52D30)
#define FOUNDATION_INSTANCEPOOLREQUEST_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A537C0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x19A532C0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19A4B320)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A52FC0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19A53980)
#define FOUNDATION_INSTANCEPOOLREQUEST_GET_DEPENDENCYREQUEST_OFFSET UNITYSDK_OFFSET(0x19A52AF0)
#define FOUNDATION_INSTANCEPOOLREQUEST_GET_LOADINGPERCENT_OFFSET UNITYSDK_OFFSET(0x19A53570)
#define FOUNDATION_INSTANCEPOOLREQUEST_GET_PROXYHANDLE_OFFSET UNITYSDK_OFFSET(0x19A52B00)
#define FOUNDATION_INSTANCEPOOLREQUEST_INIT_OFFSET UNITYSDK_OFFSET(0x19A419C0)
#define FOUNDATION_INSTANCEPOOLREQUEST_LOADIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x19A52B20)
#define FOUNDATION_INSTANCEPOOLREQUEST_LOAD_OFFSET UNITYSDK_OFFSET(0x19A41AC0)
#define FOUNDATION_INSTANCEPOOLREQUEST_RECYCLE_OFFSET UNITYSDK_OFFSET(0x19A49B50)
#define FOUNDATION_INSTANCEPOOLREQUEST_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19A499C0)
#define FOUNDATION_INSTANCEPOOLREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x19A4B0D0)
#define FOUNDATION_INSTANCEPOOLREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x19A53A00)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_ADDPOOLINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A53A10)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x19A53A80)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CHECKUSEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A53A90)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A53B00)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET UNITYSDK_OFFSET(0x19A53B60)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_OFFSET UNITYSDK_OFFSET(0x19A53C70)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19A53CB0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCE_OFFSET UNITYSDK_OFFSET(0x19A53BC0)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET UNITYSDK_OFFSET(0x19A53D10)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x19A53D70)
#define FOUNDATION_INSTANCEPOOLREQUEST___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x19A53D80)

namespace Foundation
{
	inline static constexpr unsigned int InstancePoolRequest_TypeDefinitionIndex = 8123;

	class InstancePoolRequest : public ::Foundation::AssetRequestBase
	{
	public:
		::Foundation::AssetRequestHandle handle; // 0x60
		::Foundation::AssetRequestBase* dependency; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* pool; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Object*>* requires_; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST__CTOR_OFFSET))(this);
		}

		::Foundation::AssetRequestBase* get_DependencyRequest()
		{
			return ((::Foundation::AssetRequestBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GET_DEPENDENCYREQUEST_OFFSET))(this);
		}

		::Foundation::AssetRequestHandle get_ProxyHandle()
		{
			return ((::Foundation::AssetRequestHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GET_PROXYHANDLE_OFFSET))(this);
		}

		::System::Void Init(::Foundation::AssetRequestBase* dependency, ::Foundation::AssetRequestHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetRequestBase*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_INIT_OFFSET))(this, dependency, handle);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_LOAD_OFFSET))(this);
		}

		::System::Void LoadImmediate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_LOADIMMEDIATE_OFFSET))(this);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_UNLOAD_OFFSET))(this);
		}

		::System::Void Recycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_RECYCLE_OFFSET))(this);
		}

		::System::Void BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_BEFORERECYCLE_OFFSET))(this);
		}

		::UnityEngine::Object* GetInstance(::Foundation::InstantiationParameters param)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCE_OFFSET))(this, param);
		}

		::System::Boolean GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* completed, ::Foundation::InstantiationParameters param)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCEASYNC_OFFSET))(this, completed, param);
		}

		::System::Single get_LoadingPercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GET_LOADINGPERCENT_OFFSET))(this);
		}

		::System::Void ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 CheckUsedInstances(::System::Boolean deepCheck)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CHECKUSEDINSTANCES_OFFSET))(this, deepCheck);
		}

		::System::Void AddPoolInstance(::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_ADDPOOLINSTANCE_OFFSET))(this, go);
		}

		::System::Void ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::System::Int32 GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void __base_AddPoolInstance(::UnityEngine::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_ADDPOOLINSTANCE_OFFSET))(this, P0);
		}

		::System::Void __base_BeforeRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_BEFORERECYCLE_OFFSET))(this);
		}

		::System::Int32 __base_CheckUsedInstances(::System::Boolean P0)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CHECKUSEDINSTANCES_OFFSET))(this, P0);
		}

		::System::Void __base_ClearInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARINSTANCES_OFFSET))(this);
		}

		::System::Void __base_ClearPoolInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_CLEARPOOLINSTANCES_OFFSET))(this);
		}

		::UnityEngine::Object* __base_GetInstance(::Foundation::InstantiationParameters P0)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCE_OFFSET))(this, P0);
		}

		::System::Boolean __base_GetInstanceAsync(::System::Action_1<::UnityEngine::Object*>* P0, ::Foundation::InstantiationParameters P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action_1<::UnityEngine::Object*>*, ::Foundation::InstantiationParameters))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCEASYNC_OFFSET))(this, P0, P1);
		}

		::System::Int32 __base_GetInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Int32 __base_GetPoolInstancesCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_GETPOOLINSTANCESCOUNT_OFFSET))(this);
		}

		::System::Void __base_Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_UNLOAD_OFFSET))(this);
		}

		::System::Boolean __base_Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_INSTANCEPOOLREQUEST___BASE_UPDATE_OFFSET))(this);
		}
	};
}
