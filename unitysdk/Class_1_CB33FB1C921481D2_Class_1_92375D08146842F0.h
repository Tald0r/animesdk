#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_CB33FB1C921481D2_CLASS_1_92375D08146842F0_METHOD_1_B1B73B351BCF2EE9_OFFSET UNITYSDK_OFFSET(0x9087BB0)
#define CLASS_1_CB33FB1C921481D2_CLASS_1_92375D08146842F0__CTOR_OFFSET UNITYSDK_OFFSET(0x9087BA0)

inline static constexpr unsigned int Class_1_CB33FB1C921481D2_Class_1_92375D08146842F0_TypeDefinitionIndex = 72671;

class Class_1_CB33FB1C921481D2_Class_1_92375D08146842F0 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_CLASS_1_92375D08146842F0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B1B73B351BCF2EE9(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_CLASS_1_92375D08146842F0_METHOD_1_B1B73B351BCF2EE9_OFFSET))(this, a1);
	}
};
