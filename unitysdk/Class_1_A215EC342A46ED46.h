#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9D0DA3B61DDF2467.h"
#include "unitysdk/Enum_3_DFCB42601400F441.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A215EC342A46ED46__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6B2580)

inline static constexpr unsigned int Class_1_A215EC342A46ED46_TypeDefinitionIndex = 48928;

class Class_1_A215EC342A46ED46 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A215EC342A46ED46_TypeDefinitionIndex)->GetStaticField(0x2E350);
	}
	static ::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::Enum_3_9D0DA3B61DDF2467>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A215EC342A46ED46_TypeDefinitionIndex)->GetStaticField(0x2E358);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_DFCB42601400F441, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A215EC342A46ED46_TypeDefinitionIndex)->GetStaticField(0x2E360);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_9D0DA3B61DDF2467, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A215EC342A46ED46_TypeDefinitionIndex)->GetStaticField(0x2E368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A215EC342A46ED46__CCTOR_OFFSET))();
	}
};
