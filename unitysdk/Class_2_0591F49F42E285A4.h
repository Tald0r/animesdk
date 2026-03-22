#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace System { class String; }
template <typename T> class Class_0_16E4307DCC419505_103;

#define CLASS_2_0591F49F42E285A4_METHOD_2_68053EB4BA68391B_OFFSET UNITYSDK_OFFSET(0xB80CFD0)
#define CLASS_2_0591F49F42E285A4_METHOD_2_AFBA597D3FD10F69_OFFSET UNITYSDK_OFFSET(0xB80D250)
#define CLASS_2_0591F49F42E285A4_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xB80CE30)
#define CLASS_2_0591F49F42E285A4__CTOR_OFFSET UNITYSDK_OFFSET(0xB80CF50)

inline static constexpr unsigned int Class_2_0591F49F42E285A4_TypeDefinitionIndex = 64115;

class Class_2_0591F49F42E285A4 : public ::Class_1_F57C3EEEB03201AF
{
public:
	::Class_0_16E4307DCC419505_103<::System::Boolean>* Field_2_4; // 0x60
	::Class_0_16E4307DCC419505_103<::System::String*>* Field_2_1; // 0x68
	::Class_0_16E4307DCC419505_103<::System::Int32>* Field_2_3; // 0x70
	::Class_0_16E4307DCC419505_103<::System::Int32>* Field_2_2; // 0x78
	::Class_0_16E4307DCC419505_103<::System::Int32>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0591F49F42E285A4__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0591F49F42E285A4_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Method_2_68053EB4BA68391B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0591F49F42E285A4_METHOD_2_68053EB4BA68391B_OFFSET))(this, a1);
	}

	static ::Class_2_0591F49F42E285A4* Method_2_AFBA597D3FD10F69(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Class_2_0591F49F42E285A4*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0591F49F42E285A4_METHOD_2_AFBA597D3FD10F69_OFFSET))(a1, a2);
	}
};
