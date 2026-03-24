#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_50.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_521ECD3F2C923FDE_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x70AD9F0)
#define CLASS_2_521ECD3F2C923FDE_METHOD_2_98B9949D202368EF_OFFSET UNITYSDK_OFFSET(0x70ADB90)
#define CLASS_2_521ECD3F2C923FDE_METHOD_2_BE6751C01DF3E7EC_OFFSET UNITYSDK_OFFSET(0x70ADAB0)
#define CLASS_2_521ECD3F2C923FDE__CTOR_OFFSET UNITYSDK_OFFSET(0x70AD970)

inline static constexpr unsigned int Class_2_521ECD3F2C923FDE_TypeDefinitionIndex = 42456;

class Class_2_521ECD3F2C923FDE : public ::Class_1_43BD383C98B4C0C5_50
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_521ECD3F2C923FDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_521ECD3F2C923FDE_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_BE6751C01DF3E7EC(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_521ECD3F2C923FDE_METHOD_2_BE6751C01DF3E7EC_OFFSET))(this, a1);
	}

	::System::Void Method_2_98B9949D202368EF(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_521ECD3F2C923FDE_METHOD_2_98B9949D202368EF_OFFSET))(this, a1, a2);
	}
};
