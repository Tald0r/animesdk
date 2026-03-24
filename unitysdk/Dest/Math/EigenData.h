#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DEST_MATH_EIGENDATA_GETEIGENVALUE_OFFSET UNITYSDK_OFFSET(0x1AFC3ED0)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR2_OFFSET UNITYSDK_OFFSET(0x1AFC3F10)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR3_OFFSET UNITYSDK_OFFSET(0x1AFC52A0)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFC7700)
#define DEST_MATH_EIGENDATA_GETEIGENVECTOR_OFFSET UNITYSDK_OFFSET(0x1AFC7630)
#define DEST_MATH_EIGENDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1AFC75F0)
#define DEST_MATH_EIGENDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC7600)

namespace Dest::Math
{
	inline static constexpr unsigned int EigenData_TypeDefinitionIndex = 32653;

	class EigenData : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _diagonal; // 0x10
		::Il2CppArray<::System::Single>* _matrix; // 0x18
		::System::Int32 _size; // 0x20

		::System::Void _ctor(::Il2CppArray<::System::Single>* diagonal, ::Il2CppArray<::System::Single>* matrix)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA__CTOR_OFFSET))(this, diagonal, matrix);
		}

		::System::Int32 get_Size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Single GetEigenvalue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVALUE_OFFSET))(this, index);
		}

		::UnityEngine::Vector2 GetEigenvector2(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR2_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetEigenvector3(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR3_OFFSET))(this, index);
		}

		::Il2CppArray<::System::Single>* GetEigenvector(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR_OFFSET))(this, index);
		}

		::System::Void GetEigenvector_1(::System::Int32 index, ::Il2CppArray<::System::Single>* out_eigenvector)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DEST_MATH_EIGENDATA_GETEIGENVECTOR_1_OFFSET))(this, index, out_eigenvector);
		}
	};
}
