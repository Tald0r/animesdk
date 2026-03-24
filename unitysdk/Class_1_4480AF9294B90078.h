#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_36.h"
#include "unitysdk/System/Object.h"

class Class_1_1B26407BD81502D9;
class Class_1_7FF6398BD94D0866;
class Class_2_888C59F77423C576_1;
class Class_3_1361D861C639AF30_2;
class Class_3_D6C755F048CD66B4;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4480AF9294B90078_METHOD_1_66DAE9B745BF231B_OFFSET UNITYSDK_OFFSET(0xB129050)
#define CLASS_1_4480AF9294B90078_METHOD_1_B36E629C3DBCCDB8_OFFSET UNITYSDK_OFFSET(0xB1293A0)
#define CLASS_1_4480AF9294B90078_METHOD_1_C116CDC13EBA26D0_OFFSET UNITYSDK_OFFSET(0xB1294B0)
#define CLASS_1_4480AF9294B90078_METHOD_1_D5359631CB1E52CE_OFFSET UNITYSDK_OFFSET(0xB1292A0)
#define CLASS_1_4480AF9294B90078__CTOR_OFFSET UNITYSDK_OFFSET(0xB128F60)

inline static constexpr unsigned int Class_1_4480AF9294B90078_TypeDefinitionIndex = 70167;

class Class_1_4480AF9294B90078 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* Field_1_2; // 0x10
	::Class_2_888C59F77423C576_1* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_0A3761FE34514D6C_36, ::Class_1_7FF6398BD94D0866*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4480AF9294B90078__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_66DAE9B745BF231B(::Class_3_D6C755F048CD66B4* a1, ::Enum_3_0A3761FE34514D6C_36 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6C755F048CD66B4*, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_4480AF9294B90078_METHOD_1_66DAE9B745BF231B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5359631CB1E52CE(::Class_3_1361D861C639AF30_2* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1361D861C639AF30_2*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_4480AF9294B90078_METHOD_1_D5359631CB1E52CE_OFFSET))(this, a1, a2);
	}

	::Class_1_7FF6398BD94D0866* Method_1_B36E629C3DBCCDB8(::Enum_3_0A3761FE34514D6C_36 a1)
	{
		return ((::Class_1_7FF6398BD94D0866*(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_36))((::PBYTE)hIl2Cpp + CLASS_1_4480AF9294B90078_METHOD_1_B36E629C3DBCCDB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_C116CDC13EBA26D0(::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_1B26407BD81502D9*>*))((::PBYTE)hIl2Cpp + CLASS_1_4480AF9294B90078_METHOD_1_C116CDC13EBA26D0_OFFSET))(this, a1);
	}
};
