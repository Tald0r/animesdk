#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TerrainMatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET UNITYSDK_OFFSET(0x8A811E0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET UNITYSDK_OFFSET(0x8A812F0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_2B9D478141E0F891_OFFSET UNITYSDK_OFFSET(0x8A818A0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x8A81460)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x8A815C0)
#define MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8A81400)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTerrainZoneVoxel_VoxelData_TypeDefinitionIndex = 55630;

	class MonoTerrainZoneVoxel_VoxelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* posList; // 0x10
		::System::Byte packData; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* pos; // 0x20
		::System::Random* rnd; // 0x28
		::System::Int32 curIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_baseMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_BASEMATTYPE_OFFSET))(this);
		}

		::MoleMole::Config::TerrainMatType get_coverMatType()
		{
			return ((::MoleMole::Config::TerrainMatType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_GET_COVERMATTYPE_OFFSET))(this);
		}

		::System::Void Method_1_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_1_921C3C3E09D59CD4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_921C3C3E09D59CD4_OFFSET))(this);
		}

		::System::Void Method_1_2B9D478141E0F891()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTERRAINZONEVOXEL_VOXELDATA_METHOD_1_2B9D478141E0F891_OFFSET))(this);
		}
	};
}
