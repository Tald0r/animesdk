#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_2_53499AF2E36558D9;
namespace UnityEngine { class Transform; }

#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_7F1AFA8B9AD6D86B_OFFSET UNITYSDK_OFFSET(0x3659F0)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_C517632A0B7188C1_OFFSET UNITYSDK_OFFSET(0x3659E0)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x3658E0)
#define STRUCT_2_DBCD9229AA10FE9B_METHOD_2_D1AA082DEC215AEF_OFFSET UNITYSDK_OFFSET(0x365950)

inline static constexpr unsigned int Struct_2_DBCD9229AA10FE9B_TypeDefinitionIndex = 60009;

struct alignas(8) Struct_2_DBCD9229AA10FE9B
{
	::UnityEngine::Transform* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_D1AA082DEC215AEF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DBCD9229AA10FE9B_METHOD_2_D1AA082DEC215AEF_OFFSET))(this);
	}
	*/

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
};
