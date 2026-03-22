#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ELocalPlayType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_7;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08_METHOD_1_9D09207CC085C8F2_OFFSET UNITYSDK_OFFSET(0x758E520)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08_METHOD_1_B43DD0430B0FE876_OFFSET UNITYSDK_OFFSET(0x758E570)
#define CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08__CTOR_OFFSET UNITYSDK_OFFSET(0x758E510)

inline static constexpr unsigned int Class_2_A7165A858F83C5DB_Class_1_3F8279A1D2BC2E08_TypeDefinitionIndex = 67113;

class Class_2_A7165A858F83C5DB_Class_1_3F8279A1D2BC2E08 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::Class_0_16E4307DCC419505_7*>* Field_1_2; // 0x18
	::MoleMole::ELocalPlayType Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9D09207CC085C8F2(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08_METHOD_1_9D09207CC085C8F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_B43DD0430B0FE876(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_A7165A858F83C5DB_CLASS_1_3F8279A1D2BC2E08_METHOD_1_B43DD0430B0FE876_OFFSET))(this, a1);
	}
};
