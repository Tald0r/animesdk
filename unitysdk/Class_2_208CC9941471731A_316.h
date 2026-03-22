#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_48F4A404A08692BE_69.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_75.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_208CC9941471731A_316_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1682FDD0)
#define CLASS_2_208CC9941471731A_316__CTOR_OFFSET UNITYSDK_OFFSET(0x1682FDB0)

inline static constexpr unsigned int Class_2_208CC9941471731A_316_TypeDefinitionIndex = 11140;

class Class_2_208CC9941471731A_316 : public ::Class_1_48F4A404A08692BE_69
{
public:
	::System::Void _ctor(::Struct_2_3E75877A2888D88A_75 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_75, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_316__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_208CC9941471731A_316_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
