#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetRequestStatus.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetRequestBase; }
namespace Foundation { class BundleRequest; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define FOUNDATION_ASSETS___C__BEFOREASSETBUNDLEINDEX_CLEAR_B__240_0_OFFSET UNITYSDK_OFFSET(0x1AEE1BF0)
#define FOUNDATION_ASSETS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEE1B40)
#define FOUNDATION_ASSETS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEE1B80)
#define FOUNDATION_ASSETS___C__DUMPASSETLOG_ONRESTART_B__2_0_OFFSET UNITYSDK_OFFSET(0x1AEE1B90)
#define FOUNDATION_ASSETS___C__DUMPASSETSLOADING_B__196_0_OFFSET UNITYSDK_OFFSET(0x1AEE1BB0)
#define FOUNDATION_ASSETS___C__DUMPASSETSLOADING_B__196_1_OFFSET UNITYSDK_OFFSET(0x1AEE1BD0)

namespace Foundation
{
	inline static constexpr unsigned int Assets___c_TypeDefinitionIndex = 8026;

	class Assets___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Foundation::BundleID, ::Foundation::BundleRequest*>, ::Foundation::AssetRequestStatus>** StaticGet___9__196_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Foundation::BundleID, ::Foundation::BundleRequest*>, ::Foundation::AssetRequestStatus>**)Il2CppClass::FromTypeDefinitionIndex(Assets___c_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::Foundation::Assets___c** StaticGet___9()
		{
			return (::Foundation::Assets___c**)Il2CppClass::FromTypeDefinitionIndex(Assets___c_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__240_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Assets___c_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Comparison_1<::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets___c_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>, ::Foundation::AssetRequestStatus>** StaticGet___9__196_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>, ::Foundation::AssetRequestStatus>**)Il2CppClass::FromTypeDefinitionIndex(Assets___c_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _DumpAssetLog_OnRestart_b__2_0(::System::String* l, ::System::String* r)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__DUMPASSETLOG_ONRESTART_B__2_0_OFFSET))(this, l, r);
		}

		::Foundation::AssetRequestStatus _DumpAssetsLoading_b__196_0(::System::Collections::Generic::KeyValuePair_2<::Foundation::BundleID, ::Foundation::BundleRequest*> x)
		{
			return ((::Foundation::AssetRequestStatus(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::BundleID, ::Foundation::BundleRequest*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__DUMPASSETSLOADING_B__196_0_OFFSET))(this, x);
		}

		::Foundation::AssetRequestStatus _DumpAssetsLoading_b__196_1(::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*> x)
		{
			return ((::Foundation::AssetRequestStatus(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__DUMPASSETSLOADING_B__196_1_OFFSET))(this, x);
		}

		::System::Boolean _BeforeAssetBundleIndex_Clear_b__240_0(::System::String* path)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS___C__BEFOREASSETBUNDLEINDEX_CLEAR_B__240_0_OFFSET))(this, path);
		}
	};
}
