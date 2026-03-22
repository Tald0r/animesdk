#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NapBundleInfo.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET UNITYSDK_OFFSET(0x1B13B900)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET UNITYSDK_OFFSET(0x1B13B910)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET UNITYSDK_OFFSET(0x1B13B8E0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B13B8D0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0x1B13B880)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B13B8F0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET UNITYSDK_OFFSET(0x1B13B940)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET UNITYSDK_OFFSET(0x1B13B920)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET UNITYSDK_OFFSET(0x1B13B930)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13B860)

namespace UnityEngine
{
	inline static constexpr unsigned int NapAssetBundleIndexAsset_TypeDefinitionIndex = 7598;

	class NapAssetBundleIndexAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::NapBundleInfo GetBundleInfo(::System::UInt64 bundleId)
		{
			return ((::UnityEngine::NapBundleInfo(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET))(this, bundleId);
		}

		::System::UInt64 GetBundleIDFromAssetHash(::System::UInt64 assetHash)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET))(this, assetHash);
		}

		::Il2CppArray<::System::UInt64>* GetChildren(::System::UInt64 bundleId)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET))(this, bundleId);
		}

		::Il2CppArray<::System::UInt64>* GetAllAssetHash()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt64>* GetAllBundleId()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET))(this);
		}

		::System::Void SetNext(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET))(this, asset);
		}

		::System::Void SetResourceFileType(::UnityEngine::NapResourceFileType resourceFileType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapResourceFileType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET))(this, resourceFileType);
		}

		static ::System::Void SetEnableBundleIndexMemoryOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET))(enable);
		}

		::System::Void GetBundleInfo_Injected(::System::UInt64 bundleId, ::UnityEngine::NapBundleInfo& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::NapBundleInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET))(this, bundleId, ret);
		}
	};
}
