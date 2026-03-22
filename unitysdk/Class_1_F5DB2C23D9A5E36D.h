#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F5DB2C23D9A5E36D__CTOR_OFFSET UNITYSDK_OFFSET(0x16EAAA90)

inline static constexpr unsigned int Class_1_F5DB2C23D9A5E36D_TypeDefinitionIndex = 64434;

class Class_1_F5DB2C23D9A5E36D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::MoleMole::Level::RatingType Field_1_2; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5DB2C23D9A5E36D__CTOR_OFFSET))(this);
	}
};
