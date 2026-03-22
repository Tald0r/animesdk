#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_278;
class Class_0_16E4307DCC419505_357;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
template <typename T> class Class_0_16E4307DCC41950C_22;

#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_239041C3652AD136_OFFSET UNITYSDK_OFFSET(0x7ACC670)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x7ACC730)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_68259CDE5658E964_OFFSET UNITYSDK_OFFSET(0x7ACC5D0)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_7F2D5FFE10207A9C_OFFSET UNITYSDK_OFFSET(0x7ACC490)
#define CLASS_1_1A1C02861C9E4CC1_METHOD_1_F022240BD49C933E_OFFSET UNITYSDK_OFFSET(0x7ACC7F0)
#define CLASS_1_1A1C02861C9E4CC1__CTOR_OFFSET UNITYSDK_OFFSET(0x7ACC400)

inline static constexpr unsigned int Class_1_1A1C02861C9E4CC1_TypeDefinitionIndex = 62375;

class Class_1_1A1C02861C9E4CC1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_357*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_357* Method_1_7F2D5FFE10207A9C(::Class_0_16E4307DCC419505_278* a1)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::Class_0_16E4307DCC419505_278*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_7F2D5FFE10207A9C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_357*>* Method_1_68259CDE5658E964()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_357*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_68259CDE5658E964_OFFSET))(this);
	}

	::System::Void Method_1_239041C3652AD136(::Class_0_16E4307DCC419505_278* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_278*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_239041C3652AD136_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_357* Method_1_F022240BD49C933E(::System::Type* a1)
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_1A1C02861C9E4CC1_METHOD_1_F022240BD49C933E_OFFSET))(this, a1);
	}
};
