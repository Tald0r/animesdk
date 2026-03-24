#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_4_FD59C15DAC5892A5_31___C_METHOD_1_F36ECC94BB21B573_OFFSET UNITYSDK_OFFSET(0x8B1F320)
#define CLASS_4_FD59C15DAC5892A5_31___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B1F2D0)
#define CLASS_4_FD59C15DAC5892A5_31___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B1F310)

inline static constexpr unsigned int Class_4_FD59C15DAC5892A5_31___c_TypeDefinitionIndex = 68894;

class Class_4_FD59C15DAC5892A5_31___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::System::UInt32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_FD59C15DAC5892A5_31___c_TypeDefinitionIndex)->GetStaticField(0x3FA70);
	}
	static ::Class_4_FD59C15DAC5892A5_31___c** StaticGet___9()
	{
		return (::Class_4_FD59C15DAC5892A5_31___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_FD59C15DAC5892A5_31___c_TypeDefinitionIndex)->GetStaticField(0x3FA78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_FD59C15DAC5892A5_31___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_FD59C15DAC5892A5_31___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F36ECC94BB21B573(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_FD59C15DAC5892A5_31___C_METHOD_1_F36ECC94BB21B573_OFFSET))(this, a1);
	}
};
