#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_F79C1AA612159303;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4BAFC3388DC706BD_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x66AFBD0)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_4A9DEC7AF03BB968_1_OFFSET UNITYSDK_OFFSET(0x66AFC40)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_4A9DEC7AF03BB968_OFFSET UNITYSDK_OFFSET(0x66AF670)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_4DE37437EE984E30_OFFSET UNITYSDK_OFFSET(0x66AFFE0)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_5012DEB7320C101A_OFFSET UNITYSDK_OFFSET(0x66AFA10)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_7A09BAFC72BD26E9_OFFSET UNITYSDK_OFFSET(0x66AFAD0)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_DBD9CA657B972D6C_1_OFFSET UNITYSDK_OFFSET(0x66AFD50)
#define CLASS_1_4BAFC3388DC706BD_METHOD_1_DBD9CA657B972D6C_OFFSET UNITYSDK_OFFSET(0x66AF780)
#define CLASS_1_4BAFC3388DC706BD__CTOR_OFFSET UNITYSDK_OFFSET(0x66AF660)

inline static constexpr unsigned int Class_1_4BAFC3388DC706BD_TypeDefinitionIndex = 39812;

class Class_1_4BAFC3388DC706BD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_F79C1AA612159303*>* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4A9DEC7AF03BB968(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_4A9DEC7AF03BB968_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBD9CA657B972D6C(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_DBD9CA657B972D6C_OFFSET))(this, a1);
	}

	::Class_1_F79C1AA612159303* Method_1_5012DEB7320C101A(::System::Int32 a1)
	{
		return ((::Class_1_F79C1AA612159303*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_5012DEB7320C101A_OFFSET))(this, a1);
	}

	::Class_1_F79C1AA612159303* Method_1_7A09BAFC72BD26E9(::System::Int32 a1)
	{
		return ((::Class_1_F79C1AA612159303*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_7A09BAFC72BD26E9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_4A9DEC7AF03BB968_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_4A9DEC7AF03BB968_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DBD9CA657B972D6C_1(::System::Nullable_1<::System::Int32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_DBD9CA657B972D6C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DE37437EE984E30(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_4BAFC3388DC706BD_METHOD_1_4DE37437EE984E30_OFFSET))(this, a1, a2);
	}
};
