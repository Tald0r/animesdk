#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_F48747CEB75F13E1_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x77C3680)
#define CLASS_2_F48747CEB75F13E1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x77C37B0)
#define CLASS_2_F48747CEB75F13E1_METHOD_2_EC02C4ADC7E4B586_OFFSET UNITYSDK_OFFSET(0x77C3730)
#define CLASS_2_F48747CEB75F13E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x77C3600)
#define CLASS_2_F48747CEB75F13E1__CTOR_OFFSET UNITYSDK_OFFSET(0x77C3670)

inline static constexpr unsigned int Class_2_F48747CEB75F13E1_TypeDefinitionIndex = 42914;

class Class_2_F48747CEB75F13E1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0xDC; // 0x0
	::System::String* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_EC02C4ADC7E4B586(::System::UInt32 a1, ::System::UInt32 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_METHOD_2_EC02C4ADC7E4B586_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F48747CEB75F13E1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
