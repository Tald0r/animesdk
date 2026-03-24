#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_1_OFFSET UNITYSDK_OFFSET(0x1B2ACC00)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_2_OFFSET UNITYSDK_OFFSET(0x1B2AC900)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2AC8F0)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_GETMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1B2ACC10)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B2AC600)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2ACF50)
#define MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2AC7F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CutsceneMaterialPropertyBlockManager_TypeDefinitionIndex = 30084;

	class CutsceneMaterialPropertyBlockManager : public ::System::Object
	{
	public:
		static ::MoleMole::Timeline::CutsceneMaterialPropertyBlockManager** StaticGet_instance()
		{
			return (::MoleMole::Timeline::CutsceneMaterialPropertyBlockManager**)Il2CppClass::FromTypeDefinitionIndex(CutsceneMaterialPropertyBlockManager_TypeDefinitionIndex)->GetStaticField(0x242D0);
		}
		static ::System::Int32* StaticGet_SkipMPBProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CutsceneMaterialPropertyBlockManager_TypeDefinitionIndex)->GetStaticField(0x79B0);
		}
		static ::System::Int32* StaticGet__layerIdColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CutsceneMaterialPropertyBlockManager_TypeDefinitionIndex)->GetStaticField(0x79B4);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* LastClearTimeDic; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::MaterialPropertyBlock*>*>* cacheMPBDic; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER__CCTOR_OFFSET))();
		}

		static ::MoleMole::Timeline::CutsceneMaterialPropertyBlockManager* get_Instance()
		{
			return ((::MoleMole::Timeline::CutsceneMaterialPropertyBlockManager*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean ClearMaterialPropertyBlock(::UnityEngine::Renderer* renderer, ::System::Int32 index, ::Il2CppArray<::System::Int32>* clearProperties)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_OFFSET))(this, renderer, index, clearProperties);
		}

		::System::Boolean ClearMaterialPropertyBlock_1(::UnityEngine::Renderer* renderer, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_1_OFFSET))(this, renderer, index);
		}

		::System::Boolean clearMaterialPropertyBlock_2(::UnityEngine::Renderer* renderer, ::System::Int32 index, ::Il2CppArray<::System::Int32>* clearProperties)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_CLEARMATERIALPROPERTYBLOCK_2_OFFSET))(this, renderer, index, clearProperties);
		}

		::UnityEngine::MaterialPropertyBlock* GetMaterialPropertyBlock(::UnityEngine::Renderer* renderer, ::System::Int32 index)
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CUTSCENEMATERIALPROPERTYBLOCKMANAGER_GETMATERIALPROPERTYBLOCK_OFFSET))(this, renderer, index);
		}
	};
}
