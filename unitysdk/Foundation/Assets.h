#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadCacheKey.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/AssetsUnloadLevel.h"
#include "unitysdk/Foundation/AssetsUnloadPhase.h"
#include "unitysdk/Foundation/AssetsUnloadType.h"
#include "unitysdk/Foundation/BundleID.h"
#include "unitysdk/Foundation/BundleInfo.h"
#include "unitysdk/Foundation/BundleLoadInfo.h"
#include "unitysdk/Foundation/BundleLocation.h"
#include "unitysdk/Foundation/BundleLocationInfo.h"
#include "unitysdk/Foundation/LoginSetting.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/Foundation/VerifyBy.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RuntimePlatform.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

class Class_1_2556F0ED31BA44F3;
namespace Foundation { class AssetRequest; }
namespace Foundation { class AssetRequestBase; }
namespace Foundation { class Assets_ConfigHashSetTrim; }
namespace Foundation { class BundleRequest; }
namespace Foundation { class InstancePoolRequest; }
namespace Foundation { class SceneAssetRequest; }
namespace Foundation::DataStructures { template <typename T> class HashSet_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class Stopwatch; }
namespace UnityEngine { class Object; }

#define FOUNDATION_ASSETS_ADDREQUEST_OFFSET UNITYSDK_OFFSET(0x1A0138B0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET UNITYSDK_OFFSET(0x1A021BB0)
#define FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A021940)
#define FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET UNITYSDK_OFFSET(0x1A021A60)
#define FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET UNITYSDK_OFFSET(0x1A021180)
#define FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A022D10)
#define FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A018730)
#define FOUNDATION_ASSETS_BINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1A014CC0)
#define FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1A011040)
#define FOUNDATION_ASSETS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A019E20)
#define FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET UNITYSDK_OFFSET(0x1A011920)
#define FOUNDATION_ASSETS_CONTAINSASSET_OFFSET UNITYSDK_OFFSET(0x1A011600)
#define FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET UNITYSDK_OFFSET(0x1A00D1F0)
#define FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET UNITYSDK_OFFSET(0x1A009D60)
#define FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET UNITYSDK_OFFSET(0x1A01DC60)
#define FOUNDATION_ASSETS_DUMPASSETS_OFFSET UNITYSDK_OFFSET(0x1A00A2D0)
#define FOUNDATION_ASSETS_FINDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A00DE30)
#define FOUNDATION_ASSETS_FORCECLEARALL_OFFSET UNITYSDK_OFFSET(0x1A01A980)
#define FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A0216E0)
#define FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A01CFD0)
#define FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1A00E870)
#define FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1A01D970)
#define FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET UNITYSDK_OFFSET(0x1A018F30)
#define FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET UNITYSDK_OFFSET(0x1A01BBC0)
#define FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET UNITYSDK_OFFSET(0x1A007EA0)
#define FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET UNITYSDK_OFFSET(0x1A01A060)
#define FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1A022250)
#define FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET UNITYSDK_OFFSET(0x1A022130)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET UNITYSDK_OFFSET(0x1A0213A0)
#define FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET UNITYSDK_OFFSET(0x1A021280)
#define FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET UNITYSDK_OFFSET(0x1A011890)
#define FOUNDATION_ASSETS_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1A0211E0)
#define FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1A01A140)
#define FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1A022470)
#define FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET UNITYSDK_OFFSET(0x1A019F80)
#define FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET UNITYSDK_OFFSET(0x1A01C070)
#define FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET UNITYSDK_OFFSET(0x1A019FF0)
#define FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET UNITYSDK_OFFSET(0x1A019F10)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1A01D3B0)
#define FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1A0227D0)
#define FOUNDATION_ASSETS_GETVER_OFFSET UNITYSDK_OFFSET(0x1A01C010)
#define FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1A0198F0)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1A019880)
#define FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1A015910)
#define FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1A019BF0)
#define FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1A019DB0)
#define FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1A015970)
#define FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1A0159D0)
#define FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A0217E0)
#define FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1A019D40)
#define FOUNDATION_ASSETS_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1A01D340)
#define FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1A021760)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1A01D1F0)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1A01D2D0)
#define FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1A01D260)
#define FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A019C60)
#define FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1A019CD0)
#define FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET UNITYSDK_OFFSET(0x1A019960)
#define FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET UNITYSDK_OFFSET(0x1A00EAF0)
#define FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET UNITYSDK_OFFSET(0x1A01A6C0)
#define FOUNDATION_ASSETS_INIT_OFFSET UNITYSDK_OFFSET(0x1A01A240)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET UNITYSDK_OFFSET(0x1A013450)
#define FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET UNITYSDK_OFFSET(0x1A012560)
#define FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET UNITYSDK_OFFSET(0x1A01BD20)
#define FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET UNITYSDK_OFFSET(0x1A01BC60)
#define FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET UNITYSDK_OFFSET(0x1A01BDC0)
#define FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1A013C20)
#define FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET UNITYSDK_OFFSET(0x1A0218A0)
#define FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET UNITYSDK_OFFSET(0x1A013C90)
#define FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET UNITYSDK_OFFSET(0x1A00DD00)
#define FOUNDATION_ASSETS_ISSVCASSET_OFFSET UNITYSDK_OFFSET(0x1A01BF60)
#define FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET UNITYSDK_OFFSET(0x1A01BE60)
#define FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET UNITYSDK_OFFSET(0x1A01BAF0)
#define FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1A0144B0)
#define FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET UNITYSDK_OFFSET(0x1A013B40)
#define FOUNDATION_ASSETS_LOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1A014C00)
#define FOUNDATION_ASSETS_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1A012A40)
#define FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET UNITYSDK_OFFSET(0x1A012040)
#define FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET UNITYSDK_OFFSET(0x1A011C70)
#define FOUNDATION_ASSETS_LOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A011BD0)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET UNITYSDK_OFFSET(0x1A00FE90)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET UNITYSDK_OFFSET(0x1A0103E0)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET UNITYSDK_OFFSET(0x1A00FF40)
#define FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1A010490)
#define FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET UNITYSDK_OFFSET(0x1A00DF50)
#define FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET UNITYSDK_OFFSET(0x1A00E2F0)
#define FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET UNITYSDK_OFFSET(0x1A022C80)
#define FOUNDATION_ASSETS_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A019B20)
#define FOUNDATION_ASSETS_LOG_OFFSET UNITYSDK_OFFSET(0x1A0199B0)
#define FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET UNITYSDK_OFFSET(0x1A015790)
#define FOUNDATION_ASSETS_ONASSETLOADED_OFFSET UNITYSDK_OFFSET(0x1A015490)
#define FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A015610)
#define FOUNDATION_ASSETS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A01C310)
#define FOUNDATION_ASSETS_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A01C180)
#define FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1A0220B0)
#define FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x1A01C4A0)
#define FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A01CBB0)
#define FOUNDATION_ASSETS_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1A013D20)
#define FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET UNITYSDK_OFFSET(0x1A020D00)
#define FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET UNITYSDK_OFFSET(0x1A021CC0)
#define FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET UNITYSDK_OFFSET(0x1A022E20)
#define FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x1A010EB0)
#define FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1A021820)
#define FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET UNITYSDK_OFFSET(0x1A01A660)
#define FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1A01B860)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET UNITYSDK_OFFSET(0x1A019660)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET UNITYSDK_OFFSET(0x1A019260)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET UNITYSDK_OFFSET(0x1A019030)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET UNITYSDK_OFFSET(0x1A019460)
#define FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET UNITYSDK_OFFSET(0x1A018FB0)
#define FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET UNITYSDK_OFFSET(0x1A01B990)
#define FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET UNITYSDK_OFFSET(0x1A01A4A0)
#define FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET UNITYSDK_OFFSET(0x1A019920)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET UNITYSDK_OFFSET(0x1A0198C0)
#define FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET UNITYSDK_OFFSET(0x1A015940)
#define FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET UNITYSDK_OFFSET(0x1A019C30)
#define FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET UNITYSDK_OFFSET(0x1A019DF0)
#define FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET UNITYSDK_OFFSET(0x1A0159A0)
#define FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET UNITYSDK_OFFSET(0x1A015A10)
#define FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A017E00)
#define FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET UNITYSDK_OFFSET(0x1A019D80)
#define FOUNDATION_ASSETS_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0x1A01D370)
#define FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET UNITYSDK_OFFSET(0x1A0217A0)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1A01D230)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET UNITYSDK_OFFSET(0x1A01D310)
#define FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET UNITYSDK_OFFSET(0x1A01D2A0)
#define FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET UNITYSDK_OFFSET(0x1A019CA0)
#define FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET UNITYSDK_OFFSET(0x1A019D10)
#define FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x1A011380)
#define FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET UNITYSDK_OFFSET(0x1A0214C0)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1A0122C0)
#define FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET UNITYSDK_OFFSET(0x1A0120E0)
#define FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1A00F220)
#define FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET UNITYSDK_OFFSET(0x1A015A40)
#define FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET UNITYSDK_OFFSET(0x1A018B50)
#define FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET UNITYSDK_OFFSET(0x1A00F810)
#define FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET UNITYSDK_OFFSET(0x1A00FAD0)
#define FOUNDATION_ASSETS_UNLOADASSETS_OFFSET UNITYSDK_OFFSET(0x1A014570)
#define FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1A010C10)
#define FOUNDATION_ASSETS_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1A010900)
#define FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET UNITYSDK_OFFSET(0x1A01C7F0)
#define FOUNDATION_ASSETS_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x1A00ED80)
#define FOUNDATION_ASSETS_UPDATEASSETS_OFFSET UNITYSDK_OFFSET(0x1A015EA0)
#define FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET UNITYSDK_OFFSET(0x1A015220)
#define FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET UNITYSDK_OFFSET(0x1A017EE0)
#define FOUNDATION_ASSETS_UPDATEIMPL_OFFSET UNITYSDK_OFFSET(0x1A01CB30)
#define FOUNDATION_ASSETS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A01CA40)
#define FOUNDATION_ASSETS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A022F00)
#define FOUNDATION_ASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A022EE0)

namespace Foundation
{
	inline static constexpr unsigned int Assets_TypeDefinitionIndex = 8025;

	class Assets : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>** StaticGet_InstancePoolRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::InstancePoolRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6870);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_ErrorUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6878);
		}
		static ::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_AssetRequestHandles()
		{
			return (::Foundation::DataStructures::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6880);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6888);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet__watch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6890);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet__additiveSceneHandles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6898);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedError()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>** StaticGet_SceneRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68A8);
		}
		static ::System::Action** StaticGet_assetsPreLoader()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68B0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_TmpReqSet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68B8);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnloadingNewAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_NeverUnloadBlockPaths()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68C8);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>** StaticGet_BootLoadedHandles()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D0);
		}
		static ::System::Diagnostics::Stopwatch** StaticGet_s_Stopwatch()
		{
			return (::System::Diagnostics::Stopwatch**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68D8);
		}
		static ::Foundation::AssetRequestHandle* StaticGet__runningSceneHandle()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x68E0);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadingAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6900);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_UnusedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6908);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>** StaticGet_UnloadTypeHandleDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6910);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>** StaticGet_TmpCacheKeySet()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetLoadCacheKey>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6918);
		}
		static ::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>** StaticGet_containsAssetProxy()
		{
			return (::System::Func_2<::Foundation::AssetPath, ::System::ValueTuple_2<::System::Boolean, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6920);
		}
		static ::System::Collections::Generic::List_1<::Foundation::BundleRequest*>** StaticGet_LoadingBundles()
		{
			return (::System::Collections::Generic::List_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6928);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>** StaticGet_HandleRestartVersionDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetRequestHandle, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6930);
		}
		static ::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>** StaticGet_UnusedBundles()
		{
			return (::System::Collections::Generic::LinkedList_1<::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6938);
		}
		static ::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>** StaticGet_assetLoader()
		{
			return (::System::Func_4<::Foundation::AssetPath, ::System::Type*, ::Foundation::AssetRequest*, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6940);
		}
		static ::Foundation::Assets_ConfigHashSetTrim** StaticGet_HandleTrimConfig()
		{
			return (::Foundation::Assets_ConfigHashSetTrim**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6948);
		}
		static ::Foundation::LoginSetting* StaticGet_loginSetting()
		{
			return (::Foundation::LoginSetting*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6950);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>** StaticGet_BundleRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::BundleID, ::Foundation::BundleRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6960);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>** StaticGet_UnusedScenes()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6968);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetLoadedCollect()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6970);
		}
		static ::Foundation::Assets** StaticGet__instance()
		{
			return (::Foundation::Assets**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6978);
		}
		static ::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>** StaticGet_AssetRequests()
		{
			return (::System::Collections::Generic::Dictionary_2<::Foundation::AssetLoadCacheKey, ::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6980);
		}
		static ::System::String** StaticGet__platform()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6988);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onInstanceRequestUnload()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6990);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>** StaticGet__preloadRequestHandles()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::System::Type*>, ::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x6998);
		}
		static ::Class_1_2556F0ED31BA44F3** StaticGet__AppAssetsData_k__BackingField()
		{
			return (::Class_1_2556F0ED31BA44F3**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A0);
		}
		static ::Il2CppArray<::Foundation::ResourceFileType>** StaticGet_AllResourceFileTypes()
		{
			return (::Il2CppArray<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69A8);
		}
		static ::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>** StaticGet_LoadedAssets()
		{
			return (::System::Collections::Generic::HashSet_1<::Foundation::AssetRequestBase*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B0);
		}
		static ::System::Type** StaticGet_Instance_AssetType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69B8);
		}
		static ::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>** StaticGet_LoadingScenes()
		{
			return (::System::Collections::Generic::List_1<::Foundation::SceneAssetRequest*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69C0);
		}
		static ::System::Action_1<::Foundation::AssetPath>** StaticGet_onAssetUnloaded()
		{
			return (::System::Action_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69C8);
		}
		static ::System::String** StaticGet__localProtocol()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69D0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_ActiveVariants()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x69D8);
		}
		static ::System::Int32* StaticGet_DebugGM_RestartAssetLogMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3570);
		}
		static ::System::Int32* StaticGet_fileVerifierMaxCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3574);
		}
		static ::Foundation::VerifyBy* StaticGet_verifyBy()
		{
			return (::Foundation::VerifyBy*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3578);
		}
		static ::System::Single* StaticGet_DeepCheckInstancePoolRequests_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x357C);
		}
		static ::System::Boolean* StaticGet_forceDisablePool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3580);
		}
		static ::System::Boolean* StaticGet__FileExistCheckTwice_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3581);
		}
		static ::System::Boolean* StaticGet_s_IsStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3582);
		}
		static ::System::Boolean* StaticGet__isInBootProcess_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3583);
		}
		static ::System::Single* StaticGet_s_UnloadBundleTimeSlice()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3584);
		}
		static ::System::Boolean* StaticGet__videoBundle_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3588);
		}
		static ::System::Boolean* StaticGet_ProcessUnusedRequestAsync()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3589);
		}
		static ::System::Boolean* StaticGet_s_ForceOffStepUnloadBundle()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x358A);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x358B);
		}
		static ::System::UInt32* StaticGet__GameEngineRestartVersion_k__BackingField()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x358C);
		}
		static ::System::Int32* StaticGet_currentVerifierRetryCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3590);
		}
		static ::System::Boolean* StaticGet__loggable_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3594);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsImmediate_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3595);
		}
		static ::System::Boolean* StaticGet__videoCriWare_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3596);
		}
		static ::System::Single* StaticGet_CheckInstancePoolRequestsUsed_Time()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x3598);
		}
		static ::Foundation::AssetsUnloadLevel* StaticGet__AssetsUnloadLevel_k__BackingField()
		{
			return (::Foundation::AssetsUnloadLevel*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x359C);
		}
		static ::System::Boolean* StaticGet_assetUpdateAfterLateUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x359D);
		}
		static ::System::Boolean* StaticGet_useBundleRequestOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x359E);
		}
		static ::System::Boolean* StaticGet__updateUnusedAssetsNow_InstanceRequest_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x359F);
		}
		static ::System::Boolean* StaticGet__development_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35A0);
		}
		static ::System::Boolean* StaticGet_forceSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35A1);
		}
		static ::System::Boolean* StaticGet_closeUnloadImmediate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35A2);
		}
		static ::System::Boolean* StaticGet_DebugGM_ShowRestartAssetLog()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35A3);
		}
		static ::Foundation::AssetsUnloadPhase* StaticGet__AssetsUnloadPhase_k__BackingField()
		{
			return (::Foundation::AssetsUnloadPhase*)Il2CppClass::FromTypeDefinitionIndex(Assets_TypeDefinitionIndex)->GetStaticField(0x35A4);
		}
		// static const ::System::String* BLOCK_FILE_EXTENSION; // 0x0
		// static const ::System::String* BUNDLE_FILE_EXTENSION; // 0x0
		// static const ::System::String* CRIWARE_FILE_EXTENSION; // 0x0
		// static const ::System::String* MP4_FILE_EXTENSION; // 0x0
		// static const ::System::Int64 MAX_COST = 0x3; // 0x0
		// static const ::System::Single CheckInstancePoolRequestsUsed_DeltaTime; // 0x0
		// static const ::System::Single DeepCheckInstancePoolRequests_DeltaTime; // 0x0
		// static const ::System::Single UnloadBundleTimeSliceMax; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS__CCTOR_OFFSET))();
		}

		static ::System::Void DumpAssetLog_OnRestart()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETLOG_ONRESTART_OFFSET))();
		}

		static ::System::Boolean IsScenePathValid(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSCENEPATHVALID_OFFSET))(path);
		}

		static ::Foundation::AssetRequestHandle LoadSceneAsyncHandle(::System::String* path, ::System::Boolean& additive)
		{
			return ((::Foundation::AssetRequestHandle(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNCHANDLE_OFFSET))(path, additive);
		}

		static ::Foundation::SceneAssetRequest* LoadSceneAsync(::System::String* path, ::System::Boolean& additive)
		{
			return ((::Foundation::SceneAssetRequest*(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADSCENEASYNC_OFFSET))(path, additive);
		}

		static ::Foundation::SceneAssetRequest* get__runningScene()
		{
			return ((::Foundation::SceneAssetRequest*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET__RUNNINGSCENE_OFFSET))();
		}

		static ::System::Void UnloadScene(::Foundation::AssetRequestHandle handle, ::System::Boolean additive, ::System::Boolean force)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADSCENE_OFFSET))(handle, additive, force);
		}

		static ::System::Void UnloadAllScenesInAdditiveScene(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENESINADDITIVESCENE_OFFSET))(excludeList);
		}

		static ::System::Void UnloadAllScenes(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* excludeList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLSCENES_OFFSET))(excludeList);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandleSync(::Foundation::AssetPath& path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLESYNC_OFFSET))(path);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCacheSync(::Foundation::AssetPath& assetPath)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHESYNC_OFFSET))(assetPath);
		}

		static ::Foundation::AssetRequestHandle LoadObjectInstanceCacheHandle(::Foundation::AssetPath& path)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHEHANDLE_OFFSET))(path);
		}

		static ::Foundation::AssetRequestBase* LoadObjectInstanceCache(::Foundation::AssetPath& assetPath)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADOBJECTINSTANCECACHE_OFFSET))(assetPath);
		}

		static ::System::Void UnloadAsset(::Foundation::AssetRequestHandle handle, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_OFFSET))(handle, immediately);
		}

		static ::System::Void UnloadAsset_1(::Foundation::AssetRequestBase*& asset, ::System::Boolean& immediately)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSET_1_OFFSET))(asset, immediately);
		}

		static ::System::Void RemoveUnusedAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEUNUSEDASSETS_OFFSET))();
		}

		static ::System::Boolean ContainsAsset(::Foundation::AssetPath assetPath)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSET_OFFSET))(assetPath);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::System::Boolean> ContainsAssetEx(::Foundation::AssetPath assetPath)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CONTAINSASSETEX_OFFSET))(assetPath);
		}

		static ::Foundation::BundleRequest* LoadBundle(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_OFFSET))(bundleID, refAssetUrl);
		}

		static ::Foundation::BundleRequest* LoadBundleAsync(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLEASYNC_OFFSET))(bundleID, refAssetUrl);
		}

		static ::Foundation::BundleRequest* LoadBundle_1(::Foundation::BundleID& bundleID, ::Foundation::AssetPath& refAssetUrl, ::System::Boolean& asyncMode)
		{
			return ((::Foundation::BundleRequest*(*)(::Foundation::BundleID&, ::Foundation::AssetPath&, ::System::Boolean&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADBUNDLE_1_OFFSET))(bundleID, refAssetUrl, asyncMode);
		}

		static ::System::Boolean TryGetInstancePool(::Foundation::AssetPath assetPath, ::System::Type* assetType, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::System::Type*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_OFFSET))(assetPath, assetType, insRequest);
		}

		static ::System::Boolean TryGetInstancePool_1(::Foundation::AssetRequestBase* request, ::Foundation::InstancePoolRequest*& insRequest)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestBase*, ::Foundation::InstancePoolRequest*&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYGETINSTANCEPOOL_1_OFFSET))(request, insRequest);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset(::Foundation::AssetPath assetPath, ::System::Type* assetType)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetPath, ::System::Type*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_OFFSET))(assetPath, assetType);
		}

		static ::Foundation::InstancePoolRequest* InstantiateAsset_1(::Foundation::AssetRequestBase* request)
		{
			return ((::Foundation::InstancePoolRequest*(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INSTANTIATEASSET_1_OFFSET))(request);
		}

		static ::System::Void AddRequest(::Foundation::AssetRequestBase*& request, ::System::Boolean load)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDREQUEST_OFFSET))(request, load);
		}

		static ::Foundation::AssetRequestHandle LoadAssetHandle(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETHANDLE_OFFSET))(assetPath, type, async, unloadType);
		}

		static ::Foundation::AssetRequestBase* LoadAsset(::Foundation::AssetPath& assetPath, ::System::Type* type, ::System::Boolean async)
		{
			return ((::Foundation::AssetRequestBase*(*)(::Foundation::AssetPath&, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_OFFSET))(assetPath, type, async);
		}

		static ::System::Boolean IsFirstInstallation(::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISFIRSTINSTALLATION_OFFSET))(recordStreamingVersion);
		}

		static ::System::Boolean IsOverlayInstallation(::System::String* streamingVersion, ::System::String* recordStreamingVersion)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISOVERLAYINSTALLATION_OFFSET))(streamingVersion, recordStreamingVersion);
		}

		static ::System::Void PreloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_PRELOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::System::Void unloadAssets(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* assetFullPaths)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADASSETS_OFFSET))(assetFullPaths);
		}

		static ::Foundation::AssetRequestHandle LoadAssetAsync(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSETASYNC_OFFSET))(assetPath, type, unloadType);
		}

		static ::Foundation::AssetRequestHandle LoadAsset_1(::Foundation::AssetPath& assetPath, ::System::Type*& type, ::Foundation::AssetsUnloadType& unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetPath&, ::System::Type*&, ::Foundation::AssetsUnloadType&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADASSET_1_OFFSET))(assetPath, type, unloadType);
		}

		static ::Foundation::AssetRequestHandle GenerateBindRequest(::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GENERATEBINDREQUEST_OFFSET))(assetRequest, unloadType);
		}

		static ::System::Void BindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetRequestBase* assetRequest, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetRequestBase*, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BINDREQUEST_OFFSET))(newHandle, assetRequest, unloadType);
		}

		static ::System::Boolean UnBindRequest(::Foundation::AssetRequestHandle newHandle)
		{
			return ((::System::Boolean(*)(::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNBINDREQUEST_OFFSET))(newHandle);
		}

		static ::System::Void UpdateBindRequest(::Foundation::AssetRequestHandle newHandle, ::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestHandle, ::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBINDREQUEST_OFFSET))(newHandle, unloadType);
		}

		static ::System::Void OnAssetLoaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetUnloaded(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETUNLOADED_OFFSET))(path);
		}

		static ::System::Void OnAssetLoadedError(::Foundation::AssetPath& path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONASSETLOADEDERROR_OFFSET))(path);
		}

		static ::System::Int32 GetAssetRefCount(::Foundation::AssetPath& path)
		{
			return ((::System::Int32(*)(::Foundation::AssetPath&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETREFCOUNT_OFFSET))(path);
		}

		static ::Foundation::AssetsUnloadPhase get_AssetsUnloadPhase()
		{
			return ((::Foundation::AssetsUnloadPhase(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADPHASE_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadPhase(::Foundation::AssetsUnloadPhase value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadPhase))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADPHASE_OFFSET))(value);
		}

		static ::System::UInt32 get_GameEngineRestartVersion()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_GAMEENGINERESTARTVERSION_OFFSET))();
		}

		static ::System::Void set_GameEngineRestartVersion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_GAMEENGINERESTARTVERSION_OFFSET))(value);
		}

		static ::System::Boolean get_isInBootProcess()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISINBOOTPROCESS_OFFSET))();
		}

		static ::System::Void set_isInBootProcess(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISINBOOTPROCESS_OFFSET))(value);
		}

		static ::System::Void UnloadAllHandleExceptBoot()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLEEXCEPTBOOT_OFFSET))();
		}

		static ::System::Void UnloadAllHandle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADALLHANDLE_OFFSET))();
		}

		static ::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>* GetAllResourceFileTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Foundation::ResourceFileType>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLRESOURCEFILETYPES_OFFSET))();
		}

		static ::System::Void SetHandleTrimConfig(::Foundation::Assets_ConfigHashSetTrim* config)
		{
			return ((::System::Void(*)(::Foundation::Assets_ConfigHashSetTrim*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIG_OFFSET))(config);
		}

		static ::System::Void SetHandleTrimConfigEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGENABLE_OFFSET))(enable);
		}

		static ::System::Void SetHandleTrimConfigCount(::System::Int32 vacancyCount)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNT_OFFSET))(vacancyCount);
		}

		static ::System::Void SetHandleTrimConfigRate(::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGRATE_OFFSET))(vacancyRate);
		}

		static ::System::Void SetHandleTrimConfigCountRate(::System::Int32 vacancyCount, ::System::Int32 vacancyRate)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETHANDLETRIMCONFIGCOUNTRATE_OFFSET))(vacancyCount, vacancyRate);
		}

		static ::System::Boolean ShouldTrimExcess(::System::Int32 currentCount, ::System::Int32 capacity)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SHOULDTRIMEXCESS_OFFSET))(currentCount, capacity);
		}

		static ::Foundation::AssetsUnloadLevel get_AssetsUnloadLevel()
		{
			return ((::Foundation::AssetsUnloadLevel(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ASSETSUNLOADLEVEL_OFFSET))();
		}

		static ::System::Void set_AssetsUnloadLevel(::Foundation::AssetsUnloadLevel value)
		{
			return ((::System::Void(*)(::Foundation::AssetsUnloadLevel))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ASSETSUNLOADLEVEL_OFFSET))(value);
		}

		static ::Class_1_2556F0ED31BA44F3* get_AppAssetsData()
		{
			return ((::Class_1_2556F0ED31BA44F3*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_APPASSETSDATA_OFFSET))();
		}

		static ::System::Void set_AppAssetsData(::Class_1_2556F0ED31BA44F3* value)
		{
			return ((::System::Void(*)(::Class_1_2556F0ED31BA44F3*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_APPASSETSDATA_OFFSET))(value);
		}

		static ::System::String* get_VideoExtension()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOEXTENSION_OFFSET))();
		}

		static ::System::Void Log(::System::String* s)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOG_OFFSET))(s);
		}

		static ::System::Void LogFormat(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOGFORMAT_OFFSET))(format, args);
		}

		static ::System::Boolean get_development()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_DEVELOPMENT_OFFSET))();
		}

		static ::System::Void set_development(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_DEVELOPMENT_OFFSET))(value);
		}

		static ::System::Boolean get_videoBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOBUNDLE_OFFSET))();
		}

		static ::System::Void set_videoBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOBUNDLE_OFFSET))(value);
		}

		static ::System::Boolean get_videoCriWare()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_VIDEOCRIWARE_OFFSET))();
		}

		static ::System::Void set_videoCriWare(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_VIDEOCRIWARE_OFFSET))(value);
		}

		static ::System::Boolean get_loggable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_LOGGABLE_OFFSET))();
		}

		static ::System::Void set_loggable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_LOGGABLE_OFFSET))(value);
		}

		static ::System::Boolean get_FileExistCheckTwice()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_FILEEXISTCHECKTWICE_OFFSET))();
		}

		static ::System::Void set_FileExistCheckTwice(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_FILEEXISTCHECKTWICE_OFFSET))(value);
		}

		static ::System::Void Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CLEAR_OFFSET))();
		}

		static ::System::String* GetTemporaryCachePath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETTEMPORARYCACHEPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetPersistentPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPERSISTENTPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetStreamingPath(::System::String* relativePath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETSTREAMINGPATH_OFFSET))(relativePath);
		}

		static ::System::String* GetBadBundleFilePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBADBUNDLEFILEPATH_OFFSET))();
		}

		static ::System::String* GetDiffPatchCachePath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETDIFFPATCHCACHEPATH_OFFSET))();
		}

		static ::System::Void Init(::System::Action* cb)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INIT_OFFSET))(cb);
		}

		static ::System::Void ForceClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCECLEARALL_OFFSET))();
		}

		static ::System::Void InitAssetsScript()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_INITASSETSSCRIPT_OFFSET))();
		}

		static ::System::Void SetDefaultLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETDEFAULTLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetLoginSettingByJson(::System::String* jsonText)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTINGBYJSON_OFFSET))(jsonText);
		}

		static ::System::Void SetLoginSetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETLOGINSETTING_OFFSET))();
		}

		static ::System::Void SetBuildVersionData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SETBUILDVERSIONDATA_OFFSET))();
		}

		static ::System::Boolean IsVideoBundleMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOBUNDLEMODE_OFFSET))();
		}

		static ::System::String* GetAssetParentDir(::System::String* filename)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETASSETPARENTDIR_OFFSET))(filename);
		}

		static ::System::Boolean IsAssetBundleFile(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISASSETBUNDLEFILE_OFFSET))(filename);
		}

		static ::System::Boolean IsBlockAssets(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISBLOCKASSETS_OFFSET))(filename);
		}

		static ::System::Boolean IsAudioAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISAUDIOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsVideoAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISVIDEOASSET_OFFSET))(filename);
		}

		static ::System::Boolean IsSVCAsset(::System::String* filename)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISSVCASSET_OFFSET))(filename);
		}

		static ::System::String* GetVer()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETVER_OFFSET))();
		}

		static ::System::String* GetPlatformForAssetBundles(::UnityEngine::RuntimePlatform target)
		{
			return ((::System::String*(*)(::UnityEngine::RuntimePlatform))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETPLATFORMFORASSETBUNDLES_OFFSET))(target);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONSCENEUNLOADED_OFFSET))(this, scene);
		}

		static ::System::Int32 CheckInstancePoolRequestUsed(::System::Boolean deepCheck, ::System::Boolean forceTick)
		{
			return ((::System::Int32(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_CHECKINSTANCEPOOLREQUESTUSED_OFFSET))(deepCheck, forceTick);
		}

		static ::System::Void UnloadInstancePoolRequestUsed()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UNLOADINSTANCEPOOLREQUESTUSED_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATE_OFFSET))(this);
		}

		static ::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_POSTLATEUPDATE_OFFSET))();
		}

		::System::Void UpdateImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEIMPL_OFFSET))(this);
		}

		static ::System::Void UpdateAssets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEASSETS_OFFSET))();
		}

		static ::System::Void ForceUnloadScene(::Foundation::SceneAssetRequest* request)
		{
			return ((::System::Void(*)(::Foundation::SceneAssetRequest*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEUNLOADSCENE_OFFSET))(request);
		}

		static ::System::Boolean get_updateUnusedAssetsImmediate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsImmediate(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSIMMEDIATE_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_OFFSET))(value);
		}

		static ::System::Boolean get_updateUnusedAssetsNow_InstanceRequest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))();
		}

		static ::System::Void set_updateUnusedAssetsNow_InstanceRequest(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UPDATEUNUSEDASSETSNOW_INSTANCEREQUEST_OFFSET))(value);
		}

		static ::System::String* get_platform()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_PLATFORM_OFFSET))();
		}

		static ::System::Void set_platform(::System::String* value)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_PLATFORM_OFFSET))(value);
		}

		static ::System::String* DumpAssetBlocks()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETBLOCKS_OFFSET))();
		}

		static ::System::String* DumpAssetsLoading()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETSLOADING_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* QueryHandleByPath(::System::String* path)
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_QUERYHANDLEBYPATH_OFFSET))(path);
		}

		static ::System::String* DumpAssets()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_DUMPASSETS_OFFSET))();
		}

		static ::System::Void ApplicationOnLowMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_APPLICATIONONLOWMEMORY_OFFSET))();
		}

		static ::System::Boolean FindBundle(::Foundation::AssetPath path, ::Foundation::BundleID& bundleID)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::BundleID&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FINDBUNDLE_OFFSET))(path, bundleID);
		}

		static ::Il2CppArray<::Foundation::BundleID>* GetChildren(::Foundation::BundleID bundle)
		{
			return ((::Il2CppArray<::Foundation::BundleID>*(*)(::Foundation::BundleID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETCHILDREN_OFFSET))(bundle);
		}

		static ::Foundation::BundleLocation GetBundleLocation(::Foundation::BundleID id, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocation(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATION_OFFSET))(id, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo(::Foundation::BundleID bundleID, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_OFFSET))(bundleID, checkExist);
		}

		static ::Foundation::BundleLocationInfo GetBundleLocationInfo_1(::Foundation::BundleID bundleID, ::Foundation::BundleInfo& info, ::System::Boolean checkExist)
		{
			return ((::Foundation::BundleLocationInfo(*)(::Foundation::BundleID, ::Foundation::BundleInfo&, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBUNDLELOCATIONINFO_1_OFFSET))(bundleID, info, checkExist);
		}

		static ::System::Boolean TryFindBundleLoadInfo(::Foundation::BundleID id, ::Foundation::BundleLoadInfo& bundleLoadInfo)
		{
			return ((::System::Boolean(*)(::Foundation::BundleID, ::Foundation::BundleLoadInfo&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_TRYFINDBUNDLELOADINFO_OFFSET))(id, bundleLoadInfo);
		}

		static ::System::Void ForceOffStepUnloadBundle()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_FORCEOFFSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Single get_UnloadBundleTimeSlice()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_UNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Void set_UnloadBundleTimeSlice(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_UNLOADBUNDLETIMESLICE_OFFSET))(value);
		}

		static ::System::Boolean get_IsStepUnloadBundle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GET_ISSTEPUNLOADBUNDLE_OFFSET))();
		}

		static ::System::Void set_IsStepUnloadBundle(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_SET_ISSTEPUNLOADBUNDLE_OFFSET))(value);
		}

		static ::System::Void ResetUnloadBundleTimeSlice()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_RESETUNLOADBUNDLETIMESLICE_OFFSET))();
		}

		static ::System::Boolean IsLoadingOrQueued()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ISLOADINGORQUEUED_OFFSET))();
		}

		static ::System::Void UpdateBundles()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_UPDATEBUNDLES_OFFSET))();
		}

		static ::System::Void AddUnUnusedBundle(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDBUNDLE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedScene(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDSCENE_OFFSET))(br);
		}

		static ::System::Void AddUnUnusedAsset(::Foundation::AssetRequestBase* br)
		{
			return ((::System::Void(*)(::Foundation::AssetRequestBase*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ADDUNUNUSEDASSET_OFFSET))(br);
		}

		static ::System::String* RemapVariantName(::System::String* bundle)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMAPVARIANTNAME_OFFSET))(bundle);
		}

		::System::Void OnRemoveUnusedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ONREMOVEUNUSEDASSETS_OFFSET))(this);
		}

		static ::System::String* GetBlockRelativeFolder(::Foundation::ResourceFileType resourceFileType)
		{
			return ((::System::String*(*)(::Foundation::ResourceFileType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKRELATIVEFOLDER_OFFSET))(resourceFileType);
		}

		static ::System::String* GetBlockAbsolutePath(::System::String* updateBlockRootPath, ::Foundation::ResourceFileType resourceFileType, ::System::UInt64 blockHashName)
		{
			return ((::System::String*(*)(::System::String*, ::Foundation::ResourceFileType, ::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETBLOCKABSOLUTEPATH_OFFSET))(updateBlockRootPath, resourceFileType, blockHashName);
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetAllLoadedBlockPaths()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETALLLOADEDBLOCKPATHS_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::String*>* GetUnloadTypeBlockPaths(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::String*>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBLOCKPATHS_OFFSET))(unloadType);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetLoadedBundleHashes()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETLOADEDBUNDLEHASHES_OFFSET))();
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt64>* GetUnloadTypeBundleHashes(::Foundation::AssetsUnloadType unloadType)
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::Foundation::AssetsUnloadType))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_GETUNLOADTYPEBUNDLEHASHES_OFFSET))(unloadType);
		}

		static ::System::Void LoadUpdateVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_LOADUPDATEVERSION_OFFSET))();
		}

		static ::System::Void AssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_ASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void BeforeAssetBundleIndex_Clear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_BEFOREASSETBUNDLEINDEX_CLEAR_OFFSET))();
		}

		static ::System::Void RemoveAssetBundleByAssetPath(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETS_REMOVEASSETBUNDLEBYASSETPATH_OFFSET))(path);
		}
	};
}
