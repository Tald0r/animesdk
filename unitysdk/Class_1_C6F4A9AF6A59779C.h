#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C6F4A9AF6A59779C_Struct_2_ECCD4CD52E6AC90F.h"
#include "unitysdk/Enum_3_4A2C8292EF929042.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_238;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C6F4A9AF6A59779C_METHOD_1_50C28BACDA4A6A63_OFFSET UNITYSDK_OFFSET(0x7E466D0)
#define CLASS_1_C6F4A9AF6A59779C_METHOD_1_BF508D80265F8A02_OFFSET UNITYSDK_OFFSET(0x7E468F0)
#define CLASS_1_C6F4A9AF6A59779C_METHOD_1_C40151F06EF3D0F2_OFFSET UNITYSDK_OFFSET(0x7E46980)
#define CLASS_1_C6F4A9AF6A59779C_METHOD_1_D5ADB97A16E99B07_OFFSET UNITYSDK_OFFSET(0x7E46A20)
#define CLASS_1_C6F4A9AF6A59779C__CTOR_OFFSET UNITYSDK_OFFSET(0x7E46630)

inline static constexpr unsigned int Class_1_C6F4A9AF6A59779C_TypeDefinitionIndex = 54761;

class Class_1_C6F4A9AF6A59779C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::Class_1_C6F4A9AF6A59779C_Struct_2_ECCD4CD52E6AC90F>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6F4A9AF6A59779C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_50C28BACDA4A6A63(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6F4A9AF6A59779C_METHOD_1_50C28BACDA4A6A63_OFFSET))(this, a1);
	}

	::System::Void Method_1_C40151F06EF3D0F2(::Enum_3_4A2C8292EF929042& a1, ::Class_0_16E4307DCC419505_238*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_4A2C8292EF929042&, ::Class_0_16E4307DCC419505_238*&))((::PBYTE)hIl2Cpp + CLASS_1_C6F4A9AF6A59779C_METHOD_1_C40151F06EF3D0F2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D5ADB97A16E99B07(::System::Int32 a1, ::Enum_3_4A2C8292EF929042 a2, ::System::String* a3, ::Class_0_16E4307DCC419505_238* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Enum_3_4A2C8292EF929042, ::System::String*, ::Class_0_16E4307DCC419505_238*))((::PBYTE)hIl2Cpp + CLASS_1_C6F4A9AF6A59779C_METHOD_1_D5ADB97A16E99B07_OFFSET))(this, a1, a2, a3, a4);
	}

	::Enum_3_4A2C8292EF929042 Method_1_BF508D80265F8A02()
	{
		return ((::Enum_3_4A2C8292EF929042(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6F4A9AF6A59779C_METHOD_1_BF508D80265F8A02_OFFSET))(this);
	}
};
