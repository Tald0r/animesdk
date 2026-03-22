#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_3_C2A6EC2B1ECF6022_CLASS_1_C94AFBD213FA50A0_METHOD_1_CEBAF86D40EC5C89_OFFSET UNITYSDK_OFFSET(0xB59B520)
#define CLASS_3_C2A6EC2B1ECF6022_CLASS_1_C94AFBD213FA50A0__CTOR_OFFSET UNITYSDK_OFFSET(0xB59B510)

inline static constexpr unsigned int Class_3_C2A6EC2B1ECF6022_Class_1_C94AFBD213FA50A0_TypeDefinitionIndex = 59824;

class Class_3_C2A6EC2B1ECF6022_Class_1_C94AFBD213FA50A0 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::UnityEngine::Collider*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CLASS_1_C94AFBD213FA50A0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CEBAF86D40EC5C89(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_C2A6EC2B1ECF6022_CLASS_1_C94AFBD213FA50A0_METHOD_1_CEBAF86D40EC5C89_OFFSET))(this, a1);
	}
};
