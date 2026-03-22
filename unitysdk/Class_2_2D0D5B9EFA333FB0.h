#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2D0D5B9EFA333FB0_METHOD_2_BC516BD7B592E51E_OFFSET UNITYSDK_OFFSET(0xB9750E0)
#define CLASS_2_2D0D5B9EFA333FB0_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB975190)
#define CLASS_2_2D0D5B9EFA333FB0__CCTOR_OFFSET UNITYSDK_OFFSET(0xB975060)
#define CLASS_2_2D0D5B9EFA333FB0__CTOR_OFFSET UNITYSDK_OFFSET(0xB9750D0)

inline static constexpr unsigned int Class_2_2D0D5B9EFA333FB0_TypeDefinitionIndex = 68983;

class Class_2_2D0D5B9EFA333FB0 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_1 = 0x73; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2D0D5B9EFA333FB0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D0D5B9EFA333FB0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BC516BD7B592E51E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D0D5B9EFA333FB0_METHOD_2_BC516BD7B592E51E_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D0D5B9EFA333FB0_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
