#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9CA189FF4A6EA6EE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_644E4FEB6EBD783A_METHOD_1_44B68B256F55C7D3_OFFSET UNITYSDK_OFFSET(0x672E3D0)
#define CLASS_1_644E4FEB6EBD783A_METHOD_1_5ACCC524E3DAA698_OFFSET UNITYSDK_OFFSET(0x672E8C0)
#define CLASS_1_644E4FEB6EBD783A_METHOD_1_9400729E6F34C1B9_OFFSET UNITYSDK_OFFSET(0x672E5C0)
#define CLASS_1_644E4FEB6EBD783A_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x672E360)
#define CLASS_1_644E4FEB6EBD783A__CTOR_OFFSET UNITYSDK_OFFSET(0x672E250)

inline static constexpr unsigned int Class_1_644E4FEB6EBD783A_TypeDefinitionIndex = 47486;

class Class_1_644E4FEB6EBD783A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_9CA189FF4A6EA6EE>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_644E4FEB6EBD783A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_644E4FEB6EBD783A_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::Struct_2_9CA189FF4A6EA6EE Method_1_5ACCC524E3DAA698(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::Struct_2_9CA189FF4A6EA6EE(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_644E4FEB6EBD783A_METHOD_1_5ACCC524E3DAA698_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9400729E6F34C1B9(::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_9CA189FF4A6EA6EE>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_9CA189FF4A6EA6EE>*))((::PBYTE)hIl2Cpp + CLASS_1_644E4FEB6EBD783A_METHOD_1_9400729E6F34C1B9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_9CA189FF4A6EA6EE>* Method_1_44B68B256F55C7D3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Struct_2_9CA189FF4A6EA6EE>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_644E4FEB6EBD783A_METHOD_1_44B68B256F55C7D3_OFFSET))(this);
	}
};
