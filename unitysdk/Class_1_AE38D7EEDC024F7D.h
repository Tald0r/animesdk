#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_733608EBFF422EB8;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE38D7EEDC024F7D_METHOD_1_571A2AC31F86C30A_OFFSET UNITYSDK_OFFSET(0x99A2AE0)
#define CLASS_1_AE38D7EEDC024F7D_METHOD_1_9CA18D174A4ACF00_OFFSET UNITYSDK_OFFSET(0x99A3600)
#define CLASS_1_AE38D7EEDC024F7D_METHOD_1_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x99A37D0)
#define CLASS_1_AE38D7EEDC024F7D__CCTOR_OFFSET UNITYSDK_OFFSET(0x99A2A40)

inline static constexpr unsigned int Class_1_AE38D7EEDC024F7D_TypeDefinitionIndex = 39934;

class Class_1_AE38D7EEDC024F7D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_733608EBFF422EB8*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_733608EBFF422EB8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE38D7EEDC024F7D_TypeDefinitionIndex)->GetStaticField(0x444F0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE38D7EEDC024F7D__CCTOR_OFFSET))();
	}

	static ::Class_1_733608EBFF422EB8* Method_1_571A2AC31F86C30A(::System::Int32 a1)
	{
		return ((::Class_1_733608EBFF422EB8*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE38D7EEDC024F7D_METHOD_1_571A2AC31F86C30A_OFFSET))(a1);
	}

	static ::System::Void Method_1_DC715239B8B98D9C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AE38D7EEDC024F7D_METHOD_1_DC715239B8B98D9C_OFFSET))();
	}

	static ::System::Void Method_1_9CA18D174A4ACF00(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE38D7EEDC024F7D_METHOD_1_9CA18D174A4ACF00_OFFSET))(a1, a2, a3);
	}
};
