#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

class Class_2_39E2D7E8A370D068;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C688B00AE4069C2F_METHOD_3_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x87CC150)
#define CLASS_3_C688B00AE4069C2F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87CC1E0)
#define CLASS_3_C688B00AE4069C2F__CTOR_OFFSET UNITYSDK_OFFSET(0x87CC0B0)

inline static constexpr unsigned int Class_3_C688B00AE4069C2F_TypeDefinitionIndex = 67011;

class Class_3_C688B00AE4069C2F : public ::Class_2_BCA32DB678A03168
{
public:
	::Class_2_39E2D7E8A370D068* Field_3_1; // 0x38
	::System::Int32 Field_3_0; // 0x40

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C688B00AE4069C2F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C688B00AE4069C2F_METHOD_3_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C688B00AE4069C2F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
