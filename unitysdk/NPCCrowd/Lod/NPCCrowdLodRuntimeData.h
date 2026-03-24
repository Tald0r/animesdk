#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/NPCCrowd/Lod/NPCLODRendererItem.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET UNITYSDK_OFFSET(0x6BBCDB0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET UNITYSDK_OFFSET(0x6BBCC90)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET UNITYSDK_OFFSET(0x6BBCD10)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x6BBD320)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET UNITYSDK_OFFSET(0x6BBD480)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0x6BBC910)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0x6BBD310)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x6BBC610)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x6BBCC20)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET UNITYSDK_OFFSET(0x6BBD3F0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET UNITYSDK_OFFSET(0x6BBC920)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET UNITYSDK_OFFSET(0x6BBD2A0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET UNITYSDK_OFFSET(0x6BBC620)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x6BBD5C0)
#define NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6BBD4E0)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdLodRuntimeData_TypeDefinitionIndex = 37979;

	class NPCCrowdLodRuntimeData : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_cache()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdLodRuntimeData_TypeDefinitionIndex)->GetStaticField(0x2EF80);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* LODTickBatchCount; // 0x10
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* curLODRenderers; // 0x18
		::System::Action* lodInitCallback; // 0x20
		::System::Collections::Generic::List_1<::NPCSoftAssetPath_1<::UnityEngine::Mesh*>*>* lastAssetRef; // 0x28
		::Il2CppArray<::NPCCrowd::Lod::NPCLODRendererItem>* oldLODRenderers; // 0x30
		::System::Boolean _isChangeing; // 0x38
		::System::Boolean bOverrideFade; // 0x39
		::System::Boolean isVisible; // 0x3A
		::System::Boolean bOverrideFadeTrigger; // 0x3B
		::System::Single lastMatCmpAlphaValue; // 0x3C
		::NPCCrowd::Lod::ELODLevel _lodLevel; // 0x40
		::NPCCrowd::Lod::ELODLevel _forceLodLevel; // 0x44
		::System::Boolean bOverrideHide; // 0x48
		::System::Boolean lodPreloadFinished; // 0x49
		::System::Boolean lodChangedCurFrame; // 0x4A
		::System::Boolean bOverrideShow; // 0x4B
		::NPCCrowd::Lod::ELODLevel nextLodLevel; // 0x4C
		::NPCCrowd::Lod::ELODLevel physicsLodLevel; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA__CCTOR_OFFSET))();
		}

		::NPCCrowd::Lod::ELODLevel get_lodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_LODLEVEL_OFFSET))(this);
		}

		::System::Void set_lodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_LODLEVEL_OFFSET))(this, value);
		}

		::NPCCrowd::Lod::ELODLevel get_forceLodLevel()
		{
			return ((::NPCCrowd::Lod::ELODLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_FORCELODLEVEL_OFFSET))(this);
		}

		::System::Void set_forceLodLevel(::NPCCrowd::Lod::ELODLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_FORCELODLEVEL_OFFSET))(this, value);
		}

		::System::Void OnVisible(::System::Boolean isVisible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_ONVISIBLE_OFFSET))(this, isVisible);
		}

		::System::Boolean ConsumeOverrideFade()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CONSUMEOVERRIDEFADE_OFFSET))(this);
		}

		::System::Void ForceLOD0(::System::Boolean enable, ::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_FORCELOD0_OFFSET))(this, enable, fade);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_CLEAN_OFFSET))(this);
		}

		::System::Boolean get_isChangeing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GET_ISCHANGEING_OFFSET))(this);
		}

		::System::Void set_isChangeing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SET_ISCHANGEING_OFFSET))(this, value);
		}

		::System::Boolean GetLODTickBatch(::System::Int32 handler, ::System::UInt32& batch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32&))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLODTICKBATCH_OFFSET))(this, handler, batch);
		}

		::System::Void SetLODTickBatch(::System::Int32 handler, ::System::UInt32 LODTickBatch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_SETLODTICKBATCH_OFFSET))(this, handler, LODTickBatch);
		}

		::System::Int32 GetLOD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDLODRUNTIMEDATA_GETLOD_OFFSET))(this);
		}
	};
}
