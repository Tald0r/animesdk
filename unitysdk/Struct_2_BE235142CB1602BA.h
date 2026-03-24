#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class AnimationCurve; }

#define STRUCT_2_BE235142CB1602BA_METHOD_2_841FD4283B585969_OFFSET UNITYSDK_OFFSET(0x7372C10)
#define STRUCT_2_BE235142CB1602BA_METHOD_2_BA6DAE16533BE54D_OFFSET UNITYSDK_OFFSET(0x326E80)
#define STRUCT_2_BE235142CB1602BA_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x326E70)

inline static constexpr unsigned int Struct_2_BE235142CB1602BA_TypeDefinitionIndex = 66944;

struct alignas(8) Struct_2_BE235142CB1602BA
{
	::UnityEngine::AnimationCurve* Field_2_0; // 0x10

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_BE235142CB1602BA_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single Method_2_BA6DAE16533BE54D(::System::Single a1, ::System::Single a2, ::System::Boolean& a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_BE235142CB1602BA_METHOD_2_BA6DAE16533BE54D_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_2_841FD4283B585969(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean& a5)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + STRUCT_2_BE235142CB1602BA_METHOD_2_841FD4283B585969_OFFSET))(a1, a2, a3, a4, a5);
	}
};
