#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_167D507E8E6690AC;
namespace System { class String; }

#define STRUCT_2_EFE356ABDC0704AC_METHOD_2_0ADBFCDD949F3913_OFFSET UNITYSDK_OFFSET(0x36FD50)
#define STRUCT_2_EFE356ABDC0704AC_METHOD_2_4A5A7271F36D2FB6_OFFSET UNITYSDK_OFFSET(0x9BFA980)
#define STRUCT_2_EFE356ABDC0704AC_METHOD_2_CA4BA472172DF486_OFFSET UNITYSDK_OFFSET(0x36FD60)
#define STRUCT_2_EFE356ABDC0704AC_METHOD_2_D756667AB3EC0D6E_OFFSET UNITYSDK_OFFSET(0x36FCD0)
#define STRUCT_2_EFE356ABDC0704AC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x36FCC0)
#define STRUCT_2_EFE356ABDC0704AC__CTOR_1_OFFSET UNITYSDK_OFFSET(0x36FC50)
#define STRUCT_2_EFE356ABDC0704AC__CTOR_OFFSET UNITYSDK_OFFSET(0x36FC30)

inline static constexpr unsigned int Struct_2_EFE356ABDC0704AC_TypeDefinitionIndex = 52210;

struct alignas(8) Struct_2_EFE356ABDC0704AC
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::Il2CppArray<::System::String*>* Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_3_167D507E8E6690AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_167D507E8E6690AC*))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	static ::System::String* Method_2_4A5A7271F36D2FB6(::System::Int32 a1, ::Il2CppArray<::System::String*>* a2)
	{
		return ((::System::String*(*)(::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC_METHOD_2_4A5A7271F36D2FB6_OFFSET))(a1, a2);
	}

	::System::String* Method_2_D756667AB3EC0D6E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC_METHOD_2_D756667AB3EC0D6E_OFFSET))(this);
	}

	::System::String* Method_2_0ADBFCDD949F3913()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC_METHOD_2_0ADBFCDD949F3913_OFFSET))(this);
	}

	::System::String* Method_2_CA4BA472172DF486()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EFE356ABDC0704AC_METHOD_2_CA4BA472172DF486_OFFSET))(this);
	}
};
