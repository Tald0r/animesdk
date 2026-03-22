#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_25.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x67111F0)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_1085FC3ECB28D968_OFFSET UNITYSDK_OFFSET(0x6711350)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_C3FCFEB83374757C_OFFSET UNITYSDK_OFFSET(0x67112E0)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x67112B0)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x67112C0)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x67112A0)
#define CLASS_3_5EF9A069C75C8865_1_METHOD_3_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x6711190)
#define CLASS_3_5EF9A069C75C8865_1__CTOR_OFFSET UNITYSDK_OFFSET(0x67112D0)

inline static constexpr unsigned int Class_3_5EF9A069C75C8865_1_TypeDefinitionIndex = 60525;

class Class_3_5EF9A069C75C8865_1 : public ::Class_2_A48F3719AA1CF200_25
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_3_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_F24A112B56A2E4B4_OFFSET))(this);
	}

	::System::Int32 Method_3_09A39B89545FE101()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_09A39B89545FE101_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_3_C3FCFEB83374757C(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_C3FCFEB83374757C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1085FC3ECB28D968(::UnityEngine::Collider*& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_3_5EF9A069C75C8865_1_METHOD_3_1085FC3ECB28D968_OFFSET))(this, a1, a2);
	}
};
