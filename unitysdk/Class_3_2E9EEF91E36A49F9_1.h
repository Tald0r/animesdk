#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_00CB503A02FBE2AB_OFFSET UNITYSDK_OFFSET(0x80CCA20)
#define CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_41CF9B9431532A25_OFFSET UNITYSDK_OFFSET(0x80CC860)
#define CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x80CCA90)
#define CLASS_3_2E9EEF91E36A49F9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x80CC820)

inline static constexpr unsigned int Class_3_2E9EEF91E36A49F9_1_TypeDefinitionIndex = 68451;

class Class_3_2E9EEF91E36A49F9_1 : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_1__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_41CF9B9431532A25()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_41CF9B9431532A25_OFFSET))(this);
	}

	::System::Void Method_3_00CB503A02FBE2AB(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_00CB503A02FBE2AB_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2E9EEF91E36A49F9_1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
