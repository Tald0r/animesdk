#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3F25D73453EF6AE1;

#define CLASS_1_3F25D73453EF6AE1_CLASS_1_2DD041567B183EA2_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AD2F650)
#define CLASS_1_3F25D73453EF6AE1_CLASS_1_2DD041567B183EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD2F6F0)

inline static constexpr unsigned int Class_1_3F25D73453EF6AE1_Class_1_2DD041567B183EA2_TypeDefinitionIndex = 8029;

class Class_1_3F25D73453EF6AE1_Class_1_2DD041567B183EA2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F25D73453EF6AE1_CLASS_1_2DD041567B183EA2__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_3F25D73453EF6AE1* a1, ::Class_1_3F25D73453EF6AE1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F25D73453EF6AE1*, ::Class_1_3F25D73453EF6AE1*))((::PBYTE)hIl2Cpp + CLASS_1_3F25D73453EF6AE1_CLASS_1_2DD041567B183EA2_COMPARE_OFFSET))(this, a1, a2);
	}
};
