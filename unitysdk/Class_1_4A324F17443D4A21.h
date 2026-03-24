#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4A324F17443D4A21_Struct_2_251F1B827E8CC10E.h"
#include "unitysdk/Enum_3_5DA5A8B5C7266F47.h"
#include "unitysdk/MoleMole/Config/InputGroup.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4A324F17443D4A21_METHOD_1_0DE8B4092C368D9D_OFFSET UNITYSDK_OFFSET(0x8A3BA40)
#define CLASS_1_4A324F17443D4A21_METHOD_1_3E9D38749D34ADA8_OFFSET UNITYSDK_OFFSET(0x8A3C660)
#define CLASS_1_4A324F17443D4A21_METHOD_1_5483A94A006B5CF3_OFFSET UNITYSDK_OFFSET(0x8A3C360)
#define CLASS_1_4A324F17443D4A21_METHOD_1_609597AE5EDC82C3_OFFSET UNITYSDK_OFFSET(0x8A3C860)
#define CLASS_1_4A324F17443D4A21_METHOD_1_93AE9473E0946D46_OFFSET UNITYSDK_OFFSET(0x8A3BCE0)
#define CLASS_1_4A324F17443D4A21_METHOD_1_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8A3C080)
#define CLASS_1_4A324F17443D4A21__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A3B9B0)

inline static constexpr unsigned int Class_1_4A324F17443D4A21_TypeDefinitionIndex = 74643;

class Class_1_4A324F17443D4A21 : public ::System::Object
{
public:
	static ::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Enum_3_5DA5A8B5C7266F47>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A324F17443D4A21_TypeDefinitionIndex)->GetStaticField(0x38090);
	}
	static ::System::Collections::Generic::List_1<::Class_1_4A324F17443D4A21_Struct_2_251F1B827E8CC10E>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_1_4A324F17443D4A21_Struct_2_251F1B827E8CC10E>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A324F17443D4A21_TypeDefinitionIndex)->GetStaticField(0x38098);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0DE8B4092C368D9D(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_0DE8B4092C368D9D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_93AE9473E0946D46(::Enum_3_5DA5A8B5C7266F47 a1, ::MoleMole::Config::InputGroup a2)
	{
		return ((::System::Void(*)(::Enum_3_5DA5A8B5C7266F47, ::MoleMole::Config::InputGroup))((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_93AE9473E0946D46_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_EC2B405D0723571D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_EC2B405D0723571D_OFFSET))();
	}

	static ::System::Void Method_1_5483A94A006B5CF3(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_5483A94A006B5CF3_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_3E9D38749D34ADA8(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_3E9D38749D34ADA8_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_1_609597AE5EDC82C3(::System::Boolean a1, ::MoleMole::Config::InputGroup a2, ::Enum_3_5DA5A8B5C7266F47 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Config::InputGroup, ::Enum_3_5DA5A8B5C7266F47, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4A324F17443D4A21_METHOD_1_609597AE5EDC82C3_OFFSET))(a1, a2, a3, a4, a5);
	}
};
