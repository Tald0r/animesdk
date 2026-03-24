#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_53499AF2E36558D9;
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_198E3B0D75E34EBD_OFFSET UNITYSDK_OFFSET(0x64ADF80)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_7F1AFA8B9AD6D86B_OFFSET UNITYSDK_OFFSET(0x302B30)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x302BA0)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_C517632A0B7188C1_OFFSET UNITYSDK_OFFSET(0x302B20)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x302CF0)

inline static constexpr unsigned int Struct_2_DBCD9229AA10FE9B_TypeDefinitionIndex = 38264;

struct alignas(8) Struct_2_DBCD9229AA10FE9B
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Boolean Method_2_C517632A0B7188C1(::Class_2_53499AF2E36558D9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_53499AF2E36558D9*))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_C517632A0B7188C1_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Method_2_7F1AFA8B9AD6D86B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_7F1AFA8B9AD6D86B_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}
	*/

	static ::MoleMole::Cameras::CameraDataAccessor* Method_2_198E3B0D75E34EBD()
	{
		return ((::MoleMole::Cameras::CameraDataAccessor*(*)())((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_198E3B0D75E34EBD_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
