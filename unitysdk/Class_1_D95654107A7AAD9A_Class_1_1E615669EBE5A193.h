#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193_METHOD_1_2BFE4774DD175E6F_OFFSET UNITYSDK_OFFSET(0x9C1C4E0)
#define CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193_METHOD_1_C17933F1D71050B0_OFFSET UNITYSDK_OFFSET(0x9C1C720)
#define CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193__CTOR_OFFSET UNITYSDK_OFFSET(0x9C1C4D0)

inline static constexpr unsigned int Class_1_D95654107A7AAD9A_Class_1_1E615669EBE5A193_TypeDefinitionIndex = 59433;

class Class_1_D95654107A7AAD9A_Class_1_1E615669EBE5A193 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2BFE4774DD175E6F(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193_METHOD_1_2BFE4774DD175E6F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C17933F1D71050B0(::System::UInt16 a1, ::System::UInt16 a2, ::System::UInt16 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_D95654107A7AAD9A_CLASS_1_1E615669EBE5A193_METHOD_1_C17933F1D71050B0_OFFSET))(this, a1, a2, a3);
	}
};
