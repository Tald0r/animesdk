#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class String; }

#define CLASS_2_F9797BC922D2989D_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0x7478190)
#define CLASS_2_F9797BC922D2989D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7478240)
#define CLASS_2_F9797BC922D2989D__CCTOR_OFFSET UNITYSDK_OFFSET(0x7478110)
#define CLASS_2_F9797BC922D2989D__CTOR_OFFSET UNITYSDK_OFFSET(0x7478180)

inline static constexpr unsigned int Class_2_F9797BC922D2989D_TypeDefinitionIndex = 48369;

class Class_2_F9797BC922D2989D : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x93; // 0x0
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_1; // 0x20
	::Foundation::DoubleKeyDictionary_3<::System::String*, ::System::String*, ::System::Boolean>* Field_2_0; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F9797BC922D2989D__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9797BC922D2989D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9797BC922D2989D_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9797BC922D2989D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
