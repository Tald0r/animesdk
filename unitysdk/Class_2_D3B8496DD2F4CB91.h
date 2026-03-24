#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A3658A741325FC2.h"
#include "unitysdk/Enum_3_7609C87F8335DE37_4.h"

class Class_2_9CF591E9FCB0B5F1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_13CC54082E9757C7_OFFSET UNITYSDK_OFFSET(0xB64D500)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_4882669D4F2E7A3C_OFFSET UNITYSDK_OFFSET(0x66BB040)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_6242B2526D287466_OFFSET UNITYSDK_OFFSET(0x66BAE10)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_98731A8D0085C0C4_OFFSET UNITYSDK_OFFSET(0xB64D3E0)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_B3A8877A146D62E8_OFFSET UNITYSDK_OFFSET(0x66BACA0)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x66BB2E0)
#define CLASS_2_D3B8496DD2F4CB91_METHOD_2_DE7E67C6E4A905B8_OFFSET UNITYSDK_OFFSET(0xB64D470)
#define CLASS_2_D3B8496DD2F4CB91__CCTOR_OFFSET UNITYSDK_OFFSET(0x66BAC60)
#define CLASS_2_D3B8496DD2F4CB91__CTOR_OFFSET UNITYSDK_OFFSET(0x66BAB90)

inline static constexpr unsigned int Class_2_D3B8496DD2F4CB91_TypeDefinitionIndex = 61121;

class Class_2_D3B8496DD2F4CB91 : public ::Class_1_8A3658A741325FC2
{
public:
	static ::Class_2_9CF591E9FCB0B5F1** StaticGet_Field_2_3()
	{
		return (::Class_2_9CF591E9FCB0B5F1**)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3B8496DD2F4CB91_TypeDefinitionIndex)->GetStaticField(0x3E590);
	}
	static ::System::Boolean* StaticGet_Field_2_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_D3B8496DD2F4CB91_TypeDefinitionIndex)->GetStaticField(0xF270);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_2_9CF591E9FCB0B5F1*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B3A8877A146D62E8(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_B3A8877A146D62E8_OFFSET))(this, a1);
	}

	static ::Class_2_9CF591E9FCB0B5F1* Method_2_6242B2526D287466()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_6242B2526D287466_OFFSET))();
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_4882669D4F2E7A3C(::Enum_3_7609C87F8335DE37_4 a1)
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_4882669D4F2E7A3C_OFFSET))(this, a1);
	}

	::System::Void Method_2_C50A2293958CA940(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_C50A2293958CA940_OFFSET))(this, a1);
	}

	::System::Void Method_2_98731A8D0085C0C4(::Enum_3_7609C87F8335DE37_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_98731A8D0085C0C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE7E67C6E4A905B8(::Enum_3_7609C87F8335DE37_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7609C87F8335DE37_4))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_DE7E67C6E4A905B8_OFFSET))(this, a1);
	}

	::Class_2_9CF591E9FCB0B5F1* Method_2_13CC54082E9757C7()
	{
		return ((::Class_2_9CF591E9FCB0B5F1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3B8496DD2F4CB91_METHOD_2_13CC54082E9757C7_OFFSET))(this);
	}
};
