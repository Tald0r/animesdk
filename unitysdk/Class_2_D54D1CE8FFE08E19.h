#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_20.h"

class Class_1_7FB7FF41CDDF4472;
class Class_1_9C9F648C2B4D18AF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_D54D1CE8FFE08E19_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x5FBE980)
#define CLASS_2_D54D1CE8FFE08E19_METHOD_2_46491FB6EF65FDCE_OFFSET UNITYSDK_OFFSET(0x5FBE9E0)
#define CLASS_2_D54D1CE8FFE08E19_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x5FBE920)
#define CLASS_2_D54D1CE8FFE08E19_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x5FBE8C0)
#define CLASS_2_D54D1CE8FFE08E19__CTOR_OFFSET UNITYSDK_OFFSET(0x5FBE820)

inline static constexpr unsigned int Class_2_D54D1CE8FFE08E19_TypeDefinitionIndex = 39169;

class Class_2_D54D1CE8FFE08E19 : public ::Class_1_43BD383C98B4C0C5_20
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7FB7FF41CDDF4472*>* Field_2_1; // 0x10
	::Class_1_9C9F648C2B4D18AF* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_9C9F648C2B4D18AF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9C9F648C2B4D18AF*))((::PBYTE)hIl2Cpp + CLASS_2_D54D1CE8FFE08E19__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D54D1CE8FFE08E19_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D54D1CE8FFE08E19_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D54D1CE8FFE08E19_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7FB7FF41CDDF4472*>* Method_2_46491FB6EF65FDCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_7FB7FF41CDDF4472*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D54D1CE8FFE08E19_METHOD_2_46491FB6EF65FDCE_OFFSET))(this);
	}
};
