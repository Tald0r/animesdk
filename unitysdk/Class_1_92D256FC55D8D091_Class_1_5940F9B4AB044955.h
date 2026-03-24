#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HollowEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92D256FC55D8D091_CLASS_1_5940F9B4AB044955_METHOD_1_2C269884FD87ACA5_OFFSET UNITYSDK_OFFSET(0x93984D0)
#define CLASS_1_92D256FC55D8D091_CLASS_1_5940F9B4AB044955__CTOR_OFFSET UNITYSDK_OFFSET(0x93984C0)

inline static constexpr unsigned int Class_1_92D256FC55D8D091_Class_1_5940F9B4AB044955_TypeDefinitionIndex = 57781;

class Class_1_92D256FC55D8D091_Class_1_5940F9B4AB044955 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::HollowEntityConfig*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_5940F9B4AB044955__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C269884FD87ACA5(::MoleMole::HollowEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_92D256FC55D8D091_CLASS_1_5940F9B4AB044955_METHOD_1_2C269884FD87ACA5_OFFSET))(this, a1);
	}
};
