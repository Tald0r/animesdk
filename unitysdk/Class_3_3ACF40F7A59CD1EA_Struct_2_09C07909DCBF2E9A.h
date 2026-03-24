#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_3_3ACF40F7A59CD1EA_STRUCT_2_09C07909DCBF2E9A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED510)
#define CLASS_3_3ACF40F7A59CD1EA_STRUCT_2_09C07909DCBF2E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED470)

inline static constexpr unsigned int Class_3_3ACF40F7A59CD1EA_Struct_2_09C07909DCBF2E9A_TypeDefinitionIndex = 32503;

struct alignas(4) Class_3_3ACF40F7A59CD1EA_Struct_2_09C07909DCBF2E9A
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18

	/*
	::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::SGF::SEvent::SignalBase_DelegateWrapper>*))((::PBYTE)hIl2Cpp + CLASS_3_3ACF40F7A59CD1EA_STRUCT_2_09C07909DCBF2E9A__CTOR_OFFSET))(this, a1, a2);
	}
	*/

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3ACF40F7A59CD1EA_STRUCT_2_09C07909DCBF2E9A_DISPOSE_OFFSET))(this);
	}
};
