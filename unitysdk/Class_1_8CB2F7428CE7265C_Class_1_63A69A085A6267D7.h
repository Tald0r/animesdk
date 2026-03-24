#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class String; }

#define CLASS_1_8CB2F7428CE7265C_CLASS_1_63A69A085A6267D7_METHOD_1_83082E6C1A2D2E6E_OFFSET UNITYSDK_OFFSET(0xBC85F90)
#define CLASS_1_8CB2F7428CE7265C_CLASS_1_63A69A085A6267D7__CTOR_OFFSET UNITYSDK_OFFSET(0xBC85F80)

inline static constexpr unsigned int Class_1_8CB2F7428CE7265C_Class_1_63A69A085A6267D7_TypeDefinitionIndex = 49085;

class Class_1_8CB2F7428CE7265C_Class_1_63A69A085A6267D7 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_1; // 0x10
	::Il2CppArray<::System::String*>* Field_1_2; // 0x18
	::System::String* Field_1_0; // 0x20
	::UnityEngine::LayerMask Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_1_63A69A085A6267D7__CTOR_OFFSET))(this);
	}

	::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3 Method_1_83082E6C1A2D2E6E(::UnityEngine::RaycastHit& a1)
	{
		return ((::Class_1_494697B4AB731572_Enum_3_7027F8F289F82CE3(*)(::PVOID, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + CLASS_1_8CB2F7428CE7265C_CLASS_1_63A69A085A6267D7_METHOD_1_83082E6C1A2D2E6E_OFFSET))(this, a1);
	}
};
