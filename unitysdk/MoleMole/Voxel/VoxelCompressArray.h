#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C610BB52E77ECC1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

namespace MoleMole::Voxel { class VoxelCompressCell; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_06EE84C00E1F5571_OFFSET UNITYSDK_OFFSET(0xF0CA1E0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xF0CA160)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D66A0A8D839F0EC_OFFSET UNITYSDK_OFFSET(0xF0C9170)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0xF0C93F0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET UNITYSDK_OFFSET(0xF0C9600)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET UNITYSDK_OFFSET(0xF0C8AD0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2FB24841E922E227_OFFSET UNITYSDK_OFFSET(0xF0C87E0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0xF0C9930)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_8CA88D55ECEFAD59_OFFSET UNITYSDK_OFFSET(0xF0C8F60)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A1637117B445E3B1_OFFSET UNITYSDK_OFFSET(0xF0C8880)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xF0C9F60)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xF0C9DC0)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CA7C8ACA34E4F7F0_OFFSET UNITYSDK_OFFSET(0xF0C8400)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET UNITYSDK_OFFSET(0xF0C8B70)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_E0A8AF5B699D0682_OFFSET UNITYSDK_OFFSET(0xF0C9770)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_ECCAFDF45FD89B99_OFFSET UNITYSDK_OFFSET(0xF0C9B30)
#define MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C83A0)

namespace MoleMole::Voxel
{
	inline static constexpr unsigned int VoxelCompressArray_TypeDefinitionIndex = 37628;

	class VoxelCompressArray : public ::System::Object
	{
	public:
		// static const ::System::Int32 cacheVoxelCount = 0x10; // 0x0
		::UnityEngine::Vector3Int cellCount; // 0x10
		::Il2CppArray<::Struct_2_4C610BB52E77ECC1>* decompressedData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* cellIndexToDataMap; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* cachedIndexList; // 0x30
		::System::Int32 bufferSize; // 0x38
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Byte>*>* decompressedRawArray; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::Voxel::VoxelCompressCell*>* compressedRawArray; // 0x48
		::UnityEngine::Vector3Int rawSize; // 0x50
		::UnityEngine::Vector3Int cellSize; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* Method_1_CA7C8ACA34E4F7F0(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CA7C8ACA34E4F7F0_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_2FB24841E922E227(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2FB24841E922E227_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_A1637117B445E3B1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Byte a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A1637117B445E3B1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_1_CCB59E213D1728DE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_CCB59E213D1728DE_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_1_2938F774A1106C02(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2938F774A1106C02_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_8CA88D55ECEFAD59()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_8CA88D55ECEFAD59_OFFSET))(this);
		}

		::System::Byte Method_1_1D66A0A8D839F0EC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D66A0A8D839F0EC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_21886A8411E71157()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_21886A8411E71157_OFFSET))(this);
		}

		::System::Void Method_1_2344FF75FE05782E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_2344FF75FE05782E_OFFSET))(this);
		}

		::System::Void Method_1_E0A8AF5B699D0682(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_E0A8AF5B699D0682_OFFSET))(this, a1);
		}

		::System::Byte Method_1_ECCAFDF45FD89B99(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_ECCAFDF45FD89B99_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_1_B387E1AED8A8F880()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
		}

		::System::Void Method_1_A984848EA3E436DA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_A984848EA3E436DA_OFFSET))(this);
		}

		::System::Int32 Method_1_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
		}

		::System::Boolean Method_1_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Byte Method_1_06EE84C00E1F5571(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_VOXEL_VOXELCOMPRESSARRAY_METHOD_1_06EE84C00E1F5571_OFFSET))(this, a1, a2, a3);
		}
	};
}
