#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define CLASS_2_473B22666969158B_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xAE85370)
#define CLASS_2_473B22666969158B_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAE85420)
#define CLASS_2_473B22666969158B__CCTOR_OFFSET UNITYSDK_OFFSET(0xAE852F0)
#define CLASS_2_473B22666969158B__CTOR_OFFSET UNITYSDK_OFFSET(0xAE85360)

inline static constexpr unsigned int Class_2_473B22666969158B_TypeDefinitionIndex = 58295;

class Class_2_473B22666969158B : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x93; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_1; // 0x20
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_473B22666969158B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473B22666969158B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473B22666969158B_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_473B22666969158B_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
