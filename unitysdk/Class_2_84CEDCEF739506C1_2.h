#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_353.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_716.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_84CEDCEF739506C1_2_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x9547B30)
#define CLASS_2_84CEDCEF739506C1_2_METHOD_2_59F6FE123624E5B2_1_OFFSET UNITYSDK_OFFSET(0x9547CB0)
#define CLASS_2_84CEDCEF739506C1_2_METHOD_2_59F6FE123624E5B2_OFFSET UNITYSDK_OFFSET(0x9547B40)
#define CLASS_2_84CEDCEF739506C1_2_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x9547CA0)
#define CLASS_2_84CEDCEF739506C1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x9547B00)

inline static constexpr unsigned int Class_2_84CEDCEF739506C1_2_TypeDefinitionIndex = 42333;

class Class_2_84CEDCEF739506C1_2 : public ::Class_1_5DA2E7556103D5A3_353
{
public:
	::System::String* Field_2_0; // 0x170

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_716 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_716, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_2_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_59F6FE123624E5B2()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_2_METHOD_2_59F6FE123624E5B2_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_2_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>* Method_2_59F6FE123624E5B2_1()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::DamageElementType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_2_METHOD_2_59F6FE123624E5B2_1_OFFSET))(this);
	}
};
