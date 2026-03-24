#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_A469760BB3F02E8B_METHOD_1_28C834B59E1D0120_OFFSET UNITYSDK_OFFSET(0x905EB30)
#define CLASS_1_A469760BB3F02E8B_METHOD_1_7F20D9555862CF22_OFFSET UNITYSDK_OFFSET(0x905E940)
#define CLASS_1_A469760BB3F02E8B__CCTOR_OFFSET UNITYSDK_OFFSET(0x905E8A0)

inline static constexpr unsigned int Class_1_A469760BB3F02E8B_TypeDefinitionIndex = 69800;

class Class_1_A469760BB3F02E8B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::Class_1_B7E341C5F1A6F199*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::Stack_1<::Class_1_B7E341C5F1A6F199*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A469760BB3F02E8B_TypeDefinitionIndex)->GetStaticField(0x447A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A469760BB3F02E8B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7F20D9555862CF22(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_A469760BB3F02E8B_METHOD_1_7F20D9555862CF22_OFFSET))(a1);
	}

	static ::System::Void Method_1_28C834B59E1D0120()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A469760BB3F02E8B_METHOD_1_28C834B59E1D0120_OFFSET))();
	}
};
